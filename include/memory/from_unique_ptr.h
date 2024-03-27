#pragma once

#include <memory>
#include <concepts>
#include <memory/from_allocator.h>

namespace from {
    template <typename T, typename AllocatorTag>
    class default_delete : private from::allocator<T, AllocatorTag> {
        using base_type = from::allocator<T, AllocatorTag>;

        const base_type& base() const noexcept { return static_cast<const base_type&>(*this); }
    public:
        default_delete() noexcept : base_type() {}

        template <typename U> requires std::convertible_to<U*, T*>
        default_delete(const default_delete<U, AllocatorTag>&) noexcept : base_type() {}

        void operator()(T* p) const noexcept {
            base_type proxy{ this->base() };
            std::allocator_traits<base_type>::destroy(proxy, p);
            proxy.deallocate(p, 1);
        }
    };

    // Not implemented due to incompatibility
    // with ELDEN RING's allocation strategy
    template <typename T, typename AllocatorTag>
    class default_delete<T[], AllocatorTag> {};

    template <typename T, typename AllocatorTag = from::default_empty_base_allocator_tag>
    using unique_ptr = std::unique_ptr<T, from::default_delete<T, AllocatorTag>>;

    template <typename T, typename AllocatorTag = from::default_empty_base_allocator_tag, typename...Args>
    from::unique_ptr<T, AllocatorTag> make_unique(Args&&...args) {
        using allocator_type = from::allocator<T, AllocatorTag>;
        allocator_type allocator;
        T* p = allocator.allocate(1);
        std::allocator_traits<allocator_type>::construct(allocator, p, std::forward<Args>(args)...);
        return from::unique_ptr<T, AllocatorTag>{ p };
    }

    // Compile time size checks - failing these means binary incompatibility
    static_assert(sizeof(from::unique_ptr<char>) == 8, "ELDEN RING ABI requirement");
    static_assert(sizeof(from::unique_ptr<char, from::default_allocator_tag>) == 16, "ELDEN RING ABI requirement");
}