// Base include file for all examples
// Contains console, thread and dll functionality
#pragma once

#define WIN32_LEAN_AND_MEAN
#include <Windows.h>

#include <cstdio>
#include <iostream>

// Open the console and redirect output
// Useful for writing to the console from inside ELDEN RING.
// Optionally, do not flush console unless explicitly flushed
// with std::endl or std::cout::flush
inline void con_allocate(bool no_flush) noexcept {
    AllocConsole();
    FILE* out;
    freopen_s(&out, "CON", "w", stdout);
    if (no_flush) {
        std::ios_base::sync_with_stdio(false);
        std::setvbuf(stdout, nullptr, _IOFBF, BUFSIZ);
    }
}

inline void con_noflush() noexcept {}

// Declaration of a dll_example function
// that will be called from a thread created in DllMain.
// It must be defined in examples that include example_base.hpp
void example_base();

// DllMain - will be used as the test dll's entry point
BOOL DllMain(HINSTANCE hinstDll, DWORD fdwReason, LPVOID lpvReserved) {
    if (fdwReason == DLL_PROCESS_ATTACH)
        CreateThread(NULL, 0, (LPTHREAD_START_ROUTINE)&example_base, NULL, 0,
            NULL);
    return TRUE;
}
