#pragma once

#include <fd4/component.h>
#include <fd4/fd4_task.h>

namespace from {
    namespace CS {
        class CSEzTask;

        FD4_COMPONENT_CLASS(CSEzTaskProxy), public FD4::FD4TaskBase {
        public:
            FD4_RUNTIME_CLASS_OVERRIDE(CSEzTaskProxy)

        private:
            CSEzTask* owner;
            int task_id;
        };

        FD4_COMPONENT_CLASS(CSEzTask), public FD4::FD4TaskBase {
        public:
            FD4_RUNTIME_CLASS_OVERRIDE(CSEzTask)

        private:
            CSEzTaskProxy* _proxy;
        };
    }
}