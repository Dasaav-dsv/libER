#pragma once

#include <forward_list>
#include <memory/from_allocator.h>

namespace from {
    template <typename T, typename AllocatorTag = void>
    using forward_list = std::forward_list<T, from::allocator<T, AllocatorTag>>;
}