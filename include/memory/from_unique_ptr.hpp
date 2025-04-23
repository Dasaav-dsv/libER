/**
 * @file from_unique_ptr.hpp
 * @brief from::unique_ptr based on std::unique_ptr
 *
 * Copyright 2024 libER ELDEN RING API library
 *
 */
#pragma once

#include <concepts>
#include <memory/from_allocator.hpp>
#include <memory/from_delay_delete.hpp>
#include <memory>

namespace from {
/**
 * @brief std::unique_ptr with from::allocator and from::delay_delete.
 *
 */
template <typename T>
using unique_ptr = std::unique_ptr<T, from::delay_delete<T>>;

/**
 * @brief from::unique_ptr make_unique implementation
 *
 * Uses a delay deleter from::delay_delete.
 *
 * @tparam T type to point to
 * @param args type constructor arguments
 * @return from::unique_ptr<T> resulting pointer
 */
template <typename T, typename... Args>
[[nodiscard]] from::unique_ptr<T> make_unique(Args&&... args) {
    from::allocator<T> allocator;
    using altraits = std::allocator_traits<decltype(allocator)>;
    T* p = altraits::allocate(allocator, 1);
    if (!p)
        return nullptr;
    altraits::construct(allocator, p, std::forward<Args>(args)...);
    return from::unique_ptr<T>{ p };
}

// Compile time size checks - failing these means binary incompatibility
static_assert(sizeof(from::unique_ptr<std::byte>) == 8,
    "ELDEN RING ABI requirement");
} // namespace from
