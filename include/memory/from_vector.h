#pragma once

#if defined(_ITERATOR_DEBUG_LEVEL) && _ITERATOR_DEBUG_LEVEL > 0
#error "_ITERATOR_DEBUG_LEVEL" must be defined as "0" for STL containers to be compatible with the ELDEN RING ABI.
#endif

#include <memory/from_allocator.h>
#include <vector>

namespace from {
template <typename T, typename AllocatorTag = from::default_allocator_tag>
using vector = std::vector<T, from::allocator<T, AllocatorTag>>;
}