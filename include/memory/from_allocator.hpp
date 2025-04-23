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

#include <cstddef>
#include <cstdint>
#include <utility>

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
    virtual int get_allocator_id() = 0;

    /**
     * @brief Unknown function which is defined in the interface, never
     * overriden or used.
     *
     * @return int unknown
     */
    virtual int _unk0x10() {
        return -1;
    }

    /**
     * @brief Allocator and heap compatibility flags.
     *
     * 0x20 indicates thread safety (most commonly checked).
     *
     * @return int& flags
     */
    virtual int& get_heap_flags(int& flags) = 0;

    /**
     * @brief The total capacity of the heap, in bytes.
     *
     * @return size_t heap capacity
     */
    virtual size_t get_heap_capacity() = 0;

    /**
     * @brief How many bytes out of the total capacity are allocated.
     *
     * @return size_t heap size
     */
    virtual size_t get_heap_size() = 0;

    /**
     * @brief The remaining capacity of the backing heap.
     *
     * @return size_t backing heap capacity
     */
    virtual size_t get_heap_backing_capacity() = 0;

    /**
     * @brief Total number of objects that have been allocated on the
     * allocator's heap.
     *
     * @return size_t allocated object count
     */
    virtual size_t get_heap_allocation_count() = 0;

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
     * @param p pointer to a block of previously allocated memory
     */
    virtual void deallocate(void* p) = 0;

    /**
     * @brief Unknown method, isn't supported by any class that implements
     * DLKR::DLAllocator.
     *
     */
    virtual void _unk0x70() {}

    /**
     * @brief Allocate a block of at least this many bytes.
     * Use the second allocator if it is bound, first if not.
     *
     * @note An alignment of at least 16 bytes is expected by ELDEN RING.
     *
     * @param cb the number of bytes to allocate
     * @return void* pointer to the allocated memory
     */
    virtual void* allocate2(size_t cb) {
        return this->allocate(cb);
    }

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
    virtual void* allocate2_aligned(size_t cb, size_t alignment) {
        return this->allocate_aligned(cb, alignment);
    }

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
    virtual void* reallocate2(void* p, size_t cb) {
        return this->reallocate(p, cb);
    }

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
    virtual void* reallocate2_aligned(void* p, size_t cb, size_t alignment) {
        return this->reallocate_aligned(p, cb, alignment);
    }

    /**
     * @brief Free previously allocated memory.
     * Use the second allocator if it is bound, first if not.
     *
     * @param p pointer to a block of previously allocated memory.
     */
    virtual void deallocate2(void* p) {
        this->deallocate(p);
    }

    /**
     * @brief Unknown method, seemingly unused.
     *
     */
    virtual bool _unk0xA0() {
        return false;
    }

    /**
     * @brief Does the pointed to memory block belong to this allocator?
     *
     */
    virtual bool check_owned(void* p) = 0;

    /**
     * @brief Seemingly unused.
     *
     */
    virtual bool _unk0xB0(std::nullptr_t) {
        return false;
    }

    /**
     * @brief Lock the allocator's mutex (if present and accessible).
     *
     */
    virtual void lock() = 0;

    /**
     * @brief Unlock the allocator's mutex (if present and accessible).
     *
     */
    virtual void unlock() = 0;

    /**
     * @brief Get the memory block that this memory belongs to.
     *
     * @warning May panic if this memory isn't owned by this allocator.
     *
     * @param p pointer to the memory block
     * @return void* pointer to the memory block base
     */
    virtual void* get_block(void* p) = 0;
};

/**
 * @brief Get the allocator of memory allocated by ELDEN RING.
 *
 * @param p pointer to a block of memory
 * @return DLAllocator& allocator interface
 */
LIBERAPI DLAllocator& get_dlallocator_of(const void* p) noexcept;

/**
 * @brief Get a compatible ELDEN RING base allocator.
 *
 * This allocator uses Windows heaps.
 * @note Only memory allocated by this allocator
 * should be accessed through its interface.
 *
 * @return DLAllocator& allocator interface
 */
LIBERAPI DLAllocator& get_base_allocator() noexcept;
} // namespace DLKR

/**
 * @brief The main libER stand-in for ER allocator proxies.
 *
 * Uses the DLKR::DLAllocator interface and fulfils allocator completeness
 * requirements.
 *
 * @tparam T allocated type
 */
template <typename T>
class allocator {
    using base_type = DLKR::DLAllocator;
    using alloc_type = std::conditional_t<std::is_same_v<T, void>, char, T>;

    base_type* base;

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

    /**
     * @brief Default allocator constructor.
     *
     */
    allocator() noexcept : base(&DLKR::get_base_allocator()) {}

    /**
     * @brief Allocator copy constructor.
     *
     * Required by allocator completeness requirements.
     *
     * @param other
     */
    allocator(const allocator& other) noexcept : base(other.base) {}

    /**
     * @brief Allocator copy constructor.
     *
     * Required by allocator completeness requirements.
     *
     * @tparam U other allocated type
     * @param other
     */
    template <typename U>
    allocator(const allocator<U>& other) noexcept : base(other.base) {}

    /**
     * @brief Wrap an existing DLKR::DLAllocator.
     *
     * @param allocator the allocator to use
     */
    explicit allocator(base_type* allocator_base) noexcept
        : base(allocator_base) {}

    /**
     * @brief Allocate n instances of uninitialized memory for T
     *
     * @param n count of instances to allocate
     * @return T* pointer to allocated memory
     */
    [[nodiscard]] T* allocate(size_type n) {
        return reinterpret_cast<T*>(this->base->allocate_aligned(
            n * sizeof(alloc_type), alignof(alloc_type)));
    }

    /**
     * @brief Deallocate previously allocated memory.
     *
     * @param p pointer to the memory to deallocate
     * @param n is ignored by DLKR::DLAllocator and can be zero
     */
    void deallocate(T* p, size_type n = 0) {
        this->base->deallocate(static_cast<void*>(p));
    }

    /**
     * @brief Allocator equality comparison.
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
    return lhs.base == rhs.base;
}

/**
 * @brief Get the allocator of an object allocated by ELDEN RING.
 *
 * @param p pointer to object
 * @return from::allocator<T> allocator
 */
template <typename T>
from::allocator<T> get_allocator_of(const T* p) noexcept {
    return from::allocator<T>(
        &DLKR::get_dlallocator_of(static_cast<const void*>(p)));
}
} // namespace from
