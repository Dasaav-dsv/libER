#pragma once

// Cannot use debug containers
#pragma push_macro("_DEBUG")
#undef _DEBUG

#include <unordered_set>
#include <memory/from_allocator.h>

#pragma pop_macro("_DEBUG")

namespace from {
    template <typename T, typename Hash, typename Eq, typename AllocatorTag = from::default_allocator_tag>
    using unordered_set = std::unordered_set<T, Hash, Eq, from::allocator<T, AllocatorTag>>;
}