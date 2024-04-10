#include <coresystem/memory.hpp>
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
#include <memory>
#include <mutex>
#include <shared_mutex>
#include <vector>

#define LIBER_ALLOC_MAGIC 0x43'4F'4C'4C'41'52'45'40 // @ERALLOC

using namespace from;

static HANDLE default_heap = GetProcessHeap();

// Default internal libER allocator based on mimalloc
// Implements all necessary DLAllocator methods,
// overrides the default allocators used by ELDEN RING
// Tries to be universal with respect to allocation
// strategies left after
static class alignas(1 << CHAR_BIT) liber_internal_allocator
    : public DLKR::DLAllocator {
public:
    liber_internal_allocator()
        : main_allocator(this), other_allocators(LIBER_MY_ALLOCATORS_RESOURCE) {
        mi_option_set(mi_option_purge_delay, 0);
        {
            WinTypes::NamedMutex mutex{ LIBER_SINGLETON_OVERRIDE_MUTEX };
            std::scoped_lock lock{ mutex };
            // Replace the CSMemory singleton responsible
            // for setting up allocators
            // Check fd4/detail/fd4_memory and
            // coresystem/memory
            CS::CSMemory*& csmem = *reinterpret_cast<CS::CSMemory**>(
                liber::symbol<"CS::CSMemory::instance">::get());
            if (!csmem) csmem = new CS::CSMemory();
            liber_internal_allocator** sysalloc =
                reinterpret_cast<liber_internal_allocator**>(
                    liber::symbol<"DLKR::DLAllocator::SYSTEM">::get());
            // Replace the system allocator
            // If we got here first, this is now the
            // "main" allocator, otherwise whatever is
            // already there is "main"
            if (InterlockedCompareExchangePointer(
                    (void**)sysalloc, (void*)this, nullptr))
                this->main_allocator = *sysalloc;
        }
        if (this->main_allocator != this) {
            // Keep a list of libER allocator instances
            // that did not replace the "main" allocator
            std::scoped_lock lock{ this->other_allocators };
            this->other_allocators->push_back(this);
        }
    }

    virtual ~liber_internal_allocator() {
        std::scoped_lock lock{ this->other_allocators };
        std::erase(this->other_allocators.get(), this);
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
        if (!p) return 0;
        size_t data = _block_data(p) ^ LIBER_ALLOC_MAGIC;
        auto maybe_alloc =
            reinterpret_cast<liber_internal_allocator*>(data & ~0xFF);
        auto maybe_align = static_cast<unsigned char>(data);
        if (maybe_alloc == this || maybe_alloc == this->main_allocator) {
            // Undo the encoding and confirm integrity
            size_t nsize = (_block_size(p) ^ LIBER_ALLOC_MAGIC) - maybe_align;
            size_t nalign = ~0ull << maybe_align;
            if (maybe_align >= 64 || nalign < nsize) std::terminate();
            return nalign - static_cast<ptrdiff_t>(nsize);
        }
        auto dl_back_allocator = reinterpret_cast<DLKR::DLAllocator*>(
            liber::function<"DLKR::DLBackAllocator::get",
                DLKR::DLAllocator*>::call());
        // Check if memory is in the allocated range
        if (reinterpret_cast<void**>(dl_back_allocator)[0] <= p &&
            reinterpret_cast<void**>(dl_back_allocator)[1] > p) {
            // Reach into the actual allocator instance and msize
            return dl_back_allocator[4].msize(p);
        }
        if (maybe_align < 64) {
            std::shared_lock lock{ this->other_allocators };
            auto& other_allocators = this->other_allocators.get();
            auto iter = std::find(
                other_allocators.begin(), other_allocators.end(), maybe_alloc);
            if (iter != other_allocators.end()) {
                size_t nsize =
                    (_block_size(p) ^ LIBER_ALLOC_MAGIC) - maybe_align;
                size_t nalign = ~0ull << maybe_align;
                if (maybe_align >= 64 || nalign < nsize) std::terminate();
                return nalign - static_cast<ptrdiff_t>(nsize);
            }
        }
        // All previous checks failed, try WINAPI HeapSize
        return HeapSize(default_heap, 0, _block_pointer(p));
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
        if (alloc) _adjust_block_and_encode(alloc, cb, alignment);
        return alloc;
    }

    void* reallocate(void* p, size_t cb) override {
        return this->reallocate_aligned(p, cb, 16);
    }

    void* reallocate_aligned(void* p, size_t cb, size_t alignment) override {
        void* alloc = cb ? this->allocate_aligned(cb, alignment) : nullptr;
        if (p) {
            if (alloc) std::memcpy(alloc, p, this->msize(p));
            this->deallocate(p);
        }
        return alloc;
    }

    // Free memory allocated by any libER allocator,
    // DLKR::DLBackAllocator or some _malloc_base implementation
    // Since libER replaces ELDEN RING allocators globally,
    // any of the above may be passed to its deallocate method
    void deallocate(void* p) override {
        if (!p) return;
        size_t data = _block_data(p) ^ LIBER_ALLOC_MAGIC;
        auto maybe_alloc =
            reinterpret_cast<liber_internal_allocator*>(data & ~0xFF);
        auto maybe_align = static_cast<unsigned char>(data);
        if (maybe_alloc == this || maybe_alloc == this->main_allocator) {
            // Undo the encoding and confirm integrity
            size_t nsize = (_block_size(p) ^ LIBER_ALLOC_MAGIC) - maybe_align;
            size_t nalign = ~0ull << maybe_align;
            // Alignment can't be greater than 64
            // Size is a multiple of the alignment
            // In an unsigned comparison, -alignment >= -nsize ~ 1
            if (maybe_align >= 64 || nalign < nsize) std::terminate();
            if (maybe_alloc == this) {
                void* base = _block_base(p, 1ull << maybe_align);
                mi_free(base);
                return;
            } else {
                // We know this memory belongs to another libER
                // allocator, other checks are not necessary
                this->main_allocator->_deallocate_unchecked(
                    p, 1ull << maybe_align);
                return;
            }
        }
        auto dl_back_allocator = reinterpret_cast<DLKR::DLAllocator*>(
            liber::function<"DLKR::DLBackAllocator::get",
                DLKR::DLAllocator*>::call());
        // Check if memory is in the allocated range
        if (reinterpret_cast<void**>(dl_back_allocator)[0] <= p &&
            reinterpret_cast<void**>(dl_back_allocator)[1] > p) {
            // Reach into the actual allocator instance and msize
            dl_back_allocator[4].deallocate(p);
            return;
        }
        if (maybe_align < 64) {
            std::shared_lock lock{ this->other_allocators };
            auto& other_allocators = this->other_allocators.get();
            auto iter = std::find(
                other_allocators.begin(), other_allocators.end(), maybe_alloc);
            if (iter != other_allocators.end()) {
                size_t nsize =
                    (_block_size(p) ^ LIBER_ALLOC_MAGIC) - maybe_align;
                size_t nalign = ~0ull << maybe_align;
                // See checks above
                if (maybe_align >= 64 || nalign < nsize) std::terminate();
                (*iter)->_deallocate_unchecked(p, 1ull << maybe_align);
                return;
            }
        }
        // All previous checks failed, try WINAPI HeapFree
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

private:
    using allocators_resource_type =
        WinTypes::NamedResource<std::vector<liber_internal_allocator*>>;

    liber_internal_allocator* main_allocator;
    allocators_resource_type other_allocators;

    virtual void _deallocate_unchecked(void* p, size_t alignment) {
        void* base = _block_base(p, alignment);
        mi_free(base);
    }

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
} default_allocator;

static_assert(alignof(liber_internal_allocator) == (1 << CHAR_BIT));

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
