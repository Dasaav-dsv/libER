#pragma once

#include <detail/liber_preprocessor.h>

#include <memory/from_vector.h>
#include <memory/from_unique_ptr.h>

#include <dantelion2/kernel_runtime.h>

#include <cstddef>
#include <cstdint>
#include <utility>
#include <string>

namespace from {
    // Dantelion reflection
    namespace DLRF {
        // DLMethodInvoker trait tags
        struct DLMethodInvokeContext {};
        struct DLFunctionInvokeContext {};
        struct DLRuntimeConstructionContext {};

        // DLRF runtime method invocation interface
        template <typename Ctx = DLMethodInvokeContext>
        class DLMethodInvokerImpl {
        public:
            virtual int invoke(Ctx* context) = 0;
            virtual ~DLMethodInvokerImpl() = default;
            virtual int arg_count() = 0;
            virtual void zero_context(Ctx* context) = 0;
            virtual void zero_context2(Ctx* context) = 0;
            virtual char* ref_byte() = 0;
        };

        // Default template
        using DLMethodInvoker = DLMethodInvokerImpl<DLMethodInvokeContext>;

        // Concrete method invoker class
        // Is not implemented in libER, exposition only
        struct LIBER_DUMMY DLConcreteMethodInvoker : public DLMethodInvoker {
            void* method;
        };

        // Forward declaration
        class DLRuntimeClass;

        // A wrapper that represents a method
        // with a vector of invoker objects
        struct DLRuntimeMethod {
            DLRuntimeMethod() noexcept : owner(nullptr), method_name(nullptr),
                method_name_w(nullptr), unk_ptr(nullptr) {}

            DLRuntimeMethod(DLRuntimeClass* owner, const char* method_name, const wchar_t* method_name_w) noexcept
                : owner(owner), method_name(method_name), method_name_w(method_name_w), unk_ptr(nullptr) {}

            DLRuntimeClass* owner;
            const char* method_name;
            const wchar_t* method_name_w;
            from::vector<DLMethodInvoker*> invokers;
            from::vector<void*> unk_vec;
            void* unk_ptr;
            DLKR::DLPlainMutex mutex;
        };

        // A wrapper for the DLRuntimeMethod wrapper
        struct DLRuntimeMethodHolder {
            DLRuntimeMethodHolder() noexcept : method_name(nullptr),
                method_name_w(nullptr), length(0) {}

            DLRuntimeMethodHolder(from::unique_ptr<DLRuntimeMethod>&& method, const char* method_name, const wchar_t* method_name_w, size_t length) noexcept
                : method(std::move(method)), method_name(method_name), method_name_w(method_name_w), length(length) {}

            from::unique_ptr<DLRuntimeMethod> method;
            const char* method_name;
            const wchar_t* method_name_w;
            size_t length;
        };

        // Ref byte/runtime class pair
        using DLRuntimeClassPair = std::pair<char*, DLRuntimeClass*>;

        // (Typically statically allocated) reflection based
        // object for an implementing class. Allows for runtime
        // type introspection and for binding method invokers.
        class DLRuntimeClass {
        public:
            DLRuntimeClass() noexcept : base_class(nullptr) {}

            virtual ~DLRuntimeClass() = default;

            // Class name
            virtual const char* class_name() const noexcept = 0;
            // Class name (wide)
            virtual const wchar_t* class_name_w() const noexcept = 0;

        private:
            // Methods that return pointers to null
            // bytes in static memory (bad for re-implementation),
            // adresses of which are used for sorting DLRuntimeClass instances
            virtual char* ref_byte1() = 0;
            virtual char* ref_byte2() = 0;
            virtual char* ref_byte3() = 0;
            virtual char* ref_byte4() = 0;

            // Always false?
            virtual bool unk_always_false() = 0;

            // Potentially a method that frees a base class of
            // a DLRuntimeClass, or a DLRuntimeClass from a similar structure
            virtual void free_base(DLRuntimeClass** base_of, DLKR::DLAllocator* allocator) = 0;

        public:
            // The size of the runtime class
            virtual size_t class_size() const noexcept = 0;

            // Add an invoker to a vector of invokers for the class's constructor
            virtual void add_constructor_invoker(DLMethodInvoker* invoker, const char* method_name, const wchar_t* method_name_w);

            // Add an invoker to a vector of invokers for a given method
            virtual void add_method_invoker(DLMethodInvoker* invoker, const char* method_name, const wchar_t* method_name_w);

            // Get class's base, nullptr if it's not derived
            DLRuntimeClass* get_base() noexcept { return this->base_class; }
            const DLRuntimeClass* get_base() const noexcept { return this->base_class; }

            // Get the constructor method (may be null)
            DLRuntimeMethod* get_constructor() noexcept {
                return this->runtime_constructor.get();
            }

            // Get a vector of all methods
            from::vector<DLRuntimeMethodHolder>& get_methods() noexcept {
                return this->runtime_methods;
            }

            // Get a method by name if it exists
            DLRuntimeMethod* find_method(const std::string_view& method_name) noexcept;

            // Globally register this DLRuntimeClass
            void register_class();

            // Get a vector of all globally registered DLRuntimeClasses
            static from::vector<DLRuntimeMethodHolder>& get_registered_classes() noexcept;

            // Get a vector of all globally registered DLRuntimeClass pairs
            static from::vector<DLRuntimeClassPair>& get_runtime_pairs() noexcept;

        private:
            // A pointer to the base class, if the class is derived
            DLRuntimeClass* base_class;
            // A DLRuntimeMethod of the class's constructor
            from::unique_ptr<DLRuntimeMethod> runtime_constructor;
            // A vector of DLRuntimeMethodHolders sorted by string length
            from::vector<DLRuntimeMethodHolder> runtime_methods;
        };

        // Concrete DLRuntimeClass for class Impl
        // Additionally stores the class name
        template <class Impl>
        class DLRuntimeClassImpl : public DLRuntimeClass {
        public:
            virtual ~DLRuntimeClassImpl() = default;

            DLRuntimeClassImpl(const char* class_name, const wchar_t* class_name_w) noexcept
                : DLRuntimeClass(), _class_name(class_name), _class_name_w(class_name_w) {}

            const char* class_name() const noexcept override { return this->_class_name; }
            const wchar_t* class_name_w() const noexcept override { return this->_class_name_w; }

        private:
            char* ref_byte1() LIBER_INTERFACE
            char* ref_byte2() LIBER_INTERFACE
            char* ref_byte3() LIBER_INTERFACE
            char* ref_byte4() LIBER_INTERFACE

            bool unk_always_false() LIBER_INTERFACE
            void free_base(DLRuntimeClass**, DLKR::DLAllocator*) LIBER_INTERFACE

        public:
            size_t class_size() const noexcept override { return sizeof(Impl); }

        private:
            const char* _class_name;
            const wchar_t* _class_name_w;
        };
    }
}