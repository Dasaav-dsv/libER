#pragma once

#if defined(_ITERATOR_DEBUG_LEVEL) && _ITERATOR_DEBUG_LEVEL > 0
#error "_ITERATOR_DEBUG_LEVEL" must be defined as "0" for STL containers to be compatible with the ELDEN RING ABI.
#endif

#include <memory/from_allocator.h>
#include <unordered_set>

namespace from {
template <typename T, typename Hash, typename Eq,
    typename AllocatorTag = from::default_allocator_tag>
using unordered_set =
    std::unordered_set<T, Hash, Eq, from::allocator<T, AllocatorTag>>;
}