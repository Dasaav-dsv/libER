#pragma once

#include <forward_list>
#include <from_allocator.h>

namespace from {
    template <typename T>
    using forward_list = std::forward_list<T, from::allocator<T>>;
}