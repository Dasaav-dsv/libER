#include <memory/from_allocator.hpp>

#include <detail/functions.hpp>
#include <detail/symbols.hpp>
#include <detail/windows.inl>

#include <mimalloc.h>

#include <bit>

#define LIBER_ALLOC_MAGIC 0x43'4F'4C'4C'41'52'45'40 // @ERALLOC

using namespace from;

static HANDLE default_heap = GetProcessHeap();

// Default internal libER allocator based on mimalloc
// Implements all necessary methods
// Uses C allocation functions (needs _msize)
// Models DLKRD::HeapAllocator<DLKR::Win32RuntimeHeapImpl>
static class liber_internal_allocator : public DLKR::DLAllocator {
public:
    liber_internal_allocator() {
        mi_option_set(mi_option_reset_delay, 0);
    }

    virtual ~liber_internal_allocator() = default;

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
        return this->allocate_aligned(cb, 16);
    }

    void* allocate_aligned(size_t cb, size_t alignment) override {
        _adjust_alignment(alignment);
        _adjust_size(cb, alignment);
        void* alloc = nullptr;
        mi_heap_t* heap = mi_heap_get_backing();
        alloc = mi_heap_malloc_aligned(heap, cb, alignment);
        if (alloc) _adjust_block_and_encode(alloc, alignment);
        return alloc;
    }

    void* reallocate(void* p, size_t cb) override {
        return this->reallocate_aligned(p, cb, 16);
    }

    void* reallocate_aligned(void* p, size_t cb, size_t alignment) override {
        void* alloc = cb ? this->allocate_aligned(cb, alignment) : nullptr;
        this->deallocate(p);
        return alloc;
    }

    void deallocate(void* p) override {
        if (!p) return;
        size_t maybe_align = _block_data(p) ^ LIBER_ALLOC_MAGIC;
        if (maybe_align < 64) {
            liber_internal_allocator* owner = _block_owner(p);
            if (owner != this) owner->deallocate(p);
            else mi_free(p);
            return;
        }
        auto dl_back_allocator = reinterpret_cast<DLKR::DLAllocator*>(
            liber::function<"DLKR::DLBackAllocator::get",
                DLKR::DLAllocator*>::call());
        if (reinterpret_cast<void**>(dl_back_allocator)[0] <= p &&
            reinterpret_cast<void**>(dl_back_allocator)[1] > p) {
            (dl_back_allocator + 4)->deallocate(p);
            return;
        }
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

    void* reallocate_second_aligned(
        void* p, size_t cb, size_t alignment) override {
        return this->reallocate_aligned(p, cb, alignment);
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
        alignment = alignment > 16 ? alignment : 16;
    }

    static void _adjust_size(size_t& size, size_t alignment) {
        size = (size + alignment * 2 - 1) & -static_cast<ptrdiff_t>(alignment);
    }

    static void* _adjust_block(void*& p, size_t alignment = 16) {
        void* tmp = p;
        size_t alignment_minus_one = alignment - 1;
        p = reinterpret_cast<void*>(
            (reinterpret_cast<uintptr_t>(p) + alignment_minus_one) &
            ~alignment_minus_one);
        return tmp;
    }

    void _adjust_block_and_encode(void*& p, size_t alignment) {
        size_t alignment_minus_one = alignment - 1;
        p = reinterpret_cast<void*>(reinterpret_cast<uintptr_t>(p) + alignment);
        _block_owner(p) = reinterpret_cast<uintptr_t>(this);
        _block_data(p) = LIBER_ALLOC_MAGIC | std::countr_zero(alignment);
    }

    static liber_internal_allocator*& _block_owner(void* p) {
        return *(reinterpret_cast<liber_internal_allocator**>(p) - 2);
    }

    static uintptr_t& _block_data(void* p) {
        return *(reinterpret_cast<uintptr_t*>(p) - 1);
    }

    static void* _encode_ptr(const void* p, size_t alignment) {
        auto encoded = std::rotr(reinterpret_cast<uint64_t>(p) + 0b101, 3);
        return reinterpret_cast<void*>(encoded);
    }

    static void* _decode_ptr(void* p) {
        return reinterpret_cast<void*>(reinterpret_cast<uint64_t>(p) << 3);
    }

    static bool _test_ptr(void* p) {
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
