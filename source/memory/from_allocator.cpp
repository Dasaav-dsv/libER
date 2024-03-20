#include <memory/from_allocator.h>
#include <malloc.h>

class fromlike_allocator : public from::allocator_interface {
public:
    virtual ~fromlike_allocator() = default;

    void* allocate(size_t cb) override {
        return malloc(cb);
    }

    void* allocate_aligned(size_t cb, size_t alignment) override {
        return _aligned_malloc(cb, alignment);
    }

    void* reallocate(void* p, size_t cb) override {
        return realloc(p, cb);
    }

    void* reallocate_aligned(void* p, size_t cb, size_t alignment) override {
        return _aligned_realloc(p, cb, alignment);
    }

    void deallocate(void* p) override {
        free(p);
    }

    void* allocate_outer(size_t cb) override {
        return malloc(cb);
    }

    void* allocate_aligned_outer(size_t cb, size_t alignment) override {
        return _aligned_malloc(cb, alignment);
    }

    void* reallocate_outer(void* p, size_t cb) override {
        return realloc(p, cb);
    }

    void* reallocate_aligned_outer(void* p, size_t cb, size_t alignment) override {
        return _aligned_realloc(p, cb, alignment);
    }

    void deallocate_outer(void* p) override {
        free(p);
    }

    size_t msize(void* p) override {
        return _msize(p);
    }

    void lock() override {}
    void unlock() override {}
};

static fromlike_allocator default_allocator;

from::allocator_interface& from::default_fromlike_allocator() noexcept {
    return default_allocator;
}