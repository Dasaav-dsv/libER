#pragma once

#include <detail/preprocessor.h>
#include <fd4/singleton.h>

namespace from {
    // Dantelion system
    namespace DLSY {
        // TODO: desc
        // DO NOT CALL FROM DLLMAIN - DEADLOCK!
        bool wait_for_system(int timeout) noexcept;

        class DLRuntimeImpl {
        public:
            FD4_SINGLETON_CLASS(DLRuntimeImpl);

            virtual ~DLRuntimeImpl() LIBER_INTERFACE_ONLY;

        private:
            void* liber_unknown[11];
        };
    }
}