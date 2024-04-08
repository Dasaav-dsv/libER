#include <memory/from_allocator.hpp>

#include <detail/functions.hpp>
#include <detail/symbols.hpp>
#include <detail/windows.inl>

#include <mimalloc.h>

#include <bit>

using namespace from;

static HANDLE default_heap = GetProcessHeap();

// Default internal libER allocator based on mimalloc
// Implements all necessary methods
// Uses C allocation functions (needs _msize)
// Models DLKRD::HeapAllocator<DLKR::Win32RuntimeHeapImpl>
static class fromlike_allocator : public from::DLKR::DLAllocator {
public:
    virtual ~fromlike_allocator() = default;

    // Same as DLKRD::HeapAllocator<DLKR::Win32RuntimeHeapImpl>
    int _allocator_id() override {
        return 0x401;
    }

    // Same as DLKRD::HeapAllocator<DLKR::Win32RuntimeHeapImpl>
    std::bitset<8> heap_flags() override {
        return 0x3B;
    }

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
        void* dec_bp = _decode_ptr(_block_pointer(p));
        return mi_usable_size(dec_bp) - reinterpret_cast<uintptr_t>(p) +
            reinterpret_cast<uintptr_t>(dec_bp);
    }

    void* allocate(size_t cb) override {
        return this->allocate_aligned(cb, 8);
    }

    void* allocate_aligned(size_t cb, size_t alignment) override {
        _adjust_alignment(alignment);
        _adjust_size(cb, alignment);
        void* alloc = nullptr;
        mi_heap_t* heap = mi_heap_get_backing();
        if (cb < MI_SMALL_SIZE_MAX) alloc = mi_heap_malloc_small(heap, cb);
        else alloc = mi_heap_malloc(heap, cb);
        if (alloc) {
            void* alloc_base = _adjust_block(alloc, alignment);
            _block_pointer(alloc) = _encode_ptr(alloc_base);
        }
        return alloc;
    }

    void* reallocate(void* p, size_t cb) override {
        return this->reallocate_aligned(p, cb, 8);
    }

    void* reallocate_aligned(void* p, size_t cb, size_t alignment) override {
        void* alloc = nullptr;
        if (!p) return this->allocate_aligned(cb, alignment);
        if (cb) {
            _adjust_alignment(alignment);
            _adjust_size(cb, alignment);
            void* dec_bp = _decode_ptr(_block_pointer(p));
            alloc = mi_heap_realloc_aligned(
                mi_heap_get_backing(), dec_bp, cb, alignment);
            if (alloc) {
                void* alloc_base = _adjust_block(alloc, alignment);
                _block_pointer(alloc) = _encode_ptr(alloc_base);
            }
        } else {
            this->deallocate(p);
        }
        return alloc;
    }

    void deallocate(void* p) override {
        if (!p) return;
        auto dl_back_allocator = reinterpret_cast<DLKR::DLAllocator*>(
            liber::function<"DLKR::DLBackAllocator::get",
                DLKR::DLAllocator*>::call());
        if (reinterpret_cast<void**>(dl_back_allocator)[0] <= p &&
            reinterpret_cast<void**>(dl_back_allocator)[1] > p) {
            (dl_back_allocator + 4)->deallocate(p);
            return;
        }
        void* bp = _block_pointer(p);
        if (_test_ptr(bp)) {
            mi_free(_decode_ptr(bp));
            return;
        }
        HeapFree(default_heap, 0, bp);
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

    void* reallocate_second_aligned(
        void* p, size_t cb, size_t alignment) override {
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
        alignment = alignment > MEMORY_ALLOCATION_ALIGNMENT
            ? alignment
            : MEMORY_ALLOCATION_ALIGNMENT;
    }

    static void _adjust_size(size_t& size, size_t alignment) {
        size += alignment * 2 - 1;
        size &= -static_cast<intptr_t>(alignment);
    }

    static void* _adjust_block(
        void*& p, size_t alignment = MEMORY_ALLOCATION_ALIGNMENT) {
        void* tmp = p;
        p = reinterpret_cast<void*>(
            (reinterpret_cast<uintptr_t>(p) + alignment) & ~(alignment - 1));
        return tmp;
    }

    static void*& _block_pointer(void* p) {
        return *(reinterpret_cast<void**>(p) - 1);
    }

    void* _encode_ptr(void* p) {
        auto encoded = std::rotr(reinterpret_cast<uint64_t>(p) + 0b101, 3);
        return reinterpret_cast<void*>(encoded);
    }

    void* _decode_ptr(void* p) {
        return reinterpret_cast<void*>(reinterpret_cast<uint64_t>(p) << 3);
    }

    bool _test_ptr(void* p) {
        return (reinterpret_cast<uint64_t>(p) >> 48) == 0xA000;
    }
} default_allocator;

allocator_base<from::default_allocator_tag>::allocator_base() noexcept
    : allocator(&default_allocator) {}

DLKR::DLAllocator&
allocator_base<from::default_empty_base_allocator_tag>::get_allocator()
    const noexcept {
    return default_allocator;
}

DLKR::DLAllocator&
allocator_base<from::default_empty_base_allocator_tag>::get_allocator_of(
    void* p) const {
    return *DLKR::DLAllocator::get_allocator_of(p);
}

DLKR::DLAllocator* DLKR::DLAllocator::get_allocator_of(void* p) {
    return &default_allocator;
}

#define LIBER_SPECIALIZE_ALLOCATOR_BASE(NAME)                                  \
    DLKR::DLAllocator& allocator_base<NAME>::get_allocator() const {           \
        DLKR::DLAllocator* allocator = *reinterpret_cast<DLKR::DLAllocator**>( \
            liber::symbol<#NAME>::get());                                      \
        if (!allocator) std::terminate();                                      \
        return *allocator;                                                     \
    }

#include <memory/from_allocator.inl>

#undef LIBER_SPECIALIZE_ALLOCATOR_BASE
