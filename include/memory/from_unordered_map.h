#pragma once

#include <unordered_map>
#include <memory/from_allocator.h>

namespace from {
    template <typename K, typename V, typename Hash = std::hash<K>, typename Eq = std::equal_to<K>, typename AllocatorTag = void>
    using unordered_map = std::unordered_map<K, V, Hash, Eq, from::allocator<T, AllocatorTag>>;
}