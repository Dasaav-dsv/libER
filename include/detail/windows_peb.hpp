#pragma once

#include <cstddef>
#include <cstdint>

// WIN32 PEB structure up to ImageBaseAddress, based on
// https://www.geoffchappell.com/studies/windows/km/ntoskrnl/inc/api/pebteb/peb/index.htm
// Bit fields accurate for 1607 and above
namespace liber::winpeb {
struct _peb {
    bool InheritedAddressSpace;
    bool ReadImageFileExecOptions;
    bool BeingDebugged;
    uint8_t ImageUsedLargePages : 1;
    uint8_t IsProtectedProcess : 1;
    uint8_t IsImageDynamicallyRelocated : 1;
    uint8_t SkipPatchingUser32Forwarders : 1;
    uint8_t IsPackagedProcess : 1;
    uint8_t IsAppContainer : 1;
    uint8_t IsProtectedProcessLight : 1;
    uint8_t IsLongPathAwareProcess : 1;
    uintptr_t Mutant;
    uintptr_t ImageBaseAddress;
};
} // namespace liber::winpeb

// Non-volatile memory optimization for clang,
// sadly MSVC is never optimistic about such memory access
#ifdef __clang__
namespace liber::winpeb {
inline const _peb& get_peb() noexcept {
    const _peb* out;
#if defined(_WIN64)
    __asm__("movq %%gs:0x60,%0" : "=r"(out));
#elif defined(_WIN32)
    __asm__("movd %%fs:0x30,%0" : "=r"(out));
#else
#error unsupported compiler
#endif
    return *out;
}

inline uintptr_t get_base() noexcept {
    uintptr_t out;
#if defined(_WIN64)
    __asm__("movq %%gs:0x60,%0;"
            "movq 0x10(%0),%0"
            : "=r"(out));
#elif defined(_WIN32)
    __asm__("movd %%fs:0x30,%0"
            "movd 0x8(%0),%0"
            : "=r"(out));
#else
#error unsupported compiler
#endif
    return out;
}
} // namespace liber::winpeb
#elif __has_include(<intrin.h>)
#include <bit>
#include <intrin.h>
namespace liber::winpeb {
inline const _peb& get_peb() noexcept {
#if defined(_WIN64)
    return *std::bit_cast<const _peb*>(__readgsqword(0x60));
#elif defined(_WIN32)
    return *std::bit_cast<const _peb*>(__readfsdword(0x30));
#else
#error unsupported compiler
#endif
}

inline uintptr_t get_base() noexcept {
    return get_peb().ImageBaseAddress;
}
} // namespace liber::winpeb
#else
#error unsupported compiler
#endif
