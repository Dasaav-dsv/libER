#pragma once

#include <detail/liber_preprocessor.hpp>
#include <dantelion2/utility.h>

// Part of namespace DLKR and DLKRD
#include <memory/from_allocator.h>

// Forward declaration
struct _RTL_CRITICAL_SECTION;

namespace from {
    // Windows Kernel runtime functionality;
    // mutexes, signals, allocators etc.
    namespace DLKR {
        // Non-copyable dummy (empty) synchronization object
        class DLDummySyncObject : public DLUT::DLNonCopyable {};

        // Rarely used, size 0x60 bytes
        class LIBER_UNIMPLEMENTED DLFastSmallObjectAllocator : public DLUT::DLNonCopyable {};

        // A wrapper around a Windows Critical Section
        // Satisfies the C++ Mutex requirement
        // Recursive, not TimedLockable
        class DLPlainLightMutex : public DLUT::DLNonCopyable {
        public:
            DLPlainLightMutex() noexcept;
            ~DLPlainLightMutex() noexcept override;

            void lock() noexcept;
            void unlock() noexcept;
            bool try_lock() noexcept;

            DLPlainLightMutex(DLPlainLightMutex&&) noexcept = delete;
        private:
            _RTL_CRITICAL_SECTION* critical_section() noexcept {
                return this->_dummy_section.get();
            }

            struct alignas(8) _critical_section {
                char _dummy_section_bytes[0x28];

                _RTL_CRITICAL_SECTION* get() noexcept {
                    return reinterpret_cast<_RTL_CRITICAL_SECTION*>(this);
                }
            } _dummy_section;
        };
    }
}