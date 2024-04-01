#include <memory/from_allocator.h>

#include <detail/symbols.h>
#include <detail/functions.h>
#include <detail/windows.inl>

static HANDLE default_heap = GetProcessHeap();

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
        if (!p) return 0; 
        return HeapSize(default_heap, 0, _block_pointer(p));
    }

    void* allocate(size_t cb) override {
        return this->allocate_aligned(cb, MEMORY_ALLOCATION_ALIGNMENT);
    }

    void* allocate_aligned(size_t cb, size_t alignment) override {
        _adjust_alignment(alignment);
        _adjust_size(cb, alignment);
        void* alloc = HeapAlloc(default_heap, 0, cb);
        if (alloc) {
            void* alloc_base = _adjust_block(alloc, alignment);
            _block_pointer(alloc) = alloc_base;
        }
        return alloc;
    }

    void* reallocate(void* p, size_t cb) override {
        return this->reallocate_aligned(p, cb, MEMORY_ALLOCATION_ALIGNMENT);
    }

    void* reallocate_aligned(void* p, size_t cb, size_t alignment) override {
        void* alloc = nullptr;
        if (p) {
            if (cb) {
                _adjust_alignment(alignment);
                _adjust_size(cb, alignment);
                alloc = HeapReAlloc(default_heap, 0, _block_pointer(p), cb);
                if (alloc) {
                    void* alloc_base = _adjust_block(alloc, alignment);
                    _block_pointer(alloc) = alloc_base;
                }
            }
            else {
                this->deallocate(p);
            }
        }
        return alloc;
    }

    void deallocate(void* p) override {
        if (!p) return;
        HeapFree(default_heap, 0, _block_pointer(p));
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

    // ER allocator implementation details
    // These are necessary for ABI compatibility
private:
    static void _adjust_alignment(size_t& alignment) {
        alignment = alignment > MEMORY_ALLOCATION_ALIGNMENT ? alignment : MEMORY_ALLOCATION_ALIGNMENT;
    }

    static void _adjust_size(size_t& size, size_t alignment) {
        size += alignment;
    }

    static void* _adjust_block(void*& p, size_t alignment = MEMORY_ALLOCATION_ALIGNMENT) {
        void* tmp = p;
        p = reinterpret_cast<void*>((reinterpret_cast<uintptr_t>(p) + alignment) & ~(alignment - 1));
        return tmp;
    }

    static void*& _block_pointer(void* p) {
        return *(reinterpret_cast<void**>(p) - 1);
    }
} default_allocator;

using namespace from;

allocator_base<from::default_allocator_tag>::allocator_base() noexcept
    : allocator(&default_allocator) {}

DLKR::DLAllocator& allocator_base<from::default_empty_base_allocator_tag>::get_allocator() const noexcept {
    return default_allocator;
}

DLKR::DLAllocator& allocator_base<from::default_empty_base_allocator_tag>::get_allocator_of(void* p) const {
    return *DLKR::DLAllocator::get_allocator_of(p);
}

DLKR::DLAllocator* DLKR::DLAllocator::get_allocator_of(void* p) {
    // Check if it's possible memory was allocated on
    // one of the ER heaps by checking allocator initialization
    DLKR::DLAllocator* allocator =
        *reinterpret_cast<DLKR::DLAllocator**>(liber::symbol<"DLKR::DLBackAllocator">::get());
    if (allocator) // Allocators are initialized, safe to check ownership
        return liber::function<"DLKR::DLAllocator::get_allocator_of", DLKR::DLAllocator*>::call(p);
    else // Memory likely malloc-ed by us or DLKRD::HeapAllocator<DLKR::Win32RuntimeHeapImpl>
        return &default_allocator;
}

#define LIBER_SPECIALIZE_ALLOCATOR_BASE(NAME)                                \
DLKR::DLAllocator& allocator_base<NAME>::get_allocator() const {             \
    DLKR::DLAllocator* allocator =                                           \
        *reinterpret_cast<DLKR::DLAllocator**>(liber::symbol<#NAME>::get()); \
    if (!allocator) std::terminate();                                        \
    return *allocator;                                                       \
}

#include <memory/from_allocator.inl>

#undef LIBER_SPECIALIZE_ALLOCATOR_BASE
