#include <base_address.h>
#include <win.inl>

static void* base_address = nullptr;

namespace liber {
    void* base_address() noexcept {
        void* result = ::base_address;
        if (!result) [[unlikely]]  {
            // GetModuleHandle(NULL) returns a pseudohandle
            // (which is a module's base address) of the calling process
            result = (void*)GetModuleHandle(NULL);
            ::base_address = result;
        }
        return result;
    }
}