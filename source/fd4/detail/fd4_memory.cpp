#include <ProtectMemory.h>
#include <detail/symbols.hpp>
#include <detail/windows.inl>
#include <fd4/detail/fd4_memory.hpp>
#include <memory/from_allocator.hpp>

#include <mutex>
#include <utility>

using namespace from::FD4;

struct allocator_range {
    from::allocator<void> allocator;
    void* range_begin;
    void* range_end;
};

// Fix a use after free in a CS::GaitemSelectDialog callback
void patch_gaitem_dialog_vtable(void* vtable) {
    auto& method = reinterpret_cast<int* (**)(void*, int*)>(vtable)[3];
    WinTypes::ProtectMemory protect{ method, PAGE_READWRITE };
    std::scoped_lock lock{ protect };
    // This method reaches into freed memory in a destructor,
    // so it's overriden by libER
    method = [](void*, int* out) {
        *out = 0;
        return out;
    };
}

void FD4MemoryManager::init_allocators() {
    auto allocator_table = reinterpret_cast<from::allocator<void>*>(
        liber::symbol<"FD4::FD4MemoryManager::GLOBAL_allocator_table">::get());
    for (int i = 0; i < 21; ++i) std::construct_at(allocator_table + i);
    int& allocator_ranges_count = *reinterpret_cast<int*>(liber::symbol<
        "FD4::FD4MemoryManager::GLOBAL_allocator_ranges_count">::get());
    allocator_ranges_count = 1;
    auto& allocator_ranges_1 = *reinterpret_cast<allocator_range*>(
        liber::symbol<"FD4::FD4MemoryManager::GLOBAL_allocator_ranges">::get());
    std::construct_at(&allocator_ranges_1.allocator);
    allocator_ranges_1.range_begin = nullptr;
    allocator_ranges_1.range_end = (void*)(1ull << 47);
    patch_gaitem_dialog_vtable(
        liber::symbol<"CS::DepositoryDialog::vtable">::get());
    patch_gaitem_dialog_vtable(
        liber::symbol<"CS::GaitemSelectDialog::vtable">::get());
    patch_gaitem_dialog_vtable(
        liber::symbol<"CS::InventoryDialog::vtable">::get());
    patch_gaitem_dialog_vtable(
        liber::symbol<"CS::BaseChangeDstSelectDialog::vtable">::get());
    patch_gaitem_dialog_vtable(
        liber::symbol<"CS::ExchangeShopDialog::vtable">::get());
    patch_gaitem_dialog_vtable(liber::symbol<"CS::ShopDialog::vtable">::get());
}
