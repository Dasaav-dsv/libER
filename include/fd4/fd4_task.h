#pragma once

#include <detail/preprocessor.h>
#include <memory/from_allocator.h>
#include <memory/from_string.h>
#include <memory/from_set.h>
#include <fd4/component.h>
#include <fd4/singleton.h>
#include <dantelion2/kernel_runtime.h>

#include <utility>

namespace from {
    namespace FD4 {
        class FD4TaskBase : public FD4::FD4ComponentBase {
        public:
            FD4_RUNTIME_CLASS(FD4TaskBase);

            virtual ~FD4TaskBase() = default;

            virtual void execute1() {}

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
            virtual void execute2() LIBER_INTERFACE;
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
            bool liber_unknown = true;
            bool liber_unknown = false;
            from::wstring unk_wstr;
            bool liber_unknown = false;
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

        namespace CS { class CSTask; } 

        class FD4TaskManager {
            FD4_SINGLETON_CLASS(FD4TaskManager);

            virtual ~FD4TaskManager() LIBER_INTERFACE_ONLY;

        private:
            //void* liber_unknown[3];
            struct {
                void* liber_unknown;
                DLKR::DLPlainLightMutex* mutex;
                from::vector<liber::dummy> liber_unknown;
            } *unk[3];
            void* liber_unknown;
            void* liber_unknown;
            bool liber_unknown;
            bool liber_unknown;
            CS::CSTask* cs_task;
        };

        LIBER_ASSERTS_TEMPLATE_BEGIN(FD4StepTemplateBase, void);
        LIBER_ASSERT_SIZE(0xB0);
        LIBER_ASSERT_OFFS(0x10, steps);
        LIBER_ASSERT_OFFS(0x18, _tree);
        LIBER_ASSERT_OFFS(0x70, unk_wstr);
        LIBER_ASSERT_OFFS(0xA0, state);
        LIBER_ASSERTS_END;

        LIBER_ASSERTS_BEGIN(FD4TaskManager);
        //LIBER_ASSERT_SIZE(0x58);
        //LIBER_ASSERT_OFFS(0x40, cs_task);
        LIBER_ASSERTS_END;
    }
}