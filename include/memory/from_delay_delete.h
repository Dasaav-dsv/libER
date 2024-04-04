#pragma once

#include <concepts>
#include <memory/from_allocator.h>
#include <memory>

namespace from {
using delay_deleter = void (*)(void*);
void request_delete(delay_deleter deleter, void* p);

template <typename T, typename AllocatorTag>
class delay_delete : private from::allocator<T, AllocatorTag> {
    using base_type = from::allocator<T, AllocatorTag>;

    const base_type& base() const noexcept {
        return static_cast<const base_type&>(*this);
    }

public:
    delay_delete() noexcept : base_type() {}

    template <typename U>
        requires std::convertible_to<U*, T*>
    delay_delete(const delay_delete<U, AllocatorTag>&) noexcept : base_type() {}

    void operator()(T* p) const noexcept {
        request_delete(
            [](void* p) {
                DLKR::DLAllocator* allocator =
                    DLKR::DLAllocator::get_allocator_of(p);
                base_type proxy{ allocator };
                std::allocator_traits<base_type>::destroy(
                    proxy, reinterpret_cast<T*>(p));
                proxy.deallocate(reinterpret_cast<T*>(p), 1);
            },
            p);
    }
};

// Not implemented due to incompatibility
// with ELDEN RING's allocation strategy
template <typename T, typename AllocatorTag>
class delay_delete<T[], AllocatorTag> {};
} // namespace from