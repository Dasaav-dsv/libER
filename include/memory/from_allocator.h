#pragma once

#include <cstddef>
#include <cstdint>
#include <utility>
#include <memory>
#include <bitset>

// For std::terminate
#include <stdexcept>

/*
* DLKR::DLAllocator is the common allocator interface
* used by ER allocators, which are statically allocated
* in the binary and referenced by stateless proxy objects.
* from::allocator<T> provides a proxy object that fulfils Allocator
* completeness requirements and uses the DLKR::DLAllocator interface.
* Due to implementing _msize (actively used, see CS::CSGrassAllocator)
* the default allocator proxied by from::allocator
* cannot be based on std::allocator<T>.
*/

namespace from {
    namespace DLKR {
        // Common ER allocator interface
        // Can support two allocators at once (for container allocation)
        class DLAllocator {
        public:
            virtual ~DLAllocator() = default;

            // Unique allocator id sometimes used for comparing allocators
            virtual int _allocator_id() { return -1; }

            // Unknown function which is defined in the interface, never overriden or used
            virtual int _unused() { return -1; }

            // Allocator and heap compatibility flags.
            // 0x20 indicates thread safety (most commonly checked)
            virtual std::bitset<8> heap_flags() { return 0x73; }

            // The total capacity of the heap, in bytes
            virtual size_t heap_capacity() = 0;

            // How many bytes out of the total capacity are allocated
            virtual size_t heap_size() = 0;

            // Internal method, returns a free allocation bin hint
            virtual void* _get_free_bin() = 0;

            // How many objects are allocated
            virtual size_t heap_allocation_count() = 0;

            // See _msize
            virtual size_t msize(void* p) = 0;

            // Allocate count bytes, an alignment of at least 16 bytes is expected by ER
            virtual void* allocate(size_t cb) = 0;
            
            // Allocate count bytes with an alignment of 16 bytes or more
            virtual void* allocate_aligned(size_t cb, size_t alignment) = 0;

            // Reallocate memory, only valid for trivial types
            virtual void* reallocate(void* p, size_t cb) = 0;

            // Reallocate memory with alignment, only valid for trivial types
            virtual void* reallocate_aligned(void* p, size_t cb, size_t alignment) = 0;

            // Free memory
            virtual void deallocate(void* p) = 0;

            // Unknown method, isn't supported by any class that implements DLKR::DLAllocator
            virtual void _unsupported() { std::terminate(); }

            // Allocate count bytes, an alignment of at least 16 bytes is expected by ER
            // Use the second allocator if it is bound, first if not
            virtual void* allocate_second(size_t cb) = 0;
            
            // Allocate count bytes with an alignment of 16 bytes or more
            // Use the second allocator if it is bound, first if not
            virtual void* allocate_second_aligned(size_t cb, size_t alignment) = 0;

            // Reallocate memory, only valid for trivial types
            // Use the second allocator if it is bound, first if not
            virtual void* reallocate_second(void* p, size_t cb) = 0;

            // Reallocate memory with alignment, only valid for trivial types
            // Use the second allocator if it is bound, first if not
            virtual void* reallocate_second_aligned(void* p, size_t cb, size_t alignment) = 0;

            // Free memory
            // Use the second allocator if it is bound, first if not
            virtual void deallocate_second(void* p) = 0;

            // Unknown method, seemingly unused
            virtual bool _unknown_bool() { return false; }

            // Does memory belong to the first bound allocator?
            virtual bool belongs_to_first(void* p) = 0;

            // Does memory belong to the second bound allocator?
            virtual bool belongs_to_second(void* p) = 0;

            // Lock the allocator's mutex (if present and accessible)
            virtual void lock() {}

            // Unlock the allocator's mutex (if present and accessible)
            virtual void unlock() {}

            // Get the memory block that this memory belongs to
            // May panic if this memory isn't owned by this allocator
            virtual void* get_memory_block(void* p) = 0;

            // Get the allocator used to allocate this memory
            static DLAllocator* get_allocator_of(void* p);

            // ER allocator tags
            struct MAIN {};
            struct GFX {};
            struct GFXTEMP {};
            struct INGAME {};
            struct TEMP {};
            struct CORERES {};
            struct MO_WWISE_ISORATION {};
            struct LUA {};
            struct HAVOK {};
            struct MENU {};
            struct DEBUG {};
            struct GFX_SystemShared {};
            struct GFX_GraphicsPrivate {};
        };

        struct DLBackAllocator : public DLAllocator {};
    }

    namespace CS {
        struct CSMoWwiseAllocator : public DLKR::DLAllocator {};
        struct CSNetworkAllocator : public DLKR::DLAllocator {};
    }

    // Default libER allocator that gets embedded
    // in objects as needed for ER ABI compatibility.
    struct default_allocator_tag {};

    // Default libER allocator with an empty base:
    // ELDEN RING may use it instead of explicitly specifying
    // the allocator for an object.
    struct default_empty_base_allocator_tag {};

    template <typename AllocatorTag>
    struct allocator_proxy;

    // The main libER stand-in for ER allocator proxies:
    // Uses the DLKR::DLAllocator interface
    // Fulfils allocator completeness requirements
    template <typename T, typename AllocatorTag = default_allocator_tag>
    class allocator : private allocator_proxy<AllocatorTag> {
        using base_type = allocator_proxy<AllocatorTag>;
        using proxy_type = DLKR::DLAllocator;

        base_type& base() noexcept { return static_cast<base_type&>(*this); }
        const base_type& base() const noexcept { return static_cast<const base_type&>(*this); }

        DLKR::DLAllocator& proxy() { return this->base().get_allocator(); }
        allocator(DLKR::DLAllocator* dl_allocator) noexcept : base_type(dl_allocator) {}
    public:
        using value_type = T;
        using size_type = size_t;
        using difference_type = ptrdiff_t;

        // Allocator is move assigned along with the contents
        using propagate_on_container_move_assignment = std::true_type;

        // Allocator may proxy different stateful allocators
        // Equality checks via operator == are required on assignment
        using is_always_equal = std::false_type;

        allocator() noexcept : base_type() {}

        template <typename U>
        allocator(const allocator<U>& other) noexcept : base_type(other.base()) {}

        // Allocate n instances of uninitialized memory for T
        [[nodiscard]] T* allocate(size_type n) {
            return reinterpret_cast<T*>(this->proxy().allocate_aligned(n * sizeof(T), alignof(T)));
        }

        // Deallocate memory, n is ignored by DLKR::DLAllocator and can be zero
        void deallocate(T* p, size_type n = 0) {
            this->base().get_allocator_of((void*)p).deallocate((void*)p);
        }

        // Get the allocator used to allocate this memory
        static allocator<T, default_allocator_tag> get_allocator_of(T* p) {
            return DLKR::DLAllocator::get_allocator_of(p);
        }

        template <typename T1, typename T2>
        friend bool operator == (const allocator<T1>& lhs, const allocator<T2>& rhs) noexcept;
    };

    template <typename T1, typename T2>
    bool operator == (const allocator<T1>& lhs, const allocator<T2>& rhs) noexcept {
        return std::addressof(lhs.proxy()) == std::addressof(rhs.proxy());
    }

    template <>
    struct allocator_proxy<default_allocator_tag> {
        DLKR::DLAllocator* allocator;

        allocator_proxy() noexcept;

        allocator_proxy(DLKR::DLAllocator* dl_allocator) : allocator(dl_allocator) {}

        DLKR::DLAllocator& get_allocator() noexcept {
            return *this->allocator;
        }

        DLKR::DLAllocator& get_allocator_of(void* p) noexcept {
            return this->get_allocator();
        }
    };

    template <>
    struct allocator_proxy<default_empty_base_allocator_tag> {
        allocator_proxy() noexcept {};

        allocator_proxy(DLKR::DLAllocator* dl_allocator) {}

        DLKR::DLAllocator& get_allocator();
        DLKR::DLAllocator& get_allocator_of(void* p);
    };

#define LIBER_SPECIALIZE_ALLOCATOR_PROXY(NAME)         \
    template <>                                        \
    struct allocator_proxy<NAME> {                     \
        DLKR::DLAllocator& get_allocator();            \
                                                       \
        DLKR::DLAllocator& get_allocator_of(void* p) { \
            return this->get_allocator();              \
        }                                              \
                                                       \
        allocator_proxy(DLKR::DLAllocator*) {}         \
    };

#include "from_allocator.inl"

#undef LIBER_SPECIALIZE_ALLOCATOR_PROXY
}