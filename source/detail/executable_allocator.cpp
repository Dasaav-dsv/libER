#include <NamedResource.h>
#include <bit>
#include <detail/executable_allocator.hpp>
#include <detail/windows.inl>
#include <mutex>

using namespace liber;

struct allocator_data {
    static constexpr size_t min_size = 4096 * 16;

    void* memory_begin;
    uintptr_t memory_end;
};

void* liber::allocate_executable_memory(size_t size, size_t alignment) {
    alignment = std::bit_ceil(alignment);
    alignment = alignment < 16 ? 16 : alignment;
    size_t align_helper = alignment - 1;
    size = (size + align_helper) & ~align_helper;
    static WinTypes::NamedResource<allocator_data> allocator{
        LIBER_EXECUTABLE_ALLOCATOR_RESOURCE
    };
    std::scoped_lock lock{ allocator };
    uintptr_t alloc_begin =
        reinterpret_cast<uintptr_t>(allocator->memory_begin);
    alloc_begin = (alloc_begin + align_helper) & ~align_helper;
    uintptr_t alloc_end = alloc_begin + size;
    if (alloc_end > allocator->memory_end) {
        size_t alloc_size =
            size > allocator_data::min_size ? size : allocator_data::min_size;
        alloc_size += alignment;
        void* alloc = VirtualAlloc(nullptr, alloc_size,
            MEM_COMMIT | MEM_RESERVE, PAGE_EXECUTE_READWRITE);
        alloc_begin = reinterpret_cast<uintptr_t>(alloc);
        alloc_begin = (alloc_begin + align_helper) & ~align_helper;
        alloc_end = alloc_begin + size;
        if (size > allocator_data::min_size)
            return reinterpret_cast<void*>(alloc_begin);
        allocator->memory_end = reinterpret_cast<uintptr_t>(alloc) + alloc_size;
    }
    allocator->memory_begin = reinterpret_cast<void*>(alloc_end);
    return reinterpret_cast<void*>(alloc_begin);
}
