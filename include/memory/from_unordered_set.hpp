/**
 * @file from_unordered_set.hpp
 * @brief from::unordered_set based on std::unordered_set
 *
 * Copyright 2024 libER ELDEN RING API library
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
template <typename T, typename Hash, typename Eq>
using unordered_set =
    std::unordered_set<T, Hash, Eq, from::allocator<T>>;
} // namespace from
