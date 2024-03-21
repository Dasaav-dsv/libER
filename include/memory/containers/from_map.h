#pragma once

#include <map>
#include <memory/from_allocator.h>

namespace from {
    template <typename K, typename V, typename Pred = std::less<K>>
    using map = std::map<K, V, Pred, from::allocator<T>>;
}