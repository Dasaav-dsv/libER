#pragma once

#include <detail/preprocessor.h>
#include <memory/from_allocator.h>
#include <memory/from_string.h>
#include <memory/from_vector.h>
#include <memory/from_deque.h>
#include <memory/from_set.h>
#include <memory/from_map.h>
#include <fd4/component.h>
#include <fd4/singleton.h>
#include <dantelion2/kernel_runtime.h>

#include <utility>

#define CS_TASK_GROUP_ID(INDEX) (INDEX ^ LIBER_BIT_FLAG(28) ^ LIBER_BIT_FLAG(31))

namespace from {
    namespace CS {
        class CSTask;
        
        // CSTaskGroupId
        using cstgi = unsigned int;
    }

    namespace FD4 {
        class FD4TaskBase : public FD4::FD4ComponentBase {
        public:
            FD4_RUNTIME_CLASS(FD4TaskBase);

            virtual ~FD4TaskBase();
            virtual void execute() = 0;

        private:
            void* liber_unknown = nullptr;
        };

        template <class Impl>
        class FD4StepTemplateInterface;
        
        template <>
        class FD4StepTemplateInterface<FD4TaskBase> : public FD4TaskBase {
        public:
            FD4_RUNTIME_CLASS(FD4StepTemplateInterface);

        private:
            virtual void execute_second() LIBER_INTERFACE;
            virtual bool test_int_0x48() LIBER_INTERFACE;
            virtual int get_int_0x48() LIBER_INTERFACE;
            virtual bool unk_tree_op1() LIBER_INTERFACE;
            virtual bool unk_tree_op2() LIBER_INTERFACE;
            virtual bool unk_tree_op3() LIBER_INTERFACE;
            virtual bool unk_tree_op4() LIBER_INTERFACE;
            virtual bool unk_tree_op5() LIBER_INTERFACE;
            virtual bool unk_tree_op6() LIBER_INTERFACE;
            virtual bool unk_tree_op7() LIBER_INTERFACE;
            virtual bool unk_tree_op8() LIBER_INTERFACE;
            virtual bool unk_tree_op9() LIBER_INTERFACE;
            virtual bool unk_tree_op10() LIBER_INTERFACE;
        };

        // TODO:
        struct _unk_tree {
            virtual ~_unk_tree() = default;
            from::set<void*> _tree;
            from::allocator<void> liber_unknown;
            from::allocator<void> liber_unknown;
        };

        template <class Impl>
        class FD4StepTemplateBase : public FD4StepTemplateInterface<FD4TaskBase> {
        public:
            FD4_RUNTIME_CLASS(FD4StepTemplateBase);

        private:
            virtual bool unk_tree_op11() LIBER_INTERFACE;
            virtual bool unk_tree_op12() LIBER_INTERFACE;
            virtual bool unk_tree_op13() LIBER_INTERFACE;

            using steps_type = std::pair<void(*)(Impl*), const char*>;

            steps_type* steps;
            _unk_tree _tree;
            void* liber_unknown = nullptr;
            bool liber_unknown = false;
            from::allocator<void> liber_unknown;
            void* liber_unknown = nullptr;
            bool liber_unknown = false;
            bool liber_unknown = false;
            from::wstring unk_wstr;
            bool liber_unknown = true;
            const wchar_t* state = L"NotExecuting";
            bool liber_unknown = false;
            int liber_unknown = 0;
        };

        template <class Impl>
        class FD4StepTaskBase : public FD4StepTemplateBase<Impl> {
        public:
            FD4_RUNTIME_CLASS(FD4StepTaskBase);

        private:
            int liber_unknown = 0;
            int liber_unknown = 0;
        };

        struct task_entry_group {
            LIBER_CLASS(task_entry_group);

            struct task_entry {
                virtual ~task_entry() = default;
                FD4TaskBase* task;
                void* liber_unknown;
                CS::cstgi group_id;
            };

            struct task_state {
                FD4TaskBase* task;
                void* liber_unknown;
                int liber_unknown;
                bool active;
            };

            virtual ~task_entry_group() = default;
            from::vector<task_entry> entries;
            from::vector<task_state> states;
            from::deque<task_state> queue;
            int flags[2];
            CS::cstgi group_id;
            DLKR::DLPlainAdaptiveMutex mutex;
            void* debug_menu_item; // FD4::FD4DebugMenuItem
            void* liber_unknown;
        };

        class FD4TaskManager {
        public:
            FD4_SINGLETON_CLASS(FD4TaskManager);

            virtual ~FD4TaskManager() LIBER_INTERFACE_ONLY;

        private:
            from::allocator<void> liber_unknown;
            struct {
                void* liber_unknown;
                DLKR::DLPlainLightMutex* mutex;
                from::vector<liber::dummy> liber_unknown;
            } *liber_unknown[3];
            void* liber_unknown;
            void* liber_unknown;
            bool liber_unknown;
            bool liber_unknown;
            CS::CSTask* cs_task;
            struct {
                void* liber_unknown;
                from::allocator<void> liber_unknown;
                from::map<CS::cstgi, task_entry_group*> liber_unknown;
                from::vector<task_entry_group> liber_unknown;
            } *liber_unknown;
            void* liber_unknown;
        };

        LIBER_ASSERTS_TEMPLATE_BEGIN(FD4StepTemplateBase, void);
        LIBER_ASSERT_SIZE(0xB0);
        LIBER_ASSERT_OFFS(0x10, steps);
        LIBER_ASSERT_OFFS(0x18, _tree);
        LIBER_ASSERT_OFFS(0x70, unk_wstr);
        LIBER_ASSERT_OFFS(0xA0, state);
        LIBER_ASSERTS_END;

        LIBER_ASSERTS_BEGIN(task_entry_group);
        LIBER_ASSERT_SIZE(0xD0);
        LIBER_ASSERT_OFFS(0x08, entries);
        LIBER_ASSERT_OFFS(0x28, states);
        LIBER_ASSERT_OFFS(0x48, queue);
        LIBER_ASSERT_OFFS(0x80, group_id);
        LIBER_ASSERTS_END;

        LIBER_ASSERTS_BEGIN(FD4TaskManager);
        LIBER_ASSERT_SIZE(0x58);
        LIBER_ASSERT_OFFS(0x40, cs_task);
        LIBER_ASSERTS_END;
    }
}