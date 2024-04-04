/*
 * Inline winhttp implementation header with a RAII interface.
 * ELDEN RING is already dynamically linked against winhttp.dll.
 */

#include <detail/windows.inl>
#include <winhttp.h>

#include <cstddef>
#include <cstdint>
#include <iterator>
#include <limits>
#include <memory>
#include <string>
#include <utility>

namespace liber {
// Retrieves and binds needed winhttp exports.
// Failing to bind an export leaves a placeholder,
// which returns a default value HINSTANCE() aka nullptr
// or BOOL() aka 0/false for graceful error handling.
static class winhttp_exports {
    template <typename T>
    static inline T _placeholder(auto...) noexcept {
        return T{};
    }

public:
    decltype(&::WinHttpOpen) WinHttpOpen = _placeholder;
    decltype(&::WinHttpCloseHandle) WinHttpCloseHandle = _placeholder;
    decltype(&::WinHttpConnect) WinHttpConnect = _placeholder;
    decltype(&::WinHttpOpenRequest) WinHttpOpenRequest = _placeholder;
    decltype(&::WinHttpSendRequest) WinHttpSendRequest = _placeholder;
    decltype(&::WinHttpReceiveResponse) WinHttpReceiveResponse = _placeholder;
    decltype(&::WinHttpQueryDataAvailable) WinHttpQueryDataAvailable =
        _placeholder;
    decltype(&::WinHttpReadData) WinHttpReadData = _placeholder;

    winhttp_exports() noexcept {
#define LIBER_GET_SET_PROC(NAME)                                               \
    {                                                                          \
        FARPROC proc = GetProcAddress(handle, #NAME);                          \
        if (proc) this->NAME = reinterpret_cast<decltype(this->NAME)>(proc);   \
    }
        // Anti-FreeLibrary guarantee:
        HMODULE handle = LoadLibraryW(L"winhttp.dll");
        if (!handle) return;
        LIBER_GET_SET_PROC(WinHttpOpen)
        LIBER_GET_SET_PROC(WinHttpCloseHandle)
        LIBER_GET_SET_PROC(WinHttpConnect)
        LIBER_GET_SET_PROC(WinHttpOpenRequest)
        LIBER_GET_SET_PROC(WinHttpSendRequest)
        LIBER_GET_SET_PROC(WinHttpReceiveResponse)
        LIBER_GET_SET_PROC(WinHttpQueryDataAvailable)
        LIBER_GET_SET_PROC(WinHttpReadData)
#undef LIBER_GET_SET_PROC
    }
} winhttp;

// RAII base class representing a handle to a winhttp object
// Non-copyable, non-assignable, movable
class winhttp_handle {
    HINTERNET handle = NULL;

public:
    winhttp_handle() = default;

    virtual ~winhttp_handle() noexcept {
        if (this->handle) winhttp.WinHttpCloseHandle(this->handle);
    }

    winhttp_handle(const winhttp_handle&) = delete;
    winhttp_handle& operator=(const winhttp_handle&) = delete;
    winhttp_handle& operator=(winhttp_handle&& rhs) noexcept = delete;

    winhttp_handle(winhttp_handle&& other) noexcept : handle(other.handle) {
        other.handle = NULL;
    }

    bool has_value() const noexcept {
        return this->handle;
    }

    explicit operator bool() const noexcept {
        return this->handle;
    }

    winhttp_handle(HINTERNET handle) : handle(handle) {}

    HINTERNET native_handle() const noexcept {
        return this->handle;
    }
};

// Wrapper for winhttp requests
// Provides file reading capabilities
// Lifetime: cannot outlive the owning connection or session
class winhttp_request : public winhttp_handle {
public:
    using winhttp_handle::winhttp_handle;

    bool send() noexcept {
        return winhttp.WinHttpSendRequest(this->native_handle(),
            WINHTTP_NO_ADDITIONAL_HEADERS, 0, WINHTTP_NO_REQUEST_DATA, 0, 0, 0);
    }

    bool receive() noexcept {
        return winhttp.WinHttpReceiveResponse(this->native_handle(), NULL);
    }

    bool count_available(DWORD& count) noexcept {
        return winhttp.WinHttpQueryDataAvailable(this->native_handle(), &count);
    }

    // Constraint: contigious memory iterators
    template <std::contiguous_iterator Iter>
    bool read_available(Iter first, Iter last, DWORD& count) noexcept {
        auto d = static_cast<size_t>(last - first);
        if (d > std::numeric_limits<DWORD>::max()) return false;
        return winhttp.WinHttpReadData(this->native_handle(),
            (LPVOID)(std::addressof(*first)), static_cast<DWORD>(d), &count);
    }

private:
    friend class winhttp_connection;

    winhttp_request(const std::shared_ptr<winhttp_handle>& connection,
        const wchar_t* verb, const std::wstring& obj)
        : winhttp_handle(winhttp.WinHttpOpenRequest(connection->native_handle(),
              verb, obj.c_str(), NULL, WINHTTP_NO_REFERER,
              WINHTTP_DEFAULT_ACCEPT_TYPES, WINHTTP_FLAG_SECURE)),
          connection(std::move(connection)) {}

    std::shared_ptr<winhttp_handle> connection;
};

// Connection wrapper that can create requests,
// supports "GET"ting files.
// Lifetime: cannot outlive the owning session
class winhttp_connection : public winhttp_handle {
public:
    using winhttp_handle::winhttp_handle;

    [[nodiscard]] static winhttp_request request(
        const std::shared_ptr<winhttp_connection>& connection,
        const wchar_t* verb, const std::wstring& obj) noexcept {
        return winhttp_request(connection, verb, obj);
    }

private:
    friend class winhttp_session;

    winhttp_connection(
        std::shared_ptr<winhttp_handle> session, const wchar_t* server)
        : winhttp_handle(winhttp.WinHttpConnect(session->native_handle(),
              server, INTERNET_DEFAULT_HTTPS_PORT, 0)),
          session(std::move(session)) {}

    std::shared_ptr<winhttp_handle> session;
};

// The main winhttp session class
// Allows establishing a connection and communicating online through winhttp
class winhttp_session : public winhttp_handle {
    using winhttp_handle::winhttp_handle;
    winhttp_session()
        : winhttp_handle(winhttp.WinHttpOpen(L"UserAgent/1.0",
              WINHTTP_ACCESS_TYPE_AUTOMATIC_PROXY, WINHTTP_NO_PROXY_NAME,
              WINHTTP_NO_PROXY_BYPASS, NULL)) {}

public:
    // Create a winhttp session
    [[nodiscard]] static std::shared_ptr<winhttp_session> create() noexcept {
        return std::shared_ptr<winhttp_session>{ new winhttp_session() };
    }

    // Create a new winhttp connection
    [[nodiscard]] static std::shared_ptr<winhttp_connection> connect(
        const std::shared_ptr<winhttp_session>& session,
        const wchar_t* server) noexcept {
        return std::shared_ptr<winhttp_connection>{ new winhttp_connection(
            session, server) };
    }
};

// Request and attempt to download a file
// through an established winhttp connection
[[nodiscard]] static std::string get_file(
    const std::shared_ptr<winhttp_connection>& connection,
    const std::wstring& name) noexcept {
    // Try to create and send the request and receive back the file bytes
    winhttp_request request =
        winhttp_connection::request(connection, L"GET", name);
    if (!request || !request.send() || !request.receive()) return "";
    std::string out;
    // Read bytes until running out,
    // or a winhttp error occurs
    while (true) {
        DWORD cb_read = 0;
        DWORD cb_available = 0;
        if (!request.count_available(cb_available)) return "";
        if (!cb_available) break;
        out.append(cb_available, '\0');
        if (!request.read_available(
                out.end() - cb_available, out.end(), cb_read))
            return "";
        if (!cb_read) break;
    }
    return out;
}
} // namespace liber