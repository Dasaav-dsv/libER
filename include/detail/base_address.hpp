#pragma once

#include <detail/defines.hpp>
#include <detail/windows_peb.hpp>

#include <cstddef>
#include <cstdint>

namespace liber::base_address {
inline void* offset(uintptr_t offset) noexcept {
    return reinterpret_cast<void*>(winpeb::get_base() + offset);
}

template <uintptr_t Offset>
inline void* const_offset() noexcept {
    return reinterpret_cast<void*>(winpeb::get_base() + Offset);
}

inline void* get() noexcept {
    return reinterpret_cast<void*>(winpeb::get_base());
}
} // namespace liber::base_address
