#pragma once

#include <detail/unimplemented.h>
#include <memory/from_allocator.h>
#include <memory/from_string.h>
#include <memory/from_set.h>
#include <fd4/component.h>

#include <utility>

// TODO: DLKR::DLAllocator* to from::allocator<T>

namespace from {
    namespace FD4 {
        FD4_COMPONENT_CLASS(FD4TaskBase) {
        public:
            FD4_RUNTIME_CLASS_OVERRIDE(FD4TaskBase)

            virtual ~FD4TaskBase() = default;

            virtual void execute_1() {}

        private:
            void* _unk_void = nullptr;
        };

        template <class Impl>
        class FD4StepTemplateInterface;
        
        template <>
        FD4_COMPONENT_CLASS(FD4StepTemplateInterface<FD4TaskBase>), public FD4TaskBase {
        public:
            FD4_RUNTIME_CLASS_OVERRIDE(FD4StepTemplateInterface<FD4TaskBase>)

        private:
            virtual void execute_2() LIBER_UNIMPLEMENTED
            virtual bool test_int_0x48() LIBER_UNIMPLEMENTED
            virtual int get_int_0x48() LIBER_UNIMPLEMENTED
            virtual bool unk_tree_op1() LIBER_UNIMPLEMENTED
            virtual bool unk_tree_op2() LIBER_UNIMPLEMENTED
            virtual bool unk_tree_op3() LIBER_UNIMPLEMENTED
            virtual bool unk_tree_op4() LIBER_UNIMPLEMENTED
            virtual bool unk_tree_op5() LIBER_UNIMPLEMENTED
            virtual bool unk_tree_op6() LIBER_UNIMPLEMENTED
            virtual bool unk_tree_op7() LIBER_UNIMPLEMENTED
            virtual bool unk_tree_op8() LIBER_UNIMPLEMENTED
            virtual bool unk_tree_op9() LIBER_UNIMPLEMENTED
            virtual bool unk_tree_op10() LIBER_UNIMPLEMENTED
        };

        // TODO:
        struct _unk_tree {
            virtual ~_unk_tree() = default;
            from::set<void*> _tree;
            DLKR::DLAllocator* _allocator;
        };

        static_assert(sizeof(_unk_tree) == 0x30);

        template <class Impl>
        FD4_COMPONENT_TEMPLATE_CLASS(FD4StepTemplateBase, Impl), public FD4StepTemplateInterface<FD4TaskBase> {
        public:
            FD4_RUNTIME_CLASS_OVERRIDE(FD4StepTemplateBase<Impl>)

        private:
            virtual bool unk_tree_op11() LIBER_UNIMPLEMENTED
            virtual bool unk_tree_op12() LIBER_UNIMPLEMENTED
            virtual bool unk_tree_op13() LIBER_UNIMPLEMENTED


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
        FD4_COMPONENT_TEMPLATE_CLASS(FD4StepTaskBase, Impl), public FD4StepTemplateBase<Impl> {
        public:
            FD4_RUNTIME_CLASS_OVERRIDE(FD4StepTaskBase<Impl>)

        private:
            int _unk_int1 = 0;
            int _unk_int2 = 0;
        };

        static_assert(sizeof(FD4StepTemplateBase<int>) == 0xb0);
    }
}