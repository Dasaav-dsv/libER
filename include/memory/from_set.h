#pragma once

// Cannot use debug containers
#pragma push_macro("_DEBUG")
#undef _DEBUG

#include <set>
#include <memory/from_allocator.h>

#pragma pop_macro("_DEBUG")

namespace from {
    template <typename T, typename Pred = std::less<T>, typename AllocatorTag = from::default_allocator_tag>
    using set = std::set<T, Pred, from::allocator<T, AllocatorTag>>;
}