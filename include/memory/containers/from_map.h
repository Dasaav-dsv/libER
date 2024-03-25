#pragma once

#include <map>
#include <from_allocator.h>

namespace from {
    template <typename K, typename V, typename Pred = std::less<K>, typename AllocatorTag = void>
    using map = std::map<K, V, Pred, from::allocator<T, AllocatorTag>>;
}