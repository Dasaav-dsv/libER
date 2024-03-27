#pragma once

#include <memory>
#include <concepts>
#include <memory/from_allocator.h>

namespace from {
    template <typename T, typename AllocatorTag>
    class default_delete : private from::allocator_base<AllocatorTag> {
        using base_type = allocator_base<AllocatorTag>;

        base_type& base() const noexcept { return static_cast<base_type&>(*this); }
    public:
        default_delete() noexcept : Allocator() {}

        template <typename U> requires std::convertible_to<U*, T*>
        default_delete(const default_delete<U>&) noexcept : Allocator() {}

        void operator()(T* p) const noexcept {
            base_type proxy{ this->base() };
            std::allocator_traits<base_type>::destroy(proxy, p);
            this->proxy.deallocate(p, 1);
        }
    };

    template <typename T, typename AllocatorTag>
    class default_delete<T[], AllocatorTag> {
        static_assert(false, "Not implemented due to incompatibility with ELDEN RING's allocation strategy");
    };

    template <typename T, typename AllocatorTag = from::default_empty_base_allocator_tag>
    using unique_ptr = std::unique_ptr<T, from::default_delete<T, AllocatorTag>>;

    // Compile time size checks - failing these means binary incompatibility
    static_assert(sizeof(from::unique_ptr<char>) == 8, "ELDEN RING ABI requirement");
    static_assert(sizeof(from::unique_ptr<char, from::default_allocator_tag>) == 16, "ELDEN RING ABI requirement");
}