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
template <typename T,
    typename AllocatorTag = from::default_empty_base_allocator_tag>
using unique_ptr = std::unique_ptr<T, from::delay_delete<T, AllocatorTag>>;

/**
 * @brief from::unique_ptr make_unique implementation
 *
 * Uses a delay deleter from::delay_delete.
 *
 * @tparam T type to point to
 * @tparam AllocatorTag allocator type
 * @param args type constructor arguments
 * @return from::unique_ptr<T, AllocatorTag> resulting pointer
 */
template <typename T,
    typename AllocatorTag = from::default_empty_base_allocator_tag,
    typename... Args>
[[nodiscard]] from::unique_ptr<T, AllocatorTag> make_unique(Args&&... args) {
    using allocator_type = from::allocator<T, AllocatorTag>;
    allocator_type allocator;
    T* p = allocator.allocate(1);
    std::allocator_traits<allocator_type>::construct(allocator, p,
        std::forward<Args>(args)...);
    return from::unique_ptr<T, AllocatorTag>{ p };
}

// Compile time size checks - failing these means binary incompatibility
static_assert(sizeof(from::unique_ptr<char>) == 8,
    "ELDEN RING ABI requirement");
static_assert(sizeof(from::unique_ptr<char, from::default_allocator_tag>) == 16,
    "ELDEN RING ABI requirement");
} // namespace from
