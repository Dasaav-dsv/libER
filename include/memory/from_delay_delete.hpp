/**
 * @file from_delay_delete.hpp
 * @brief Delay deleter implementation.
 *
 * Copyright 2024 libER ELDEN RING API library
 *
 */

#pragma once

#include <concepts>
#include <memory/from_allocator.hpp>
#include <memory>

namespace from {
/**
 * @brief Signature of the function called when an object is to be deleted.
 *
 */
using delay_deleter = void (*)(void*);

/**
 * @brief Request deletion of an object.
 * 
 * @param deleter function to call on object deletion
 * @param p the object to delete
 */
LIBERAPI void request_delete(delay_deleter deleter, void* p);

/**
 * @brief Delay deleter that models std::default_delete.
 *
 * @tparam T type of the target object
 * @tparam AllocatorTag allocator to use with the object
 */
template <typename T, typename AllocatorTag>
class delay_delete : private from::allocator<T, AllocatorTag> {
    using base_type = from::allocator<T, AllocatorTag>;

    const base_type& base() const noexcept {
        return static_cast<const base_type&>(*this);
    }

public:
    delay_delete() noexcept : base_type() {}

    /**
     * @brief Copy constructor.
     *
     * @tparam U type of another target object convertible to T by pointer
     */
    template <typename U>
        requires std::convertible_to<U*, T*>
    delay_delete(const delay_delete<U, AllocatorTag>&) noexcept : base_type() {}

    /**
     * @brief Request object deletion.
     *
     * Called by std::unique_ptr and other STL implementations of
     * std::default_delete.
     *
     * @param p pointer to object to delete
     */
    void operator()(T* p) const noexcept {
        request_delete(
            [](void* p) {
                DLKR::DLAllocator* allocator =
                    DLKR::DLAllocator::get_allocator_of(p);
                base_type proxy{ allocator };
                std::allocator_traits<base_type>::destroy(proxy,
                    reinterpret_cast<T*>(p));
                proxy.deallocate(reinterpret_cast<T*>(p), 1);
            },
            p);
    }
};

// TODO: implement
/**
 * @brief Not implemented.
 *
 */
template <typename T, typename AllocatorTag>
class delay_delete<T[], AllocatorTag> {};
} // namespace from
