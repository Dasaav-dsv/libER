#pragma once

#include <set>
#include <memory/from_allocator.h>

namespace from {
    template <typename T, typename Pred = std::less<T>>
    using set = std::set<T, Pred, from::allocator<T>>;
}