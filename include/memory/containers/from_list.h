#pragma once

#include <list>
#include <memory/from_allocator.h>

namespace from {
    template <typename T>
    using list = std::list<T, from::allocator<T>>;
}