#pragma once

#include <dantelion2/utility.h>

// Part of namespace DLKR and DLKRD
#include <memory/from_allocator.h>

namespace from {
    // Windows Kernel runtime functionality;
    // mutexes, signals, allocators etc.
    namespace DLKR {
        // Non-copyable dummy (empty) synchronization object
        class DLDummySyncObject : public DLUT::DLNonCopyable {};

        // [[libER unimplemented]] Rarely used, size 0x60 bytes
        class DLFastSmallObjectAllocator : public DLUT::DLNonCopyable {};
    }
}