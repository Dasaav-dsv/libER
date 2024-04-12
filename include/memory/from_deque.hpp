/**
 * @file from_deque.hpp
 * @brief from::deque based on std::deque
 *
 * Copyright 2024 libER ELDEN RING API library
 *
 */
#pragma once

#if defined(_ITERATOR_DEBUG_LEVEL) && _ITERATOR_DEBUG_LEVEL > 0
#error "_ITERATOR_DEBUG_LEVEL" must be defined as "0" for STL containers to be compatible with the ELDEN RING ABI.
#endif

#include <deque>
#include <memory/from_allocator.hpp>

namespace from {
/**
 * @brief std::deque with from::allocator.
 *
 */
template <typename T, typename AllocatorTag = from::default_allocator_tag>
using deque = std::deque<T, from::allocator<T, AllocatorTag>>;
} // namespace from
