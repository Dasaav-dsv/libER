#include <detail/symbols.hpp>
#include <fd4/detail/fd4_memory.hpp>
#include <memory/from_allocator.hpp>

#include <utility>

using namespace from::FD4;

struct allocator_range {
    from::allocator<void> allocator;
    void* range_begin;
    void* range_end;
};

void FD4MemoryManager::init_allocators() {
    auto allocator_table = reinterpret_cast<from::allocator<void>*>(
        liber::symbol<"FD4::FD4MemoryManager::GLOBAL_allocator_table">::get());
    for (int i = 0; i < 20; ++i) std::construct_at(allocator_table + i);
    int& allocator_ranges_count = *reinterpret_cast<int*>(liber::symbol<
        "FD4::FD4MemoryManager::GLOBAL_allocator_ranges_count">::get());
    allocator_ranges_count = 1;
    auto& allocator_ranges_1 = *reinterpret_cast<allocator_range*>(
        liber::symbol<"FD4::FD4MemoryManager::GLOBAL_allocator_ranges">::get());
    std::construct_at(&allocator_ranges_1.allocator);
    allocator_ranges_1.range_begin = nullptr;
    allocator_ranges_1.range_end = (void*)(1ull << 47);
}
