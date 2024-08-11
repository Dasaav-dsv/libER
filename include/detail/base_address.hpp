#pragma once

#include <detail/defines.hpp>

#include <cstddef>
#include <cstdint>

namespace liber {
class _base_address {
public:
    LIBERAPI _base_address() noexcept;

    void* get() const noexcept {
        return offset(0);
    }

    void* offset(uintptr_t offset) const noexcept {
        return reinterpret_cast<void*>(base + offset);
    }

private:
    const uintptr_t base;
};

LIBERAPI extern _base_address base_address;
} // namespace liber
