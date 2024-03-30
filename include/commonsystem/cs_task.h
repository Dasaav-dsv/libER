#pragma once

#include <detail/liber_preprocessor.h>
#include <memory/from_allocator.h>
#include <memory/from_unique_ptr.h>
#include <memory/from_vector.h>
#include <fd4/component.h>
#include <fd4/fd4_task.h>

#include <string>
#include <algorithm>

#define CS_TASK_GROUP_ID(INDEX) (INDEX ^ LIBER_BIT_FLAG(28) ^ LIBER_BIT_FLAG(31))

namespace from {
    namespace CS {
        class CSEzTask;

        // CSTaskGroupId
        using cstgi = unsigned int;

        struct cstg_descriptor {
            cstg_descriptor(cstgi id, bool active)
                : id(id), active(active) {}

            cstgi id;
            wchar_t name[40]{};
            bool active;
        };

        class CSEzTaskProxy : public FD4::FD4TaskBase {
        public:
            FD4_RUNTIME_CLASS(CSEzTaskProxy)

        private:
            CSEzTask* owner;
            int task_id;
        };

        class CSEzTask : public FD4::FD4TaskBase {
        public:
            FD4_RUNTIME_CLASS(CSEzTask)

        private:
            CSEzTaskProxy* _proxy;
        };

        class CSTask;

        class CSTaskImp {
        public:
            virtual ~CSTaskImp() LIBER_INTERFACE_ONLY;

            CSTask* get() noexcept { return this->instance; }
            CSTask* get() const noexcept { return this->instance; }

        private:
            CSTask* instance;
        };

        class CSTaskBase {
        public:
            virtual ~CSTaskBase() LIBER_INTERFACE_ONLY

            // TODO: from::allocator
            DLKR::DLAllocator* allocator;
            from::vector<cstg_descriptor> task_groups;
            cstgi task_group_count;
        };

        // Not constructible, exposition only
        class CSTask : private CSTaskBase {
        public:
            virtual ~CSTask() LIBER_INTERFACE_ONLY
            virtual void add_task_group(const wchar_t* name) LIBER_INTERFACE_ONLY
            virtual bool unk_set_task_group(cstgi) LIBER_INTERFACE_ONLY
            virtual bool set_task_group_state(cstgi id, bool state) LIBER_INTERFACE_ONLY
            virtual void debug_print() LIBER_INTERFACE_ONLY
            virtual void queue_tasks(void* unk1, void* unk2) LIBER_INTERFACE_ONLY

        private:
            // TODO: from::allocator
            DLKR::DLAllocator* allocator;
            void* _unk_ptrs1[8];
            void* task_seeds_0x30[6];
            void* task_seeds_0x60[6];
            bool _unk_bool1;
        };
    }
}