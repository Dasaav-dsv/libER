#pragma once

#include <detail/preprocessor.h>
#include <memory/from_allocator.h>
#include <memory/from_unique_ptr.h>
#include <memory/from_vector.h>
#include <memory/from_list.h>
#include <dantelion2/text.h>
#include <fd4/component.h>
#include <fd4/singleton.h>
#include <fd4/detail/fd4_task.h>

#include <span>
#include <string>
#include <algorithm>

// TODO: annotate

namespace from {
    namespace CS {
        class CSEzTask;

        // CSTaskGroupId
        using cstgi = unsigned int;

        class CSEzTaskProxy : public FD4::FD4TaskBase {
        public:
            FD4_RUNTIME_CLASS(CSEzTaskProxy);

            virtual cstgi get_task_group() const noexcept {
                return this->task_group;
            }

        private:
            CSEzTask* owner;
            cstgi task_group;
        };

        class CSEzTask : public FD4::FD4TaskBase {
        public:
            FD4_RUNTIME_CLASS(CSEzTask);

            void execute() override {
                this->execute_eztask();
            }

            virtual void execute_eztask() = 0;
            virtual void register_eztask(cstgi task_group) = 0;
            virtual void free_eztask() = 0;

        private:
            CSEzTaskProxy* proxy;
        };

        class EzChildStepBase {
        public:
            LIBER_CLASS(EzChildStepBase);

            virtual ~EzChildStepBase() = default;

        private:
            CSEzTask* task = nullptr;
            bool run = false;
            void* liber_unknown;
        };

        class CSTask;

        class CSTaskGroup {
            struct cstg_locator {
                int id;
                wchar_t* name;
                int liber_unknown[4];
            };

        public:
            FD4_SINGLETON_CLASS(CSTaskGroup);

            virtual ~CSTaskGroup() LIBER_INTERFACE_ONLY;

            #include "taskgroups.inl"

        private:
            void* task_groups[TaskGroups::SIZE];
        };

        class CSTaskImp {
        public:
            FD4_SINGLETON_CLASS(CSTaskImp);

            virtual ~CSTaskImp() LIBER_INTERFACE_ONLY;

            void register_task(FD4::FD4TaskBase& task, CSTaskGroup::TaskGroups task_group);

            // Get the associated CSTask instance (may be null)
            liber::optref<CSTask> get() noexcept {
                if (!this->inst) return std::nullopt;
                return *this->inst;
            }

        private:
            CSTask* inst;
        };

        class CSTaskBase {
            struct cstg_control {
                cstg_control(cstgi id, bool active)
                    : id(id), active(active) {}

                cstgi id;
                wchar_t name[64]{};
                bool active;
            };

        public:
            virtual ~CSTaskBase() LIBER_INTERFACE_ONLY;

            from::allocator<void> liber_unknown;
            from::vector<cstg_control> task_groups;
            cstgi task_group_count;
        };

        // Not constructible, exposition only
        class CSTask : private CSTaskBase {
        public:
            LIBER_INTERFACE_CLASS(CSTask);

            virtual ~CSTask() LIBER_INTERFACE_ONLY;
            virtual void add_task_group(const wchar_t* name) LIBER_INTERFACE_ONLY;
            virtual bool unk_set_task_group(cstgi) LIBER_INTERFACE_ONLY;
            virtual bool set_task_group_state(cstgi id, bool state) LIBER_INTERFACE_ONLY;
            virtual void debug_print() LIBER_INTERFACE_ONLY;
            virtual void queue_tasks(void* unk1, void* unk2) LIBER_INTERFACE_ONLY;

        private:
            from::allocator<void> liber_unknown;
            void* liber_unknown[8];
            void* task_seeds_0x30[6];
            void* task_seeds_0x60[6];
            bool liber_unknown;
        };

        class CSTaskGroupIns {
        public:
            LIBER_CLASS(CSTaskGroupIns);

            virtual ~CSTaskGroupIns() LIBER_INTERFACE_ONLY;

        private:
            virtual void unk_fn1() LIBER_INTERFACE_ONLY;
            virtual void unk_fn2() LIBER_INTERFACE_ONLY;

            DLTX::FD4BasicHashString group_name;
            int liber_unknown[4];
        };

        class CSTimeLineTaskGroupIns : public CSTaskGroupIns {
        public:
            LIBER_CLASS(CSTimeLineTaskGroupIns);

            virtual ~CSTimeLineTaskGroupIns() LIBER_INTERFACE;

        private:
            virtual void unk_fn1() LIBER_INTERFACE;
            virtual void unk_fn2() LIBER_INTERFACE;

            CSTask* cs_task;
            from::list<liber::dummy> liber_unknown;
            int liber_unknown;
        };

        LIBER_ASSERTS_BEGIN(CSTask);
        LIBER_ASSERT_SIZE(0xE8);
        LIBER_ASSERTS_END;

        LIBER_ASSERTS_BEGIN(CSTimeLineTaskGroupIns);
        LIBER_ASSERT_OFFS(0x58, cs_task);
        LIBER_ASSERT_SIZE(0x80);
        LIBER_ASSERTS_END;
    }
}