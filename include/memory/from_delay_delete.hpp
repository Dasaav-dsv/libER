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
 */
template <typename T>
struct delay_delete {
    /**
     * @brief Default constructor.
     *
     */
    constexpr delay_delete() noexcept = default;

    /**
     * @brief Copy template constructor.
     *
     * @tparam U type of another target object
     */
    template <typename U>
        requires std::convertible_to<U*, T*>
    delay_delete(const delay_delete<U>&) noexcept {}

    /**
     * @brief Request object deletion.
     *
     * Called by std::unique_ptr and other STL implementations of
     * std::default_delete.
     *
     * @param p pointer to object to delete
     */
    void operator()(T* p) const noexcept {
        request_delete(&delay_deleter, static_cast<void*>(p));
    }

private:
    static void delay_deleter(void* p) {
        T* target = reinterpret_cast<T*>(p);
        auto allocator = get_allocator_of(target);
        using altraits = std::allocator_traits<decltype(allocator)>;
        altraits::destroy(allocator, target);
        altraits::deallocate(allocator, target, 1);
    }
};
} // namespace from
