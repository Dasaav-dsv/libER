/**
 * @file from_forward_list.hpp
 * @brief from::forward_list based on std::forward_list
 *
 * Copyright 2024 libER ELDEN RING API library
 *
 */
#pragma once

#if defined(_ITERATOR_DEBUG_LEVEL) && _ITERATOR_DEBUG_LEVEL > 0
#error "_ITERATOR_DEBUG_LEVEL" must be defined as "0" for STL containers to be compatible with the ELDEN RING ABI.
#endif

#include <forward_list>
#include <memory/from_allocator.hpp>

namespace from {
/**
 * @brief std::forward_list with from::allocator.
 *
 */
template <typename T, typename AllocatorTag = from::default_allocator_tag>
using forward_list = std::forward_list<T, from::allocator<T, AllocatorTag>>;
} // namespace from
