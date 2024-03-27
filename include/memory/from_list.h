#pragma once

// Cannot use debug containers
#pragma push_macro("_DEBUG")
#undef _DEBUG

#include <list>
#include <memory/from_allocator.h>

#pragma pop_macro("_DEBUG")

namespace from {
    template <typename T, typename AllocatorTag = from::default_allocator_tag>
    using list = std::list<T, from::allocator<T, AllocatorTag>>;
}