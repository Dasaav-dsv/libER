#include <version/version.h>
#include <detail/defines.hpp>
#include <version/detail/version_fileio.h>
#include <version/detail/version_winhttp.h>

#include <detail/windows.inl>
#include <atomic>
#include <string>
#include <sstream>

#define VS_SIGNATURE 0xFEEF04BD

using namespace liber;

static uversion cached_ver;
static std::string cached_ver_str;
static std::atomic_flag contended;

uversion liber::get_version() noexcept {
    if (cached_ver) return cached_ver;
    else if (contended.test_and_set()) {
        // Another thread is already retrieving the version
        contended.wait(true);
        return cached_ver;
    }
    // No contention, proceed to retrieve version information
    uversion version = [] {
        // Resource: VS_VERSION, resource type: RT_VERSION
        HRSRC resource_handle = FindResourceW(NULL, MAKEINTRESOURCEW(1), MAKEINTRESOURCEW(16));
        if (!resource_handle) return LIBER_INVALID_VERSION;
        HGLOBAL global_handle = LoadResource(NULL, resource_handle);
        if (!global_handle) return LIBER_INVALID_VERSION;
        DWORD* resource_start = reinterpret_cast<DWORD*>(LockResource(global_handle));
        if (!resource_start) return LIBER_INVALID_VERSION;
        // The first field of the resource is its length in bytes
        DWORD* resource_end = reinterpret_cast<DWORD*>(
            reinterpret_cast<uintptr_t>(resource_start) + *resource_start);
        // Look for the resource signature, which indicates the begining of the resource data
        while (*(resource_start++) != VS_SIGNATURE)
            if (resource_start >= resource_end) return LIBER_INVALID_VERSION;
        VS_FIXEDFILEINFO* fixed_file_info = reinterpret_cast<VS_FIXEDFILEINFO*>(resource_start);
        long long version_result = (static_cast<long long>(fixed_file_info->dwFileVersionLS) << 32)
            | fixed_file_info->dwFileVersionMS;
        return version_result ? version_result : LIBER_INVALID_VERSION;
    } ();
    cached_ver = version;
    if (version != LIBER_INVALID_VERSION)
        cached_ver_str = std::to_string(version);
    // Filled version fields, unblock
    contended.notify_all();
    return version;
}

const std::string& liber::get_version_string() noexcept {
    // Call is needed to init static variables:
    (void)get_version();
    return cached_ver_str;
}

bool liber::match_version() noexcept {
    return get_version() == LIBER_TARGET_VERSION;
}

std::string liber::load_versioned_csv() noexcept {
    auto version = get_version();
    if (version == LIBER_INVALID_VERSION) return "";
    std::string from_disk = load_versioned_csv_from_disk();
    if (!from_disk.empty()) return from_disk;
    std::string from_repo = load_versioned_csv_from_repo();
    return from_repo;
}
