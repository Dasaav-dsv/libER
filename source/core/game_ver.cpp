#include <game_ver.h>
#include <win.inl>
#include <atomic>

#define VS_SIGNATURE 0xFEEF04BD
#define INVALID_VERSION -1LL;

static long long cached_ver = 0;
std::atomic_flag contended = ATOMIC_FLAG_INIT;

long long liber::game_version() noexcept {
    if (cached_ver) return cached_ver;
    else if (contended.test_and_set()) {
        // Another thread is already retrieving the version
        contended.wait(true);
        return cached_ver;
    }
    else {
        // No contention, proceed
        long long version = [] {
            HRSRC resource_handle = FindResourceW(NULL, MAKEINTRESOURCEW(1), MAKEINTRESOURCEW(16));
            if (!resource_handle) return INVALID_VERSION;
            HGLOBAL global_handle = LoadResource(NULL, resource_handle);
            if (!global_handle) return INVALID_VERSION;
            DWORD* resource_start = reinterpret_cast<DWORD*>(LockResource(global_handle));
            if (!resource_start) return INVALID_VERSION;
            // The first field of the resource is its length in bytes
            DWORD* resource_end = reinterpret_cast<DWORD*>(
                reinterpret_cast<uintptr_t>(resource_start) + *resource_start);
            // Look for the resource signature, which indicates the begining of the resource data
            while (*(resource_start++) != VS_SIGNATURE)
                if (resource_start >= resource_end) return INVALID_VERSION;
            VS_FIXEDFILEINFO* fixed_file_info = reinterpret_cast<VS_FIXEDFILEINFO*>(resource_start);
            long long version_result = (static_cast<long long>(fixed_file_info->dwFileVersionLS) << 32)
                | fixed_file_info->dwFileVersionMS;
            return version_result ? version_result : INVALID_VERSION;
        } ();
        cached_ver = version;
        // Wrote version value, unblock
        contended.notify_all();
        return version;
    }
}