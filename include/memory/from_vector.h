#pragma once

// Cannot use debug containers
#pragma push_macro("_DEBUG")
#undef _DEBUG

#include <vector>
#include <memory/from_allocator.h>

#pragma pop_macro("_DEBUG")

namespace from {
    template <typename T, typename AllocatorTag = void>
    using vector = std::vector<T, from::allocator<T, AllocatorTag>>;
}