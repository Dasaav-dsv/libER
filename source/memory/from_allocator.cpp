#include <from_allocator.h>

#include <symbols.h>
#include <functions.h>

#include <malloc.h>
#include <limits>

namespace liber {
    // Default internal libER allocator
    // Implements all necessary methods
    // Uses C allocation functions (needs _msize)
    // Models DLKRD::HeapAllocator<DLKR::Win32RuntimeHeapImpl>
    static class fromlike_allocator : public from::DLKR::DLAllocator {
    public:
        virtual ~fromlike_allocator() = default;

        // Same as DLKRD::HeapAllocator<DLKR::Win32RuntimeHeapImpl>
        int _allocator_id() override { return 0x401; }

        // Same as DLKRD::HeapAllocator<DLKR::Win32RuntimeHeapImpl>
        std::bitset<8> heap_flags() override { return 0x3B; }

        size_t heap_capacity() override {
            return std::numeric_limits<size_t>::max();
        }

        size_t heap_size() override {
            return 0;
        }

        void* _get_free_bin() override {
            return nullptr;
        }

        size_t heap_allocation_count() override {
            return 0;
        }

        size_t msize(void* p) override {
            return _msize(p);
        }

        void* allocate(size_t cb) override {
            return _aligned_malloc(cb, 16);
        }

        void* allocate_aligned(size_t cb, size_t alignment) override {
            return _aligned_malloc(cb, alignment > 16 ? alignment : 16);
        }

        void* reallocate(void* p, size_t cb) override {
            return _aligned_realloc(p, cb, 16);
        }

        void* reallocate_aligned(void* p, size_t cb, size_t alignment) override {
            return _aligned_realloc(p, cb, alignment > 16 ? alignment : 16);
        }

        void deallocate(void* p) override {
            if (p) _aligned_free(p);
        }

        void* allocate_second(size_t cb) override {
            return this->allocate(cb);
        }

        void* allocate_second_aligned(size_t cb, size_t alignment) override {
            return this->allocate_aligned(cb, alignment);
        }

        void* reallocate_second(void* p, size_t cb) override {
            return this->reallocate(p, cb);
        }

        void* reallocate_second_aligned(void* p, size_t cb, size_t alignment) override {
            return this->reallocate_aligned(p, cb, 16);
        }

        void deallocate_second(void* p) override {
            this->deallocate(p);
        }

        bool belongs_to_first(void* p) override {
            return false;
        }

        bool belongs_to_second(void* p) override {
            return false;
        }

        void* get_memory_block(void* p) override {
            return nullptr;
        }
    } default_allocator;
}

namespace from {
    allocator_proxy<void>::allocator_proxy() noexcept : allocator(&liber::default_allocator) {}

    DLKR::DLAllocator* DLKR::DLAllocator::get_allocator_of(void* p) {
        // Check if it's possible memory was allocated on
        // one of the ER heaps by checking allocator initialization
        DLKR::DLAllocator* allocator =
            *reinterpret_cast<DLKR::DLAllocator**>(liber::symbol<"DLKR::DLBackAllocator">::get());
        if (allocator) // Allocators are initialized, safe to check ownership
            return liber::function<"DLKR::DLAllocator::get_allocator_of", DLAllocator*>::call(p);
        else // Memory likely malloc-ed by us or DLKRD::HeapAllocator<DLKR::Win32RuntimeHeapImpl>
            return &liber::default_allocator;
    }

#define LIBER_SPECIALIZE_ALLOCATOR_PROXY(NAME)                                   \
    DLKR::DLAllocator& allocator_proxy<NAME>::get_allocator() noexcept {         \
        DLKR::DLAllocator* allocator =                                           \
            *reinterpret_cast<DLKR::DLAllocator**>(liber::symbol<#NAME>::get()); \
        if (!allocator) std::terminate();                                        \
        return *allocator;                                                       \
    }

#include <memory/from_allocator.inl>

#undef LIBER_SPECIALIZE_ALLOCATOR_PROXY
}