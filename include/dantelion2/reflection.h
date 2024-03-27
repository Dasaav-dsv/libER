#pragma once

#include <memory/from_vector.h>

namespace from {
    namespace DLRF {
        class DLRuntimeClass {
            using method_invoker_type = void*;

            virtual ~DLRuntimeClass() = default;

        private:
            void* f1;
            method_invoker_type main_method_invoker;
            from::vector<method_invoker_type> method_invokers;
        };

        int s = sizeof(DLRuntimeClass);

        template <class Impl>
        class DLRuntimeClassImpl : public DLRuntimeClass {

        };
    }
}