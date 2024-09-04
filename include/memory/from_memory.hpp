/**
 * @file from_memory.hpp
 * @brief ELDEN RING memory utilities
 *
 * Copyright 2024 libER ELDEN RING API library
 *
 */
#pragma once

#include <cstddef>
#include <cstdint>
#include <new>

namespace from {
template <typename T>
class static_ptr {
    static_assert(sizeof(T) > 0, "T must be a complete type");
    static constexpr auto align_val = alignof(T) - 1;

public:
    using value_type = T;
    using pointer_type = T*;

    static constexpr auto size = sizeof(T);
    static constexpr auto alignment = alignof(T);

    pointer_type get() const noexcept {
        if (ptr && ptr->is_init) {
            std::byte* mem = ptr->memory;
            uintptr_t align_up = -reinterpret_cast<intptr_t>(mem) & align_val;
            return std::launder(reinterpret_cast<pointer_type>(mem + align_up));
        }
        return nullptr;
    }

    value_type& operator*() const noexcept {
        return *get();
    }

    pointer_type operator->() const noexcept {
        return get();
    }

    explicit operator bool() const noexcept {
        return static_cast<bool>(get());
    }

private:
    struct {
        std::byte memory[size + align_val];
        bool is_init;
    }* ptr;
};
} // namespace from
