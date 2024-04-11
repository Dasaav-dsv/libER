/**
 * @file from_unordered_set.hpp
 * @brief from::unordered_set based on std::unordered_set
 *
 * Copyright (c) libER ELDEN RING API library 2024
 *
 */
#pragma once

#if defined(_ITERATOR_DEBUG_LEVEL) && _ITERATOR_DEBUG_LEVEL > 0
#error "_ITERATOR_DEBUG_LEVEL" must be defined as "0" for STL containers to be compatible with the ELDEN RING ABI.
#endif

#include <memory/from_allocator.hpp>
#include <unordered_set>

namespace from {
/**
 * @brief std::unordered_set with from::allocator.
 *
 */
template <typename T, typename Hash, typename Eq,
    typename AllocatorTag = from::default_allocator_tag>
using unordered_set =
    std::unordered_set<T, Hash, Eq, from::allocator<T, AllocatorTag>>;
} // namespace from
