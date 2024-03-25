#pragma once

#include <deque>
#include <from_allocator.h>

namespace from {
    template <typename T>
    using vector = std::deque<T, from::allocator<T>>;
}