#include <dantelion2/system.hpp>
#include <detail/singleton.hpp>

#include <detail/windows.inl>

using namespace from;

// LIBER_SINGLETON_INSTANCE(DLSY::DLRuntimeImpl);

bool DLSY::wait_for_system(int timeout) noexcept {
    auto counter = reinterpret_cast<volatile int*>(
        liber::symbol<"GLOBAL_init_flip_counter">::get());
    if (timeout >= 0) {
        unsigned long long wait = GetTickCount64() + timeout;
        while (*counter == 0) {
            if (GetTickCount64() > wait)
                return false;
            YieldProcessor();
        }
    }
    else {
        while (*counter == 0) YieldProcessor();
    }
    return true;
}

bool DLSY::is_system_initialized() noexcept {
    auto counter = reinterpret_cast<int*>(
        liber::symbol<"GLOBAL_init_flip_counter">::get());
    return *counter;
}
