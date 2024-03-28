#pragma once

#include <fd4/component.h>

namespace from {
    namespace FD4 {
        FD4_COMPONENT_CLASS(FD4TaskBase) {
            FD4_RUNTIME_CLASS_OVERRIDE(FD4TaskBase)
        };

        template <class Impl>
        FD4_COMPONENT_CLASS(FD4StepTemplateInterface) : public Impl {
            FD4_RUNTIME_CLASS_OVERRIDE(FD4TaskBase)
        };
        
        template <>
        class FD4StepTemplateInterface<FD4TaskBase> : public FD4TaskBase {
            FD4_RUNTIME_CLASS_OVERRIDE(FD4TaskBase)
        };
    }
}