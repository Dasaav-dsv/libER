#include <coresystem/file/file.hpp>
#include <dantelion2/fileio.hpp>
#include <detail/functions.hpp>

#include <algorithm>
#include <exception>
#include <filesystem>
#include <memory>
#include <mutex>
#include <shared_mutex>
#include <span>
#include <unordered_map>

using namespace from;
namespace fs = std::filesystem;

auto& bnk_overrides() {
    static std::pair<std::unordered_map<fs::path, fs::path>, std::shared_mutex>
        overrides;
    return overrides;
}

auto& wem_overrides() {
    static std::pair<std::unordered_map<std::wstring, std::wstring>,
        std::shared_mutex>
        overrides;
    return overrides;
}

int open_wwise_file(void* instance, std::wstring path, int mode, char* flags,
    bool* force, void* desc) {
    bool has_root = path.find_first_of(':') != std::wstring::npos;
    if (has_root && !path.starts_with(L"sd:"))
        flags[24] = 0;
    else {
        mode = 10;
        if (!has_root)
            path = L"sd:/" + path;
    }
    *force = true;
    return liber::function<"DLMOW::FilePackageLowLevelIOBlocking::load_file",
        int>::call(instance, path.c_str(), mode, flags, force, desc);
}

int load_bnk_override(void* instance, const wchar_t* file, int mode,
    char* flags, bool* force, void* desc) {
    auto path = fs::path{ file };
    {
        auto& [overrides, mutex] = bnk_overrides();
        std::shared_lock lock{ mutex };
        auto iter = overrides.find(path.filename());
        if (iter != overrides.end()) {
            path = iter->second;
            overrides.erase(iter);
        }
    }
    return open_wwise_file(instance, path, mode, flags, force, desc);
}

int load_wem_override(void* instance, unsigned int id, int mode, char* flags,
    bool* force, void* desc) {
    auto path = std::to_wstring(id) + L".wem";
    {
        auto& [overrides, mutex] = wem_overrides();
        std::shared_lock lock{ mutex };
        auto iter = overrides.find(path);
        if (iter != overrides.end())
            path = iter->second;
    }
    return open_wwise_file(instance, path, mode, flags, force, desc);
}

bool format_wem_override(DLTX::DLString* out, DLTX::DLString* in) {
    auto& [file, _] = *in;
    if (file.empty())
        return false;
    {
        auto& [overrides, mutex] = wem_overrides();
        std::shared_lock lock{ mutex };
        fs::path path = file;
        auto iter = overrides.find(path.filename().native());
        if (iter != overrides.end()) {
            out->first = iter->second;
            return true;
        }
    }
    out->first = L"wem/";
    if (file.length() > 6)
        out->first += file.substr(0, 2) + L'/' + file;
    else
        out->first += L'0' + (file[0] + (L'/' + file));
    return true;
}

void override_wwise_loader_once() {
    static bool _ = []() {
        void* loader = liber::symbol<
            "GLOBAL_FilePackageLowLevelIOBlocking">::as<void*>();
        if (!loader)
            std::terminate();
        reinterpret_cast<void**>(loader)[9] = (void*)&format_wem_override;
        void**& old_vtable = *reinterpret_cast<void***>(loader);
        void** new_vtable = new void*[7];
        bool success = false;
        do {
            MemoryBarrier();
            void** overwritten_vtable = old_vtable;
            std::copy_n(old_vtable, 7, new_vtable);
            new_vtable[1] = (void*)&load_wem_override;
            new_vtable[2] = (void*)&load_bnk_override;
            success = overwritten_vtable
                   == InterlockedCompareExchangePointer(
                       reinterpret_cast<void**>(&old_vtable), new_vtable,
                       overwritten_vtable);
        } while (!success);
        return true;
    }();
}

bool is_init_loaded() {
    uintptr_t instance =
        liber::symbol<"GLOBAL_BankManager">::as<uintptr_t>();
    if (!instance)
        return false;
    return *reinterpret_cast<int*>(instance + 0xB8);
}

bool is_bank_ready(FD4::FD4FileCap* file_cap) {
    int state = *reinterpret_cast<int*>(
        reinterpret_cast<uintptr_t>(file_cap->get_load_task()) + 0x120);
    return state == 2;
}
