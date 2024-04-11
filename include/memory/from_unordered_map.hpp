#pragma once

#if defined(_ITERATOR_DEBUG_LEVEL) && _ITERATOR_DEBUG_LEVEL > 0
#error "_ITERATOR_DEBUG_LEVEL" must be defined as "0" for STL containers to be compatible with the ELDEN RING ABI.
#endif

#include <memory/from_allocator.hpp>
#include <unordered_map>

namespace from {
template <typename K, typename V, typename Hash = std::hash<K>,
    typename Eq = std::equal_to<K>,
    typename AllocatorTag = from::default_allocator_tag>
using unordered_map = std::unordered_map<K, V, Hash, Eq,
    from::allocator<std::pair<const K, V>, AllocatorTag>>;
}
