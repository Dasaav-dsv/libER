/**
 * @file from_shared_ptr.hpp
 * @brief from::shared_ptr based on std::shared_ptr
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
 * @brief std::shared_ptr with from::allocator and from::delay_delete.
 *
 */
template <typename T>
using shared_ptr = std::shared_ptr<T>;

/**
 * @brief from::shared_ptr make_shared implementation
 *
 * Uses a delay deleter from::delay_delete.
 *
 * @tparam T type to point to
 * @tparam AllocatorTag allocator type
 * @param args type constructor arguments
 * @return from::shared_ptr<T, AllocatorTag> resulting pointer
 */
template <typename T,
    typename AllocatorTag = from::default_allocator_tag,
    typename... Args>
[[nodiscard]] from::shared_ptr<T> make_shared(Args&&... args) {
    using allocator_type = from::allocator<T, AllocatorTag>;
    allocator_type allocator;
    T* p = allocator.allocate(1);
    std::allocator_traits<allocator_type>::construct(allocator, p,
        std::forward<Args>(args)...);
    return from::shared_ptr<T>{ p, from::delay_delete<T, AllocatorTag>{} };
}
} // namespace from
