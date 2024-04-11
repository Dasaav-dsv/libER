/**
 * @file from_map.hpp
 * @brief from::map based on std::map
 *
 * Copyright (c) libER ELDEN RING API library 2024
 *
 */
#pragma once

#if defined(_ITERATOR_DEBUG_LEVEL) && _ITERATOR_DEBUG_LEVEL > 0
#error "_ITERATOR_DEBUG_LEVEL" must be defined as "0" for STL containers to be compatible with the ELDEN RING ABI.
#endif

#include <map>
#include <memory/from_allocator.hpp>

namespace from {
/**
 * @brief std::map with from::allocator.
 *
 */
template <typename K, typename V, typename Pred = std::less<K>,
    typename AllocatorTag = from::default_allocator_tag>
using map =
    std::map<K, V, Pred, from::allocator<std::pair<const K, V>, AllocatorTag>>;
} // namespace from
