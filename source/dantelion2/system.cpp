#include <coresystem/window.hpp>
#include <dantelion2/system.hpp>

#include <detail/symbols.hpp>
#include <detail/windows.inl>

#include <atomic>

using namespace from;

using CSWindowLoop = bool (*)(CS::CSWindow*);

std::atomic<CSWindowLoop> original_cswindow_update = nullptr;

HANDLE get_system_init_event() {
    static HANDLE system_init_event = CreateEventW(NULL, TRUE, FALSE, NULL);
    return system_init_event;
}

bool wait_for_system_init_event(unsigned int timeout) {
    auto system_init_event = get_system_init_event();

    return system_init_event != NULL
        && WaitForSingleObject(system_init_event, timeout) == WAIT_OBJECT_0;
}

void set_system_init_event() {
    auto system_init_event = get_system_init_event();

    if (system_init_event != NULL) {
        SetEvent(system_init_event);
    }
}

CSWindowLoop* get_cswindow_loop_ptr() {
    auto cswindow_loop_ptr = &liber::symbol<
        "CS::CSWindowImp::vftable::window_loop">::as<CSWindowLoop>();

    DWORD _old_protect;

    VirtualProtect((LPVOID)cswindow_loop_ptr, sizeof(LPVOID), PAGE_READWRITE,
        &_old_protect);

    return cswindow_loop_ptr;
}

bool cswindow_update_callback(CS::CSWindow* instance) {
    auto original = original_cswindow_update.load(std::memory_order_relaxed);

    if (original != nullptr) {
        *get_cswindow_loop_ptr() = original;

        set_system_init_event();

        return original(instance);
    }

    return false;
}

bool DLSY::wait_for_system(unsigned int timeout) noexcept {
    if (is_system_initialized()) {
        return true;
    } else if (timeout == 0) {
        return false;
    }

    auto cswindow_loop_ptr = get_cswindow_loop_ptr();
    auto desired = *cswindow_loop_ptr;

    CSWindowLoop expected = nullptr;

    if (desired != nullptr
        && !original_cswindow_update.compare_exchange_strong(expected,
            desired)) {
        return wait_for_system_init_event(timeout);
    }

    while (true) {
        expected = *cswindow_loop_ptr;
        original_cswindow_update.store(expected, std::memory_order_relaxed);

        if ((PVOID)expected
            == InterlockedCompareExchangePointer((PVOID*)cswindow_loop_ptr,
                (PVOID)&cswindow_update_callback, (PVOID)expected)) {
            break;
        }
    }

    return wait_for_system_init_event(timeout);
}

bool DLSY::is_system_initialized() noexcept {
    return CS::CSWindow::instance().has_reference();
}
