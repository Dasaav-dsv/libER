#pragma once

#include <unordered_set>
#include <memory/from_allocator.h>

namespace from {
    template <typename T, typename Hash, typename Eq, typename AllocatorTag = void>
    using unordered_set = std::unordered_set<T, Hash, Eq, from::allocator<T, AllocatorTag>>;
}