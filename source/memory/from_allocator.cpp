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
// Implements all necessary methods
// Uses C allocation functions (needs _msize)
// Models DLKRD::HeapAllocator<DLKR::Win32RuntimeHeapImpl>
static class alignas(1 << CHAR_BIT) liber_internal_allocator
    : public DLKR::DLAllocator {
public:
    liber_internal_allocator()
        : main_allocator(this), other_allocators(LIBER_MY_ALLOCATORS_RESOURCE) {
        mi_option_set(mi_option_purge_delay, 0);
        {
            WinTypes::NamedMutex mutex{ LIBER_SINGLETON_OVERRIDE_MUTEX };
            std::scoped_lock lock{ mutex };
            CS::CSMemory*& pcsmem = *reinterpret_cast<CS::CSMemory**>(
                liber::symbol<"CS::CSMemory::instance">::get());
            if (!pcsmem) pcsmem = new CS::CSMemory();
            liber_internal_allocator** sysalloc =
                reinterpret_cast<liber_internal_allocator**>(
                    liber::symbol<"DLKR::DLAllocator::SYSTEM">::get());
            if (InterlockedCompareExchangePointer(
                    (void**)sysalloc, (void*)this, nullptr))
                this->main_allocator = *sysalloc;
        }
        if (this->main_allocator != this) {
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

    void* _get_free_bin() override {
        return nullptr;
    }

    size_t heap_allocation_count() override {
        return 0;
    }

    size_t msize(void* p) override {
        if (!p) return 0;
        size_t data = _block_data(p) ^ LIBER_ALLOC_MAGIC;
        auto maybe_alloc =
            reinterpret_cast<liber_internal_allocator*>(data & ~0xFF);
        auto maybe_align = static_cast<unsigned char>(data);
        if (maybe_align < 64) {
            if (maybe_alloc == this) [[likely]] {
                size_t offset = 1ull << maybe_align;
                void* base = _block_base(p, offset);
                return mi_usable_size(base) - offset;
            } else if (maybe_alloc = this->main_allocator) {
                return this->main_allocator->_msize_unchecked(
                    p, 1ull << maybe_align);
            }
        }
        auto dl_back_allocator = reinterpret_cast<DLKR::DLAllocator*>(
            liber::function<"DLKR::DLBackAllocator::get",
                DLKR::DLAllocator*>::call());
        if (reinterpret_cast<void**>(dl_back_allocator)[0] <= p &&
            reinterpret_cast<void**>(dl_back_allocator)[1] > p) {
            return dl_back_allocator[4].msize(p);
        }
        if (maybe_align < 64) {
            std::shared_lock lock{ this->other_allocators };
            auto& other_allocators = this->other_allocators.get();
            auto iter = std::find(
                other_allocators.begin(), other_allocators.end(), maybe_alloc);
            if (iter != other_allocators.end()) {
                return (*iter)->_msize_unchecked(p, 1ull << maybe_align);
            }
        }
        return HeapSize(default_heap, 0, _block_pointer(p));
    }

    void* allocate(size_t cb) override {
        return this->allocate_aligned(cb, 16);
    }

    void* allocate_aligned(size_t cb, size_t alignment) override {
        _adjust_alignment(alignment);
        _adjust_size(cb, alignment);
        void* alloc = mi_malloc_aligned(cb, alignment);
        if (alloc) _adjust_block_and_encode(alloc, alignment);
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

    void deallocate(void* p) override {
        if (!p) return;
        size_t data = _block_data(p) ^ LIBER_ALLOC_MAGIC;
        auto maybe_alloc =
            reinterpret_cast<liber_internal_allocator*>(data & ~0xFF);
        auto maybe_align = static_cast<unsigned char>(data);
        if (maybe_align < 64) {
            if (maybe_alloc == this) [[likely]] {
                void* base = _block_base(p, 1ull << maybe_align);
                mi_free(base);
                return;
            } else if (maybe_alloc == this->main_allocator) {
                this->main_allocator->_deallocate_unchecked(
                    p, 1ull << maybe_align);
                return;
            }
        }
        auto dl_back_allocator = reinterpret_cast<DLKR::DLAllocator*>(
            liber::function<"DLKR::DLBackAllocator::get",
                DLKR::DLAllocator*>::call());
        if (reinterpret_cast<void**>(dl_back_allocator)[0] <= p &&
            reinterpret_cast<void**>(dl_back_allocator)[1] > p) {
            dl_back_allocator[4].deallocate(p);
            return;
        }
        if (maybe_align < 64) {
            std::shared_lock lock{ this->other_allocators };
            auto& other_allocators = this->other_allocators.get();
            auto iter = std::find(
                other_allocators.begin(), other_allocators.end(), maybe_alloc);
            if (iter != other_allocators.end()) {
                (*iter)->_deallocate_unchecked(p, 1ull << maybe_align);
                return;
            }
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

private:
    using allocators_resource_type =
        WinTypes::NamedResource<std::vector<liber_internal_allocator*>>;

    liber_internal_allocator* main_allocator;
    allocators_resource_type other_allocators;

    virtual void _deallocate_unchecked(void* p, size_t alignment) {
        void* base = _block_base(p, alignment);
        mi_free(base);
    }

    virtual size_t _msize_unchecked(void* p, size_t alignment) {
        void* base = _block_base(p, alignment);
        return mi_usable_size(base) - alignment;
    }

    static void _adjust_alignment(size_t& alignment) {
        alignment = alignment > 8 ? alignment : 8;
    }

    static void _adjust_size(size_t& size, size_t alignment) {
        size = (size + alignment * 2 - 1) & -static_cast<ptrdiff_t>(alignment);
    }

    void _adjust_block_and_encode(void*& p, size_t alignment) {
        size_t alignment_minus_one = alignment - 1;
        p = reinterpret_cast<void*>(reinterpret_cast<uintptr_t>(p) + alignment);
        _block_data(p) = reinterpret_cast<uintptr_t>(this) ^ LIBER_ALLOC_MAGIC |
            std::countr_zero(alignment);
    }

    static uintptr_t& _block_data(void* p) {
        return reinterpret_cast<uintptr_t*>(p)[-1];
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
