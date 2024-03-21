#include <game_ver.h>
#include <win.inl>

#define INVALID_VERSION -1LL
#define VS_SIGNATURE 0xFEEF04BD

long long liber::game_version() noexcept {
    static long long version = [] {
        HRSRC resource_handle = FindResourceW(NULL, MAKEINTRESOURCEW(1), MAKEINTRESOURCEW(16));
        if (!resource_handle) return INVALID_VERSION;
        HGLOBAL global_handle = LoadResource(NULL, resource_handle);
        if (!global_handle) return INVALID_VERSION;
        DWORD* resource_start = reinterpret_cast<DWORD*>(LockResource(global_handle));
        if (!resource_start) return INVALID_VERSION;
        // The first field of the resource is its length
        DWORD* resource_end = reinterpret_cast<DWORD*>(
            reinterpret_cast<uintptr_t>(resource_start) + *resource_start);
        // Look for the resource signature, which indicates the begining of the resource data
        while (*(resource_start++) != VS_SIGNATURE)
            if (resource_start == resource_end) return INVALID_VERSION;
        VS_FIXEDFILEINFO* fixed_file_info = reinterpret_cast<VS_FIXEDFILEINFO*>(resource_start);
        return (static_cast<long long>(fixed_file_info->dwFileVersionLS) << 32)
            | fixed_file_info->dwFileVersionMS;
    } ();
    return version;
}