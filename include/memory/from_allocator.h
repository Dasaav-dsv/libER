#pragma once

#include <cstddef>
#include <cstdint>
#include <utility>
#include <bitset>

// For std::terminate
#include <stdexcept>

/*
* DLKR::DLAllocator is the common allocator interface
* used by ER allocators, which are statically allocated
* in the binary and referenced by stateless proxy objects.
* from::allocator<T> provides a proxy object that fulfils Allocator
* completeness requirements and uses the DLKR::DLAllocator interface.
* Due to implementing msize (actively used, see CS::CSGrassAllocator)
* the default allocator proxied by from::allocator
* cannot be based on std::allocator<T>.
*/

namespace from {
    namespace DLKR {
        // TODO: fill out virtual function table, don't forget msize
        class DLAllocator {
        public:
            virtual ~DLAllocator() = default;
            virtual int _allocator_id() { return -1; }
            virtual int _unused() { return -1; }
            virtual std::bitset<8> heap_flags() { return 0x73; }
            virtual size_t heap_capacity() = 0;
            virtual size_t heap_size() = 0;
            virtual void* get_free_bin() = 0;
            virtual size_t heap_allocation_count() = 0;
            virtual size_t msize(void* p) = 0;
            virtual void* allocate(size_t cb) = 0;
            virtual void* allocate_aligned(size_t cb, size_t alignment) = 0;
            virtual void* reallocate(void* p, size_t cb) = 0;
            virtual void* reallocate_aligned(void* p, size_t cb, size_t alignment) = 0;
            virtual void deallocate(void* p) = 0;
            virtual void _unsupported() { std::terminate(); }
            virtual void* allocate_second(size_t cb) = 0;
            virtual void* allocate_second_aligned(size_t cb, size_t alignment) = 0;
            virtual void* reallocate_second(void* p, size_t cb) = 0;
            virtual void* reallocate_second_aligned(void* p, size_t cb, size_t alignment) = 0;
            virtual void deallocate_second(void* p) = 0;
            virtual bool _unknown_bool() { return false; }
            virtual bool belongs_to_first(void* p) = 0;
            virtual bool belongs_to_second(void* p) = 0;
            virtual void lock() {}
            virtual void unlock() {}
            virtual void* get_memory_block(void* p) = 0;
        };
    }

    DLKR::DLAllocator& default_fromlike_allocator() noexcept;

    template <typename T>
    class allocator {
        DLKR::DLAllocator* alloc;
    public:
        using value_type = T;
        using size_type = size_t;
        using difference_type = ptrdiff_t;
        using propagate_on_container_move_assignment = std::true_type;
        using is_always_equal = std::false_type;

        allocator() noexcept : interface(default_fromlike_allocator()) {}

        template <typename U>
        allocator(const allocator<U>& other) noexcept : interface(other.alloc) {}

        [[nodiscard]] T* allocate(size_type n) {
            return reinterpret_cast<T*>(alloc->allocate_aligned(n * sizeof(T), alignof(T)));
        }

        void deallocate(T* p, size_type n) {
            alloc->deallocate((void*)p);
        }

        template <typename T1, typename T2>
        friend bool operator == (const allocator<T1>& lhs, const allocator<T2>& rhs) noexcept;
    };

    template <typename T1, typename T2>
    bool operator == (const allocator<T1>& lhs, const allocator<T2>& rhs) noexcept {
        return lhs.alloc == rhs.alloc;
    }
}