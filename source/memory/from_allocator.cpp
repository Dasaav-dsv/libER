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
    liber_internal_allocator() {
        mi_option_set(mi_option_purge_delay, 0);
        {
            WinTypes::NamedMutex mutex{ LIBER_SINGLETON_OVERRIDE_MUTEX };
            std::scoped_lock lock{ mutex };
            CS::CSMemory*& pcsmem = *reinterpret_cast<CS::CSMemory**>(
                liber::symbol<"CS::CSMemory::instance">::get());
            if (!pcsmem) pcsmem = new CS::CSMemory();
            DLKR::DLAllocator*& sysalloc =
                *reinterpret_cast<DLKR::DLAllocator**>(
                    liber::symbol<"DLKR::DLAllocator::SYSTEM">::get());
            if (!sysalloc)
                std::construct_at(
                    reinterpret_cast<from::allocator<void>*>(&sysalloc));
        }
        {
            std::scoped_lock lock{ this->allocators };
            this->allocators->push_back(this);
        }
    }

    virtual ~liber_internal_allocator() {
        std::scoped_lock lock{ this->allocators };
        std::erase(this->allocators.get(), this);
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
            } else {
                std::shared_lock lock{ this->allocators };
                auto& allocators = this->allocators.get();
                auto iter = std::find(
                    allocators.begin(), allocators.end(), maybe_alloc);
                if (iter != allocators.end()) return (*iter)->msize(p);
            }
        }
        auto dl_back_allocator = reinterpret_cast<DLKR::DLAllocator*>(
            liber::function<"DLKR::DLBackAllocator::get",
                DLKR::DLAllocator*>::call());
        if (reinterpret_cast<void**>(dl_back_allocator)[0] <= p &&
            reinterpret_cast<void**>(dl_back_allocator)[1] > p) {
            return dl_back_allocator[4].msize(p);
        }
        return HeapSize(default_heap, 0, _block_pointer(p));
    }

    void* allocate(size_t cb) override {
        return this->allocate_aligned(cb, 8);
    }

    void* allocate_aligned(size_t cb, size_t alignment) override {
        _adjust_alignment(alignment);
        _adjust_size(cb, alignment);
        void* alloc = mi_malloc_aligned(cb, alignment);
        if (alloc) _adjust_block_and_encode(alloc, alignment);
        return alloc;
    }

    void* reallocate(void* p, size_t cb) override {
        return this->reallocate_aligned(p, cb, 8);
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
            } else {
                std::shared_lock lock{ this->allocators };
                auto& allocators = this->allocators.get();
                auto iter = std::find(
                    allocators.begin(), allocators.end(), maybe_alloc);
                if (iter != allocators.end()) {
                    (*iter)->deallocate(p);
                    return;
                }
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
    using res_type =
        WinTypes::NamedResource<std::vector<liber_internal_allocator*>>;

    res_type allocators{ LIBER_MY_ALLOCATORS_RESOURCE };

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
