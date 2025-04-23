#include <dantelion2/system.hpp>

#include <detail/windows.inl>

using namespace from;

bool DLSY::wait_for_system(int timeout) noexcept {
    auto& counter =
        liber::symbol<"GLOBAL_init_flip_counter">::as<volatile int>();
    if (timeout >= 0) {
        unsigned long long wait = GetTickCount64() + timeout;
        while (counter == 0) {
            if (GetTickCount64() > wait)
                return false;
            YieldProcessor();
        }
    }
    else {
        while (counter == 0) YieldProcessor();
    }
    return true;
}

bool DLSY::is_system_initialized() noexcept {
    return liber::symbol<"GLOBAL_init_flip_counter">::as<int>();
}
