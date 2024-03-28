#pragma once

#include <dantelion2/reflection.h>
#include <detail/literal_string.h>

// Macro for classes that implement FD4::FD4ComponentBase
#define FD4_COMPONENT_CLASS(CLASSNAME) class CLASSNAME : public from::FD4::FD4ComponentBase<CLASSNAME, #CLASSNAME>

namespace from {
    namespace FD4 {
        // A class that automatically instantiates reflective
        // DLRF::DLRuntimeClass instances for classes that derive from it.
        // Commonly used in the ELDEN RING codebase
        template <class Impl, liber::literal_string ImplName>
        class FD4ComponentBase {
            static constexpr const char* name = ImplName.trunc().string;
            static constexpr const wchar_t* name_w = ImplName.widen().string;
            static inline DLRF::DLRuntimeClassImpl<FD4ComponentBase> runtime_class {
                FD4ComponentBase::name, FD4ComponentBase::name_w
            };
        public:
            virtual DLRF::DLRuntimeClass* get_runtime_class() {
                return &FD4ComponentBase::runtime_class;
            }

            virtual ~FD4ComponentBase() = default;
        };
    }
}