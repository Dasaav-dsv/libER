/**
 * @file from_list.hpp
 * @brief from::list based on std::list
 *
 * Copyright 2024 libER ELDEN RING API library
 *
 */
#pragma once

#if defined(_ITERATOR_DEBUG_LEVEL) && _ITERATOR_DEBUG_LEVEL > 0
#error "_ITERATOR_DEBUG_LEVEL" must be defined as "0" for STL containers to be compatible with the ELDEN RING ABI.
#endif

#include <list>
#include <memory/from_allocator.hpp>

namespace from {
/**
 * @brief std::list with from::allocator.
 *
 */
template <typename T>
using list = std::list<T, from::allocator<T>>;
} // namespace from
