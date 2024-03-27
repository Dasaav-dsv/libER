#pragma once

// Cannot use debug containers
#pragma push_macro("_DEBUG")
#undef _DEBUG

#include <deque>
#include <memory/from_allocator.h>

#pragma pop_macro("_DEBUG")

namespace from {
    template <typename T, typename AllocatorTag = from::default_allocator_tag>
    using deque = std::deque<T, from::allocator<T, AllocatorTag>>;
}