#include <game_ver.h>
#include <win.inl>
#include <atomic>

#define VS_SIGNATURE 0xFEEF04BD

static long long cached_ver = 0;
static std::atomic_flag contended = ATOMIC_FLAG_INIT;

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
            // Resource: VS_VERSION, resource type: RT_VERSION
            HRSRC resource_handle = FindResourceW(NULL, MAKEINTRESOURCEW(1), MAKEINTRESOURCEW(16));
            if (!resource_handle) return LIBER_INVALID_GAME_VERSION;
            HGLOBAL global_handle = LoadResource(NULL, resource_handle);
            if (!global_handle) return LIBER_INVALID_GAME_VERSION;
            DWORD* resource_start = reinterpret_cast<DWORD*>(LockResource(global_handle));
            if (!resource_start) return LIBER_INVALID_GAME_VERSION;
            // The first field of the resource is its length in bytes
            DWORD* resource_end = reinterpret_cast<DWORD*>(
                reinterpret_cast<uintptr_t>(resource_start) + *resource_start);
            // Look for the resource signature, which indicates the begining of the resource data
            while (*(resource_start++) != VS_SIGNATURE)
                if (resource_start >= resource_end) return LIBER_INVALID_GAME_VERSION;
            VS_FIXEDFILEINFO* fixed_file_info = reinterpret_cast<VS_FIXEDFILEINFO*>(resource_start);
            long long version_result = (static_cast<long long>(fixed_file_info->dwFileVersionLS) << 32)
                | fixed_file_info->dwFileVersionMS;
            return version_result ? version_result : LIBER_INVALID_GAME_VERSION;
        } ();
        cached_ver = version;
        // Wrote version value, unblock
        contended.notify_all();
        return version;
    }
}

bool liber::game_version_match() noexcept {
    return liber::game_version() == LIBER_GAME_VERSION;
}