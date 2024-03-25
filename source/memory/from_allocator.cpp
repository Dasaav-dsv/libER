#include <from_allocator.h>

#include <symbols.h>
#include <functions.h>

#include <malloc.h>
#include <limits>

namespace liber {
    // Default internal libER allocator
    // Implements all necessary methods
    // Uses C allocation functions (needs _msize)
    static class fromlike_allocator : public from::DLKR::DLAllocator {
    public:
        virtual ~fromlike_allocator() = default;

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
            free(p);
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
        return liber::function<"DLKR::DLAllocator::get_allocator_of", DLAllocator*>::call(p);
    }

// TODO: Allocator initialization check
#define LIBER_SPECIALIZE_ALLOCATOR_PROXY(NAME)                                   \
    DLKR::DLAllocator& allocator_proxy<NAME>::get_allocator() noexcept {         \
        DLKR::DLAllocator* allocator =                                           \
            *reinterpret_cast<DLKR::DLAllocator**>(liber::symbol<#NAME>::get()); \
        return *allocator;                                                       \
    }

#include <memory/from_allocator.inl>

#undef LIBER_SPECIALIZE_ALLOCATOR_PROXY
}