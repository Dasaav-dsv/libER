#pragma once

#include <vector>
#include <memory/from_allocator.h>

namespace from {
    template <typename T>
    using vector = std::vector<T, from::allocator<T>>;
}