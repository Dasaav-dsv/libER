/**
 * @file from_map.hpp
 * @brief from::map based on std::map
 *
 * Copyright 2024 libER ELDEN RING API library
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
template <typename K, typename V, typename Pred = std::less<K>>
using map =
    std::map<K, V, Pred, from::allocator<std::pair<const K, V>>>;
} // namespace from
