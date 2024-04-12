/**
 * @file from_vector.hpp
 * @brief from::vector based on std::vector
 *
 * Copyright 2024 libER ELDEN RING API library
 *
 */
#pragma once

#if defined(_ITERATOR_DEBUG_LEVEL) && _ITERATOR_DEBUG_LEVEL > 0
#error "_ITERATOR_DEBUG_LEVEL" must be defined as "0" for STL containers to be compatible with the ELDEN RING ABI.
#endif

#include <memory/from_allocator.hpp>
#include <vector>

namespace from {
/**
 * @brief std::vector with from::allocator.
 *
 */
template <typename T, typename AllocatorTag = from::default_allocator_tag>
using vector = std::vector<T, from::allocator<T, AllocatorTag>>;
} // namespace from
