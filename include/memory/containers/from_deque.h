#pragma once

#include <deque>
#include <from_allocator.h>

namespace from {
    template <typename T, typename AllocatorTag = void>
    using deque = std::deque<T, from::allocator<T, AllocatorTag>>;
}