/**
 * @file from_allocator.hpp
 * @brief ELDEN RING allocation interface and from::allocator
 *
 * Copyright 2024 libER ELDEN RING API library
 *
 */
#pragma once

#if defined(_ITERATOR_DEBUG_LEVEL) && _ITERATOR_DEBUG_LEVEL > 0
#error "_ITERATOR_DEBUG_LEVEL" must be defined as "0" for STL containers to be compatible with the ELDEN RING ABI.
#endif

#include <detail/preprocessor.hpp>

#include <bitset>
#include <cstddef>
#include <cstdint>
#include <memory>
#include <utility>

// For std::terminate
#include <stdexcept>

namespace from {
namespace DLKR {
/**
 * @brief Common ELDEN RING allocator interface.
 *
 * DLKR::DLAllocator is the common allocator interface
 * used by ER allocators, which are statically allocated
 * in the binary and referenced by stateless proxy objects.
 * from::allocator<T> provides a proxy object that fulfils Allocator
 * completeness requirements and uses the DLKR::DLAllocator interface.
 * Due to implementing _msize (actively used, see CS::CSGrassAllocator)
 * the default allocator proxied by from::allocator
 * cannot be based on std::allocator<T>.
 *
 * May support two allocators at once (for container allocation).
 *
 */
class DLAllocator {
public:
    virtual ~DLAllocator() = default;

    /**
     * @brief Unique allocator id sometimes used for comparing allocators.
     *
     * @return int allocator identifier
     */
    virtual int _allocator_id() = 0;

    /**
     * @brief Unknown function which is defined in the interface, never
     * overriden or used.
     *
     * @return int unknown
     */
    virtual int _unused() {
        return -1;
    }

    /**
     * @brief Allocator and heap compatibility flags.
     *
     * 0x20 indicates thread safety (most commonly checked).
     *
     * @return std::bitset<8> flags
     */
    virtual std::bitset<8> heap_flags() = 0;

    /**
     * @brief The total capacity of the heap, in bytes.
     *
     * @return size_t heap capacity
     */
    virtual size_t heap_capacity() = 0;

    /**
     * @brief How many bytes out of the total capacity are allocated.
     *
     * @return size_t heap size
     */
    virtual size_t heap_size() = 0;

    /**
     * @brief The remaining capacity of the backing heap.
     *
     * @return size_t backing heap capacity
     */
    virtual size_t backing_heap_capacity() = 0;

    /**
     * @brief Total number of objects that have been allocated on the
     * allocator's heap.
     *
     * @return size_t allocated object count
     */
    virtual size_t heap_allocation_count() = 0;

    /**
     * @brief Check how big a given memory block is.
     *
     * @param p pointer to the memory block to check
     * @return size_t size of the memory block
     */
    virtual size_t msize(void* p) = 0;

    /**
     * @brief Allocate a block of at least this many bytes.
     *
     * @note An alignment of at least 16 bytes is expected by ELDEN RING.
     *
     * @param cb the number of bytes to allocate
     * @return void* pointer to the allocated memory
     */
    virtual void* allocate(size_t cb) = 0;

    /**
     * @brief Allocate a block of at least this many bytes with a given
     * alignment.
     *
     * @note An alignment of at least 16 bytes is expected by ELDEN RING.
     *
     * @param cb the number of bytes to allocate
     * @param alignment the alignment of the allocated memory
     * @return void* pointer to the allocated memory
     */
    virtual void* allocate_aligned(size_t cb, size_t alignment) = 0;

    /**
     * @brief Reallocate a memory block with a new size.
     *
     * @note Only valid for trivial types.
     * @note An alignment of at least 16 bytes is expected by ELDEN RING.
     *
     * @param p pointer to a block of previously allocated memory
     * @param cb the number of bytes to allocate
     * @return void* pointer to the allocated memory
     */
    virtual void* reallocate(void* p, size_t cb) = 0;

    /**
     * @brief Reallocate an aligned memory block with a new size.
     *
     * @note Only valid for trivial types.
     * @note An alignment of at least 16 bytes is expected by ELDEN RING.
     *
     * @param p pointer to a block of previously allocated memory
     * @param cb the number of bytes to allocate
     * @param alignment the alignment of the allocated memory
     * @return void* pointer to the allocated memory
     */
    virtual void* reallocate_aligned(void* p, size_t cb, size_t alignment) = 0;

    /**
     * @brief Free previously allocated memory.
     *
     * @param p pointer to a block of previously allocated memory.
     */
    virtual void deallocate(void* p) = 0;

    /**
     * @brief Unknown method, isn't supported by any class that implements
     * DLKR::DLAllocator
     *
     */
    virtual void _unsupported() {
        std::terminate();
    }

    /**
     * @brief Allocate a block of at least this many bytes.
     * Use the second allocator if it is bound, first if not.
     *
     * @note An alignment of at least 16 bytes is expected by ELDEN RING.
     *
     * @param cb the number of bytes to allocate
     * @return void* pointer to the allocated memory
     */
    virtual void* allocate_second(size_t cb) = 0;

    /**
     * @brief Allocate a block of at least this many bytes with a given
     * alignment.
     * Use the second allocator if it is bound, first if not.
     *
     * @note An alignment of at least 16 bytes is expected by ELDEN RING.
     *
     * @param cb the number of bytes to allocate
     * @param alignment the alignment of the allocated memory
     * @return void* pointer to the allocated memory
     */
    virtual void* allocate_second_aligned(size_t cb, size_t alignment) = 0;

    /**
     * @brief Reallocate a memory block with a new size.
     * Use the second allocator if it is bound, first if not.
     *
     * @note Only valid for trivial types.
     * @note An alignment of at least 16 bytes is expected by ELDEN RING.
     *
     * @param p pointer to a block of previously allocated memory
     * @param cb the number of bytes to allocate
     * @return void* pointer to the allocated memory
     */
    virtual void* reallocate_second(void* p, size_t cb) = 0;

    /**
     * @brief Reallocate an aligned memory block with a new size.
     * Use the second allocator if it is bound, first if not.
     *
     * @note Only valid for trivial types.
     * @note An alignment of at least 16 bytes is expected by ELDEN RING.
     *
     * @param p pointer to a block of previously allocated memory
     * @param cb the number of bytes to allocate
     * @param alignment the alignment of the allocated memory
     * @return void* pointer to the allocated memory
     */
    virtual void* reallocate_second_aligned(void* p, size_t cb,
        size_t alignment) = 0;

    /**
     * @brief Free previously allocated memory.
     * Use the second allocator if it is bound, first if not.
     *
     * @param p pointer to a block of previously allocated memory.
     */
    virtual void deallocate_second(void* p) = 0;

    /**
     * @brief Unknown method, seemingly unused.
     *
     */
    virtual bool _unknown_bool() {
        return false;
    }

    /**
     * @brief Does memory block belong to the first bound allocator?
     *
     * @note Seems unused.
     */
    virtual bool belongs_to_first(void* p) = 0;

    /**
     * @brief Does memory block belong to the second bound allocator?
     *
     * @note Seems unused.
     */
    virtual bool belongs_to_second(void* p) = 0;

    /**
     * @brief Lock the allocator's mutex (if present and accessible).
     *
     */
    virtual void lock() {}

    /**
     * @brief Unlock the allocator's mutex (if present and accessible).
     *
     */
    virtual void unlock() {}

    /**
     * @brief Get the memory block base that this memory belongs to.
     *
     * @warning May panic if this memory isn't owned by this allocator.
     *
     * @param p pointer to the memory block
     * @return void* pointer to the memory block base
     */
    virtual void* get_memory_block(void* p) = 0;
};

struct DLBackAllocator : public DLAllocator {};
} // namespace DLKR

/**
 * @brief Default libER allocator that gets embedded
 * in objects as needed for ER ABI compatibility.
 *
 */
struct default_allocator_tag {};

/**
 * @brief Default libER allocator with an empty base.
 *
 * ELDEN RING may use it instead of explicitly specifying
 * the allocator for an object.
 *
 */
struct default_empty_base_allocator_tag {};

template <typename AllocatorTag>
class allocator_base;

/**
 * @brief The main libER stand-in for ER allocator proxies.
 *
 * Uses the DLKR::DLAllocator interface and fulfils allocator completeness
 * requirements.
 *
 * @tparam T allocated type
 * @tparam AllocatorTag allocator tag, most often @ref default_allocator_tag or
 * @ref default_empty_base_allocator_tag
 */
template <typename T, typename AllocatorTag = default_allocator_tag>
class allocator : private allocator_base<AllocatorTag> {
    using base_type = allocator_base<AllocatorTag>;
    using proxy_type = DLKR::DLAllocator;
    using alloc_type = std::conditional_t<std::is_same_v<T, void>, char, T>;

    base_type& base() noexcept {
        return static_cast<base_type&>(*this);
    }
    const base_type& base() const noexcept {
        return static_cast<const base_type&>(*this);
    }

    proxy_type& proxy() noexcept {
        return this->base().get_allocator();
    }
    const proxy_type& proxy() const noexcept {
        return this->base().get_allocator();
    }

public:
    /**
     * @brief The allocated value type.
     *
     */
    using value_type = T;

    /**
     * @brief Memory size type.
     *
     */
    using size_type = size_t;

    /**
     * @brief Memory difference type.
     *
     */
    using difference_type = ptrdiff_t;

    /**
     * @brief This allocator is move assigned along with the contents.
     *
     */
    using propagate_on_container_move_assignment = std::true_type;

    /**
     * @brief This allocator may proxy different stateful allocators.
     *
     * Equality checks via operator == are required on assignment.
     */
    using is_always_equal = std::false_type;

    allocator() noexcept : base_type() {}

    /**
     * @brief Allocator copy constructor.
     *
     * Required by allocator completeness requirements.
     *
     * @tparam U other allocated type
     * @param other
     */
    template <typename U>
    allocator(const allocator<U>& other) noexcept : base_type(other.base()) {}

    /**
     * @brief Wrap an existing DLKR::DLAllocator.
     *
     * @param dl_allocator the allocator to use
     */
    allocator(DLKR::DLAllocator* dl_allocator) noexcept
        : base_type(dl_allocator) {}

    /**
     * @brief Allocate n instances of uninitialized memory for T
     *
     * @param n count of instances to allocate
     * @return T* pointer to allocated memory
     */
    [[nodiscard]] T* allocate(size_type n) {
        return reinterpret_cast<T*>(this->proxy().allocate_aligned(
            n * sizeof(alloc_type), alignof(alloc_type)));
    }

    /**
     * @brief Deallocate previously allocated memory.
     *
     * @param p pointer to the memory to deallocate
     * @param n is ignored by DLKR::DLAllocator and can be zero
     */
    void deallocate(T* p, size_type n = 0) {
        this->proxy().deallocate((void*)p);
    }

    /**
     * @brief Allocator equality comparison friend declaration.
     *
     */
    template <typename T1, typename T2>
    friend bool operator==(const allocator<T1>& lhs,
        const allocator<T2>& rhs) noexcept;
};

/**
 * @brief Allocator equality comparison.
 *
 */
template <typename T1, typename T2>
bool operator==(const allocator<T1>& lhs, const allocator<T2>& rhs) noexcept {
    return std::addressof(lhs.proxy()) == std::addressof(rhs.proxy());
}

/**
 * @brief Internal allocator base class.
 *
 * Used for empty base class optimization based on the allocator tag.
 *
 * Pointer to allocator implementation.
 * 
 */
template <>
class allocator_base<default_allocator_tag> {
    DLKR::DLAllocator* allocator;

public:
/// @cond DOXYGEN_SKIP
    LIBERAPI allocator_base() noexcept;

    allocator_base(DLKR::DLAllocator* dl_allocator) noexcept
        : allocator(dl_allocator) {}

    DLKR::DLAllocator& get_allocator() const noexcept {
        return *this->allocator;
    }
/// @endcond
};

/**
 * @brief Internal allocator base class.
 *
 * Used for empty base class optimization based on the allocator tag.
 *
 * Zero size (empty base) implementation.
 * 
 */
template <>
class allocator_base<default_empty_base_allocator_tag> {
public:
/// @cond DOXYGEN_SKIP
    allocator_base() noexcept = default;

    allocator_base(DLKR::DLAllocator* dl_allocator) noexcept {}

    LIBERAPI DLKR::DLAllocator& get_allocator() const noexcept;
/// @endcond
};
} // namespace from
