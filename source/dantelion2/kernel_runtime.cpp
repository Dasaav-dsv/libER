#include <dantelion2/kernel_runtime.h>

#include <detail/windows.inl>

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

        DLPlainMutex::DLPlainMutex() noexcept
            : mutex_handle(CreateMutexW(NULL, 0, NULL)) {}

        DLPlainMutex::~DLPlainMutex() noexcept {
            if (this->mutex_handle) CloseHandle(this->mutex_handle);
        }

        void DLPlainMutex::lock() noexcept {
            WaitForSingleObject(this->mutex_handle, -1);
        }

        void DLPlainMutex::unlock() noexcept {
            ReleaseMutex(this->mutex_handle);
        }

        bool DLPlainMutex::try_lock() noexcept {
        return WaitForSingleObject(this->mutex_handle, 0) == WAIT_OBJECT_0;
        }
    }
}