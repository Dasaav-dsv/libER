#pragma once

#include <detail/preprocessor.h>
#include <dantelion2/reflection.h>
#include <detail/literal_string.h>

// LIBER_CLASS specialization that implements
// DLRuntimeClass reflection for CLASSNAME
// The class must inherit from FD4ComponentBase
#define FD4_RUNTIME_CLASS(CLASSNAME)                                \
from::DLRF::DLRuntimeClass* get_runtime_class() noexcept override { \
    return &from::DLRF::DLRuntimeClassTemplate<CLASSNAME,           \
    LIBER_STRINGIFY(CLASSNAME)>::dl_runtime_class;                  \
}   LIBER_CLASS(CLASSNAME)

namespace from {
    namespace FD4 {
        // A class that automatically instantiates reflective
        // DLRF::DLRuntimeClass instances for classes that derive from it.
        // Commonly used in the ELDEN RING codebase
        class FD4ComponentBase {
        public:
            virtual DLRF::DLRuntimeClass* get_runtime_class() noexcept;
            virtual ~FD4ComponentBase();
        };
    }
}