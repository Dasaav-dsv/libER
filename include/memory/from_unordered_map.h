#pragma once

// Cannot use debug containers
#pragma push_macro("_DEBUG")
#undef _DEBUG

#include <unordered_map>
#include <memory/from_allocator.h>

#pragma pop_macro("_DEBUG")

namespace from {
    template <typename K, typename V, typename Hash = std::hash<K>, typename Eq = std::equal_to<K>, typename AllocatorTag = void>
    using unordered_map = std::unordered_map<K, V, Hash, Eq, from::allocator<T, AllocatorTag>>;
}