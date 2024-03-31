#pragma once

#include <detail/preprocessor.h>
#include <memory/from_allocator.h>
#include <memory/from_unique_ptr.h>
#include <memory/from_vector.h>
#include <fd4/component.h>
#include <fd4/singleton.h>
#include <fd4/fd4_task.h>

#include <span>
#include <string>
#include <algorithm>

// TODO: annotate

#define CS_TASK_GROUP_ID(INDEX) (INDEX ^ LIBER_BIT_FLAG(28) ^ LIBER_BIT_FLAG(31))

namespace from {
    namespace CS {
        class CSEzTask;

        // CSTaskGroupId
        using cstgi = unsigned int;

        class CSEzTaskProxy : public FD4::FD4TaskBase {
        public:
            FD4_RUNTIME_CLASS(CSEzTaskProxy);

        private:
            CSEzTask* owner;
            int task_id;
        };

        class CSEzTask : public FD4::FD4TaskBase {
        public:
            FD4_RUNTIME_CLASS(CSEzTask);

        private:
            CSEzTaskProxy* proxy;
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
            struct cstg_control {
                cstg_control(cstgi id, bool active)
                    : id(id), active(active) {}

                cstgi id;
                wchar_t name[40]{};
                bool active;
            };

        public:
            virtual ~CSTaskBase() LIBER_INTERFACE_ONLY;

            LIBER_UNKNOWN(from::allocator<void>);
            from::vector<cstg_control> task_groups;
            cstgi task_group_count;
        };

        // Not constructible, exposition only
        class CSTask : private CSTaskBase {
        public:
            FD4_SINGLETON_CLASS(CSTask);

            virtual ~CSTask() LIBER_INTERFACE_ONLY;
            virtual void add_task_group(const wchar_t* name) LIBER_INTERFACE_ONLY;
            virtual bool unk_set_task_group(cstgi) LIBER_INTERFACE_ONLY;
            virtual bool set_task_group_state(cstgi id, bool state) LIBER_INTERFACE_ONLY;
            virtual void debug_print() LIBER_INTERFACE_ONLY;
            virtual void queue_tasks(void* unk1, void* unk2) LIBER_INTERFACE_ONLY;

        private:
            LIBER_UNKNOWN(from::allocator<void>);
            LIBER_UNK_ARR(void*, 8);
            void* task_seeds_0x30[6];
            void* task_seeds_0x60[6];
            LIBER_UNKNOWN(bool);
        };

        class CSTaskGroup {
            struct cstg_locator {
                int id;
                wchar_t* name;
                LIBER_UNK_ARR(int, 4);
            };

        public:
            FD4_SINGLETON_CLASS(CSTaskGroup);

            virtual ~CSTaskGroup() LIBER_INTERFACE_ONLY;

            #include "taskgroups.inl"
            void* task_groups[TaskGroups::SIZE];
        };

        LIBER_ASSERTS_BEGIN(CSTask);
        LIBER_ASSERT_SIZE(0xE8);
        LIBER_ASSERTS_END;
    }
}