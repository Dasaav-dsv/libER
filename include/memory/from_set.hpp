/**
 * @file from_set.hpp
 * @brief from::set based on std::set
 *
 * Copyright (c) libER ELDEN RING API library 2024
 *
 */
#pragma once

#if defined(_ITERATOR_DEBUG_LEVEL) && _ITERATOR_DEBUG_LEVEL > 0
#error "_ITERATOR_DEBUG_LEVEL" must be defined as "0" for STL containers to be compatible with the ELDEN RING ABI.
#endif

#include <memory/from_allocator.hpp>
#include <set>

namespace from {
/**
 * @brief std::set with from::allocator.
 *
 */
template <typename T, typename Pred = std::less<T>,
    typename AllocatorTag = from::default_allocator_tag>
using set = std::set<T, Pred, from::allocator<T, AllocatorTag>>;
} // namespace from
