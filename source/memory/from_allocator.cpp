#include <coresystem/memory.hpp>
#include <dantelion2/system.hpp>
#include <memory/from_allocator.hpp>

#include <detail/defines.hpp>
#include <detail/functions.hpp>
#include <detail/symbols.hpp>
#include <detail/windows.inl>

#include <NamedMutex.h>
#include <NamedResource.h>
#include <SharedMutex.h>
#include <mimalloc.h>

#include <bit>
#include <cstring>
#include <immintrin.h>
#include <memory>
#include <mutex>
#include <shared_mutex>
#include <utility>
#include <vector>

#define LIBER_ALLOC_MAGIC 0x43'4F'4C'4C'41'52'45'40 // @ERALLOC

using namespace from;

// Part of the layout for a DLBackAllocator wrapper
// Not fully documented in libER, it is a structure
// that holds both a concrete DLAllocator
// and a DLBackAllocator back to back
class DLBackAllocatorHolder {
    std::pair<void*, void*> main_heap;
    std::pair<void*, void*> second_heap;
    uintptr_t vtable[2];

public:
    bool is_on_heap(void* p) {
        return main_heap.first <= p && main_heap.second > p;
    }

    DLKR::DLAllocator* get_allocator() {
        return reinterpret_cast<DLKR::DLAllocator*>(vtable);
    }
};

// The default heap used by ELDEN RING for
// _malloc_base and _free_base
static HANDLE default_heap = GetProcessHeap();

// Default internal libER allocator based on mimalloc
// Implements all necessary DLAllocator methods,
// overrides the default allocators used by ELDEN RING
// Tries to be universal with respect to allocation
// strategies left after
static class alignas(1 << CHAR_BIT) liber_internal_allocator
    : public DLKR::DLAllocator {
public:
    liber_internal_allocator() : all_allocators(LIBER_MY_ALLOCATORS_RESOURCE) {
        mi_option_set(mi_option_purge_delay, 0);
        {
            WinTypes::NamedMutex mutex{ LIBER_SINGLETON_OVERRIDE_MUTEX };
            std::scoped_lock lock{ mutex };
            // Replace the CSMemory singleton responsible
            // for setting up allocators
            // Check fd4/detail/fd4_memory and coresystem/memory
            CS::CSMemory*& csmem = *reinterpret_cast<CS::CSMemory**>(
                liber::symbol<"CS::CSMemory::instance">::get());
            MemoryBarrier();
            if (!csmem)
                csmem = new CS::CSMemory();
            liber_internal_allocator*& sysalloc =
                *reinterpret_cast<liber_internal_allocator**>(
                    liber::symbol<"DLKR::DLAllocator::SYSTEM">::get());
            // Transition: ALWAYS replace the system allocator,
            // even if it had been replaced previously
            MemoryBarrier();
            sysalloc = this;
        }
        // Keep a list of all libER allocator instances
        std::scoped_lock lock{ this->all_allocators };
        this->all_allocators->push_back(this);
    }

    virtual ~liber_internal_allocator() {
        std::scoped_lock lock{ this->all_allocators };
        std::erase(this->all_allocators.get(), this);
    }

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

    size_t backing_heap_capacity() override {
        return std::numeric_limits<size_t>::max();
    }

    size_t heap_allocation_count() override {
        return 0;
    }

    // Extract block size from the metadata
    // or call msize of other allocators
    size_t msize(void* p) override {
        DLKR::DLAllocator* allocator = this->get_allocator_of(p);
        if (allocator == this) {
            // We have the right libER allocator
            size_t data = _block_data(p) ^ LIBER_ALLOC_MAGIC;
            size_t lg2align = static_cast<unsigned char>(data);
            // Undo the encoding and confirm integrity
            size_t nsize = (_block_size(p) ^ LIBER_ALLOC_MAGIC) - lg2align;
            size_t nalign = ~0ull << lg2align;
            if (lg2align >= 64 || nalign < nsize)
                std::terminate();
            return nalign - static_cast<ptrdiff_t>(nsize);
        }
        else if (!allocator) {
            // Try WINAPI HeapSize
            return p ? HeapSize(default_heap, 0, _block_pointer(p)) : 0;
        }
        return allocator->msize(p);
    }

    void* allocate(size_t cb) override {
        return this->allocate_aligned(cb, 16);
    }

    void* allocate_aligned(size_t cb, size_t alignment) override {
        _adjust_alignment(alignment);
        _adjust_size(cb, alignment);
        void* alloc = mi_malloc_aligned(cb, alignment);
        // Encode alignment and size into the leading
        // 16 bytes and adjust the pointer
        if (alloc)
            _adjust_block_and_encode(alloc, cb, alignment);
        return alloc;
    }

    void* reallocate(void* p, size_t cb) override {
        return this->reallocate_aligned(p, cb, 16);
    }

    void* reallocate_aligned(void* p, size_t cb, size_t alignment) override {
        void* alloc = cb ? this->allocate_aligned(cb, alignment) : nullptr;
        if (p) {
            if (alloc)
                std::memcpy(alloc, p, this->msize(p));
            this->deallocate(p);
        }
        return alloc;
    }

    // Free memory allocated by any libER allocator,
    // DLKR::DLBackAllocator or some _malloc_base implementation
    // Since libER replaces ELDEN RING allocators globally,
    // any of the above may be passed to its deallocate method
    void deallocate(void* p) override {
        DLKR::DLAllocator* allocator = this->get_allocator_of(p);
        if (allocator == this) {
            // We have the right libER allocator
            size_t data = _block_data(p) ^ LIBER_ALLOC_MAGIC;
            size_t lg2align = static_cast<unsigned char>(data);
            size_t alignment = 1ull << lg2align;
            // Confirm block integrity
            size_t nsize = (_block_size(p) ^ LIBER_ALLOC_MAGIC) - lg2align;
            if (~alignment < nsize)
                std::terminate();
            void* base = _block_base(p, alignment);
            _zero_block_data(p);
            mi_free(base);
            return;
        }
        else if (!allocator) {
            // Try WINAPI HeapFree
            if (p)
                HeapFree(default_heap, 0, _block_pointer(p));
            return;
        }
        allocator->deallocate(p);
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

    void* reallocate_second_aligned(void* p, size_t cb,
        size_t alignment) override {
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

    DLKR::DLAllocator* get_allocator_of(void* p) {
        if (!p)
            return nullptr;
        size_t data = _block_data(p) ^ LIBER_ALLOC_MAGIC;
        auto maybe_align = static_cast<unsigned char>(data);
        // Check if memory was allocated by libER
        // Log2 of alignment can't be greater than 64
        if (maybe_align < 64) {
            auto maybe_alloc =
                reinterpret_cast<liber_internal_allocator*>(data - maybe_align);
            if (maybe_alloc == this)
                return maybe_alloc;
            std::shared_lock lock{ this->all_allocators };
            auto& all_allocators = this->all_allocators.get();
            auto iter = std::find(all_allocators.begin(), all_allocators.end(),
                maybe_alloc);
            if (iter != all_allocators.end())
                return maybe_alloc;
        }
        // Check if memory was allocated by DLBackAllocator
        auto back_allocator = liber::function<"DLKR::DLBackAllocator::get",
            DLBackAllocatorHolder*>::call();
        if (back_allocator->is_on_heap(p))
            return back_allocator->get_allocator();
        // Check if memory could've been allocated by another allocator
        if (!DLSY::is_system_initialized())
            return nullptr;
        auto allocator = liber::function<"DLKR::DLAllocator::get_allocator_of",
            DLKR::DLAllocator*>::call(p);
        // Could still have been allocated by a replaced system allocator
        std::shared_lock lock{ this->all_allocators };
        auto& all_allocators = this->all_allocators.get();
        auto iter = std::find(all_allocators.begin(), all_allocators.end(),
            allocator);
        if (iter == all_allocators.end())
            return allocator;
        return nullptr;
    }

private:
    using allocators_resource_type =
        WinTypes::NamedResource<std::vector<liber_internal_allocator*>>;

    allocators_resource_type all_allocators;

    static void _adjust_alignment(size_t& alignment) {
        alignment = alignment > 16 ? alignment : 16;
    }

    static void _adjust_size(size_t& size, size_t alignment) {
        size = (size + alignment * 2 - 1) & -static_cast<ptrdiff_t>(alignment);
    }

    void _adjust_block_and_encode(void*& p, size_t size, size_t alignment) {
        // Move the pointer forward to get space for metadata
        p = reinterpret_cast<void*>(reinterpret_cast<uintptr_t>(p) + alignment);
        // XOR both the pointer and size with a magic number
        // OR log2 of the alignment. Used for integrity checks
        // and as a means of storing metadata
        size_t encoded = LIBER_ALLOC_MAGIC | std::countr_zero(alignment);
        _block_data(p) = reinterpret_cast<uintptr_t>(this) ^ encoded;
        _block_size(p) = -static_cast<ptrdiff_t>(size) ^ encoded;
    }

    static uintptr_t& _block_data(void* p) {
        return reinterpret_cast<uintptr_t*>(p)[-1];
    }

    static size_t& _block_size(void* p) {
        return reinterpret_cast<size_t*>(p)[-2];
    }

    static void*& _block_pointer(void* p) {
        return reinterpret_cast<void**>(p)[-1];
    }

    static void* _block_base(void* p, size_t alignment) {
        return reinterpret_cast<void*>(
            reinterpret_cast<uintptr_t>(p) - alignment);
    }

    static void _zero_block_data(void* p) {
        // Memory should be already 16 byte aligned
        // as per ELDEN RING's memory alignment requirements.
        _mm_store_si128(reinterpret_cast<__m128i*>(p) - 1, _mm_setzero_si128());
    }
} default_allocator;

static_assert(alignof(liber_internal_allocator) == (1 << CHAR_BIT));

allocator_base<from::default_allocator_tag>::allocator_base() noexcept
    : allocator(&default_allocator) {}

DLKR::DLAllocator&
allocator_base<from::default_empty_base_allocator_tag>::get_allocator()
    const noexcept {
    return default_allocator;
}
