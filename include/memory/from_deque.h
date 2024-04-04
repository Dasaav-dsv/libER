#pragma once

#if defined(_ITERATOR_DEBUG_LEVEL) && _ITERATOR_DEBUG_LEVEL > 0
#error "_ITERATOR_DEBUG_LEVEL" must be defined as "0" for STL containers to be compatible with the ELDEN RING ABI.
#endif

#include <deque>
#include <memory/from_allocator.hpp>

namespace from {
template <typename T, typename AllocatorTag = from::default_allocator_tag>
using deque = std::deque<T, from::allocator<T, AllocatorTag>>;
}