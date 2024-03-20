#pragma once

#include <cstddef>
#include <cstdint>
#include <utility>

namespace from {
    // TODO: fill out virtual function table, don't forget msize
    class allocator_interface {
    public:
        virtual ~allocator_interface() = 0;
        virtual void f1() {}
        virtual void f2() {}
        virtual void f3() {}
        virtual void f4() {}
        virtual void f5() {}
        virtual void f6() {}
        virtual void f7() {}
        virtual void f8() {}
        virtual void* allocate(size_t cb) = 0;
        virtual void* allocate_aligned(size_t cb, size_t alignment) = 0;
        virtual void* reallocate(void* p, size_t cb) = 0;
        virtual void* reallocate_aligned(void* p, size_t cb, size_t alignment) = 0;
        virtual void deallocate(void* p) = 0;
        virtual void f14() {}
        virtual void* allocate_outer(size_t cb) = 0;
        virtual void* allocate_aligned_outer(size_t cb, size_t alignment) = 0;
        virtual void* reallocate_outer(void* p, size_t cb) = 0;
        virtual void* reallocate_aligned_outer(void* p, size_t cb, size_t alignment) = 0;
        virtual void deallocate_outer(void* p) = 0;
        virtual void f20() {}
        virtual void f21() {}
        virtual void f22() {}
        virtual void lock() = 0;
        virtual void unlock() = 0;
        virtual void f25() {}
        virtual size_t msize(void* p) = 0;
    };

    allocator_interface& default_fromlike_allocator() noexcept;

    template <typename T>
    class allocator {
        allocator_interface& interface;
    public:
        using value_type = T;
        using size_type = size_t;
        using difference_type = ptrdiff_t;
        using propagate_on_container_move_assignment = std::true_type;
        using is_always_equal = std::false_type;

        allocator() noexcept : interface(default_fromlike_allocator()) {}

        template <typename U>
        allocator(const allocator<U>& other) : interface(other.interface) {}

        [[nodiscard]] T* allocate(size_type n) {
            return reinterpret_cast<T*>(interface.allocate_aligned(n, alignof(T)));
        }

        void deallocate(T* p, size_type n) {
            allocator.deallocate((void*)p);
        }

        bool operator == (const allocator& rhs) const noexcept {
            return std::addressof(interface) == std::addressof(rhs.interface);
        }

        template <typename T1, typename T2>
        friend bool operator == (const allocator<T1>& lhs, const allocator<T2>& rhs) noexcept;
    };

    template <typename T1, typename T2>
    bool operator == (const allocator<T1>& lhs, const allocator<T2>& rhs) noexcept {
        return std::addressof(lhs.interface) == std::addressof(rhs.interface);
    }
}