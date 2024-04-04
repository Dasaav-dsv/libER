#pragma once

#include <detail/preprocessor.hpp>
#include <fd4/detail/singleton.hpp>

namespace from {
// Dantelion system
namespace DLSY {
// Lock until main ELDEN RING system resources
// are initialized, or time runs out. Initialization
// is performed by the game's main thread, post-entry.
// Returns true on success, false on timeout.
// Timeout can be -1 (indefinite wait)
//
// DO NOT call this function from a thread
// that the game's main thread may wait on.
// ^^^ POTENTIAL DEADLOCK vvv
// DO NOT CALL IT FROM DLLMAIN
//
bool wait_for_system(int timeout) noexcept;

// A singleton that deals with locale
// and stdio. Seldom used.
class DLRuntimeImpl {
public:
    FD4_SINGLETON_CLASS(DLRuntimeImpl);

    virtual ~DLRuntimeImpl() LIBER_INTERFACE_ONLY;
};
} // namespace DLSY
} // namespace from