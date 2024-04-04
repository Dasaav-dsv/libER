#pragma once

#include <concepts>
#include <memory/from_allocator.h>
#include <memory/from_delay_delete.h>
#include <memory>

namespace from {
template <typename T,
    typename AllocatorTag = from::default_empty_base_allocator_tag>
using unique_ptr = std::unique_ptr<T, from::delay_delete<T, AllocatorTag>>;

template <typename T,
    typename AllocatorTag = from::default_empty_base_allocator_tag,
    typename... Args>
from::unique_ptr<T, AllocatorTag> make_unique(Args&&... args) {
    using allocator_type = from::allocator<T, AllocatorTag>;
    allocator_type allocator;
    T* p = allocator.allocate(1);
    std::allocator_traits<allocator_type>::construct(
        allocator, p, std::forward<Args>(args)...);
    return from::unique_ptr<T, AllocatorTag>{ p };
}

// Compile time size checks - failing these means binary incompatibility
static_assert(
    sizeof(from::unique_ptr<char>) == 8, "ELDEN RING ABI requirement");
static_assert(sizeof(from::unique_ptr<char, from::default_allocator_tag>) == 16,
    "ELDEN RING ABI requirement");
} // namespace from