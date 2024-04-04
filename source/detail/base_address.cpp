#include <detail/base_address.hpp>
#include <detail/windows.inl>

using namespace liber;

static void* cached_base_address;

// There is no need for synchronization as
// GetModuleHandle is cheap and thread-safe
void* liber::base_address() noexcept {
    void* result = cached_base_address;
    if (!result) [[unlikely]] {
        // GetModuleHandle(NULL) returns a pseudohandle
        // (which is a module's base address) of the calling process
        result = (void*)GetModuleHandle(NULL);
        cached_base_address = result;
    }
    return result;
}

void* liber::base_offset(int offset) noexcept {
    void* base = base_address();
    return (void*)(reinterpret_cast<char*>(base) + offset);
}
