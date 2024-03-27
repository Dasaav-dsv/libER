#pragma once

// Cannot use debug containers
#pragma push_macro("_DEBUG")
#undef _DEBUG

#include <map>
#include <memory/from_allocator.h>

#pragma pop_macro("_DEBUG")

namespace from {
    template <typename K, typename V, typename Pred = std::less<K>, typename AllocatorTag = void>
    using map = std::map<K, V, Pred, from::allocator<T, AllocatorTag>>;
}