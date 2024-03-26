#include <dantelion2/kernel_runtime.h>

#include <windows.inl>

namespace from {
    namespace DLKR {
        DLPlainLightMutex::DLPlainLightMutex() noexcept {
            InitializeCriticalSection(this->critical_section());
        }

        DLPlainLightMutex::~DLPlainLightMutex() noexcept {
            DeleteCriticalSection(this->critical_section());
        }

        void DLPlainLightMutex::lock() noexcept {
            EnterCriticalSection(this->critical_section());
        }

        void DLPlainLightMutex::unlock() noexcept {
            LeaveCriticalSection(this->critical_section());
        }

        bool DLPlainLightMutex::try_lock() noexcept {
            return TryEnterCriticalSection(this->critical_section());
        }
    }
}