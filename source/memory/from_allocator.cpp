#include <memory/from_allocator.hpp>

#include <dantelion2/kernel_runtime.hpp>
#include <dantelion2/system.hpp>
#include <detail/functions.hpp>
#include <detail/windows.inl>

#include <limits>

using namespace from;

class Win32RuntimeHeapAllocator : public DLKR::DLAllocator {
public:
    Win32RuntimeHeapAllocator() noexcept
        : h_crt(LoadLibraryW(L"ucrtbase.dll")),
          crt_aligned_malloc(reinterpret_cast<decltype(crt_aligned_malloc)>(
              GetProcAddress(h_crt, "_aligned_malloc"))),
          crt_aligned_realloc(reinterpret_cast<decltype(crt_aligned_realloc)>(
              GetProcAddress(h_crt, "_aligned_realloc"))),
          crt_aligned_free(reinterpret_cast<decltype(crt_aligned_free)>(
              GetProcAddress(h_crt, "_aligned_free"))) {}

    virtual ~Win32RuntimeHeapAllocator() = default;

    int get_allocator_id() override {
        return 0x401;
    }

    int& get_heap_flags(int& flags) override {
        flags = 0b00111011;
        return flags;
    }

    size_t get_heap_capacity() override {
        return std::numeric_limits<size_t>::max();
    }

    size_t get_heap_size() override {
        return 0;
    }

    size_t get_heap_backing_capacity() override {
        return std::numeric_limits<size_t>::max();
    }

    size_t get_heap_allocation_count() override {
        return 0;
    }

    size_t msize(void* p) override {
        return 0;
    }

    void* allocate(size_t cb) override {
        return crt_aligned_malloc(cb, 0x10);
    }

    void* allocate_aligned(size_t cb, size_t alignment) override {
        return crt_aligned_malloc(cb, alignment > 0x10 ? alignment : 0x10);
    }

    void* reallocate(void* p, size_t cb) override {
        return crt_aligned_realloc(p, cb, 0x10);
    }

    void* reallocate_aligned(void* p, size_t cb, size_t alignment) override {
        return crt_aligned_realloc(p, cb, alignment > 0x10 ? alignment : 0x10);
    }

    void deallocate(void* p) override {
        return crt_aligned_free(p);
    }

    bool check_owned(void* p) override {
        return false;
    }

    void lock() override {
        this->mutex.lock();
    }

    void unlock() override {
        this->mutex.unlock();
    }

    void* get_block(void* p) override {
        return nullptr;
    }

private:
    DLKR::DLAllocator* base = this;
    DLKR::DLPlainLightMutex mutex;

    const HMODULE h_crt;
    decltype(_aligned_malloc)* const crt_aligned_malloc;
    decltype(_aligned_realloc)* const crt_aligned_realloc;
    decltype(_aligned_free)* const crt_aligned_free;
};

DLKR::DLAllocator& DLKR::get_dlallocator_of(const void* p) noexcept {
    if (!DLSY::is_system_initialized())
        return DLKR::get_base_allocator();
    return *liber::function<"DLKR::DLAllocator::get_dlallocator_of",
        DLKR::DLAllocator*>::call(p);
}

DLKR::DLAllocator& DLKR::get_base_allocator() noexcept {
    static Win32RuntimeHeapAllocator allocator;
    return allocator;
}
