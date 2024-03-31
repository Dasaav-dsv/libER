#pragma once

#include <detail/liber_preprocessor.h>
#include <memory/from_allocator.h>
#include <memory/from_string.h>
#include <memory/from_set.h>
#include <fd4/component.h>

#include <utility>

namespace from {
    namespace FD4 {
        class FD4TaskBase : public FD4::FD4ComponentBase {
        public:
            FD4_RUNTIME_CLASS(FD4TaskBase);

            virtual ~FD4TaskBase() = default;

            virtual void execute1() {}

        private:
            LIBER_UNKNOWN(void*);
        };

        template <class Impl>
        class FD4StepTemplateInterface;
        
        template <>
        class FD4StepTemplateInterface<FD4TaskBase> : public FD4TaskBase {
        public:
            FD4_RUNTIME_CLASS(FD4StepTemplateInterface);

        private:
            virtual void execute2() LIBER_INTERFACE
            virtual bool test_int_0x48() LIBER_INTERFACE
            virtual int get_int_0x48() LIBER_INTERFACE
            virtual bool unk_tree_op1() LIBER_INTERFACE
            virtual bool unk_tree_op2() LIBER_INTERFACE
            virtual bool unk_tree_op3() LIBER_INTERFACE
            virtual bool unk_tree_op4() LIBER_INTERFACE
            virtual bool unk_tree_op5() LIBER_INTERFACE
            virtual bool unk_tree_op6() LIBER_INTERFACE
            virtual bool unk_tree_op7() LIBER_INTERFACE
            virtual bool unk_tree_op8() LIBER_INTERFACE
            virtual bool unk_tree_op9() LIBER_INTERFACE
            virtual bool unk_tree_op10() LIBER_INTERFACE
        };

        // TODO:
        struct _unk_tree {
            virtual ~_unk_tree() = default;
            from::set<void*> _tree;
            LIBER_UNKNOWN(from::allocator<void>);
            LIBER_UNKNOWN(from::allocator<void>);
        };

        template <class Impl>
        class FD4StepTemplateBase : public FD4StepTemplateInterface<FD4TaskBase> {
        public:
            FD4_RUNTIME_CLASS(FD4StepTemplateBase);

        private:
            virtual bool unk_tree_op11() LIBER_INTERFACE
            virtual bool unk_tree_op12() LIBER_INTERFACE
            virtual bool unk_tree_op13() LIBER_INTERFACE

            using steps_type = std::pair<void(*)(Impl*), const char*>;

            steps_type* steps;
            _unk_tree _tree;
            LIBER_UNKNOWN(void*);
            LIBER_UNKNOWN(bool);
            LIBER_UNKNOWN(DLKR::DLAllocator*);
            LIBER_UNKNOWN(void*);
            LIBER_UNKNOWN(bool);
            LIBER_UNKNOWN(bool);
            from::wstring unk_wstr;
            LIBER_UNKNOWN(bool);
            const wchar_t* state = L"NotExecuting";
            LIBER_UNKNOWN(bool);
            LIBER_UNKNOWN(int);
        };

        template <class Impl>
        class FD4StepTaskBase : public FD4StepTemplateBase<Impl> {
        public:
            FD4_RUNTIME_CLASS(FD4StepTaskBase<Impl>);

        private:
            LIBER_UNKNOWN(int);
            LIBER_UNKNOWN(int);
        };

        LIBER_ASSERTS_TEMPLATE_BEGIN(FD4StepTemplateBase, void);
        LIBER_ASSERT_SIZE(0xB0);
        LIBER_ASSERT_OFFS(0x10, steps);
        LIBER_ASSERT_OFFS(0x18, _tree);
        LIBER_ASSERT_OFFS(0x70, unk_wstr);
        LIBER_ASSERT_OFFS(0xA0, state);
        LIBER_ASSERTS_END;
    }
}