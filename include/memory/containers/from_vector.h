#pragma once

#include <vector>
#include <from_allocator.h>

namespace from {
    template <typename T, typename AllocatorTag = void>
    using vector = std::vector<T, from::allocator<T, AllocatorTag>>;
}