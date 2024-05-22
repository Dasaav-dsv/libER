#include <detail/executable_allocator.hpp>
#include <detail/singleton.hpp>
#include <detail/windows.inl>
#include <fd4/detail/fd4_task.hpp>

#include <algorithm>
#include <memory>
#include <utility>

using namespace from;

LIBER_SINGLETON_INSTANCE(FD4::FD4TaskManager);

using namespace from::FD4;

void from::FD4::hook_step_array(std::pair<void*, const wchar_t*>*& array, void* hook,
    int index, int array_size) {
    struct hook_type {
        // clang-format off
        unsigned char code[32] = {
            0x51,                               // push rcx
            0x52,                               // push rdx
            0x48, 0x83, 0xEC, 0x28,             // sub rsp,28
            0xFF, 0x15, 0x14, 0x00, 0x00, 0x00, // call [hook]
            0x48, 0x83, 0xC4, 0x28,             // add rsp,28
            0x5A,                               // pop rdx
            0x59,                               // pop rcx
            0xFF, 0x25, 0x10, 0x00, 0x00, 0x00, // jmp [hooked]
            0xCC, 0xCC, 0xCC, 0xCC,
            0xCC, 0xCC, 0xCC, 0xCC
        };
        // clang-format on
        void* hook = nullptr;
        void* hooked = nullptr;
    };
    using allocator_type = liber::liber_executable_allocator<hook_type>;
    allocator_type allocator;
    auto new_hook = allocator.allocate(1);
    std::allocator_traits<allocator_type>::construct(allocator, new_hook);
    new_hook->hook = hook;
    auto new_array = new std::pair<void*, const wchar_t*>[array_size];
    bool success = false;
    do {
        MemoryBarrier();
        auto overwritten_array = array;
        std::copy_n(overwritten_array, array_size, new_array);
        new_hook->hooked = std::exchange(new_array[index].first, (void*)new_hook);
        void* result = InterlockedCompareExchangePointer((void**)&array,
            (void*)new_array, (void*)overwritten_array);
        success = reinterpret_cast<void*>(overwritten_array) == result;
    } while (!success);
}

// Anchor vtables:
FD4TaskBase::~FD4TaskBase() = default;
FD4StepBaseInterface::~FD4StepBaseInterface() = default;
