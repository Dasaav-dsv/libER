#pragma once

#include <list>
#include <from_allocator.h>

namespace from {
    template <typename T>
    using list = std::list<T, from::allocator<T>>;
}