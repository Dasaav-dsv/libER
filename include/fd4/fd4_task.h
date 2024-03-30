#pragma once

#include <detail/liber_preprocessor.h>
#include <memory/from_allocator.h>
#include <memory/from_string.h>
#include <memory/from_set.h>
#include <fd4/component.h>

#include <utility>

// TODO: DLKR::DLAllocator* to from::allocator<T>

namespace from {
    namespace FD4 {
        class FD4TaskBase : public FD4::FD4ComponentBase {
        public:
            LIBER_CLASS_TRAITS(
                LIBER_CLASS(FD4TaskBase)
                FD4_RUNTIME_CLASS(FD4TaskBase)
            )

            virtual ~FD4TaskBase() = default;

            virtual void execute_1() {}

        private:
            void* _unk_void = nullptr;
        };

        template <class Impl>
        class FD4StepTemplateInterface;
        
        template <>
        class FD4StepTemplateInterface<FD4TaskBase> : public FD4TaskBase {
        public:
            LIBER_CLASS_TRAITS(
                LIBER_CLASS(FD4StepTemplateInterface)
                FD4_RUNTIME_CLASS(FD4StepTemplateInterface<FD4TaskBase>)
            )

        private:
            virtual void execute_2() LIBER_INTERFACE
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
            DLKR::DLAllocator* _allocator1;
            DLKR::DLAllocator* _allocator2;
        };

        static_assert(sizeof(_unk_tree) == 0x30);

        template <class Impl>
        class FD4StepTemplateBase : public FD4StepTemplateInterface<FD4TaskBase> {
        public:
            LIBER_CLASS_TRAITS(
                LIBER_CLASS(FD4StepTemplateBase)
                FD4_RUNTIME_CLASS(FD4StepTemplateBase<Impl>)
                LIBER_SIZE(0xB0)
            )

            LIBER_OFFSET(steps, 0x10)
            LIBER_OFFSET(_tree, 0x18)
            LIBER_OFFSET(unk_wstr, 0x70)
            LIBER_OFFSET(state, 0xA0)

        private:
            virtual bool unk_tree_op11() LIBER_INTERFACE
            virtual bool unk_tree_op12() LIBER_INTERFACE
            virtual bool unk_tree_op13() LIBER_INTERFACE

            std::pair<void(*)(Impl*), const char*>* steps;
            _unk_tree _tree;
            void* _unk_ptr1 = nullptr;
            void* _unk_ptr2 = nullptr;
            bool _unk_bool1 = true;
            bool _unk_bool2 = false;
            from::wstring unk_wstr;
            const wchar_t* state = L"NotExecuting";
            bool _unk_bool3 = false;
            int _unk_int = -1;
        };

        template <class Impl>
        class FD4StepTaskBase : public FD4StepTemplateBase<Impl> {
        public:
            FD4_RUNTIME_CLASS(FD4StepTaskBase<Impl>)

        private:
            int _unk_int1 = 0;
            int _unk_int2 = 0;
        };

        static_assert(sizeof(FD4StepTemplateBase<int>) == 0xb0);
    }
}