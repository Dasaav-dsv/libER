#pragma once

#include <detail/liber_preprocessor.hpp>

#include <memory/from_vector.h>
#include <memory/from_string.h>

#include <dantelion2/kernel_runtime.h>

#include <string>
#include <algorithm>

namespace from {
    namespace DLRF {
        class LIBER_UNIMPLEMENTED DLMethodInvoker {};

        struct DLRuntimeMethod {
            DLRuntimeClass* owner;
            const char* method_name;
            const wchar_t* method_name_w;
            from::vector<DLMethodInvoker*> invokers;
            from::vector<void*> unk_vec;
            void* unk_ptr;
            DLKR::DLPlainMutex mutex;
        };

        class DLRuntimeClass {
            virtual ~DLRuntimeClass() = default;

            virtual const char* class_name() const noexcept = 0;
            virtual const wchar_t* class_name_w() const noexcept = 0;

            virtual char* control_byte1() = 0;
            virtual char* control_byte2() = 0;
            virtual char* control_byte3() = 0;
            virtual char* control_byte4() = 0;

            virtual bool unk_bool() = 0;

            virtual void unk() = 0;

            virtual size_t class_size() const noexcept = 0;

            virtual void add_ctor_invoker(DLMethodInvoker* invoker, const char* method_name, const wchar_t* method_name_w) = 0;
            virtual void add_unique_invoker(DLMethodInvoker* invoker, const char* method_name, const wchar_t* method_name_w) = 0;

            // Get class's base, nullptr if it's not derived
            DLRuntimeClass* get_base() noexcept {
                return this->base_class;
            }

            // Get the constructor method
            DLRuntimeMethod* get_constructor() noexcept {
                return this->constructor_invokers;
            }

            // Get a vector of all methods
            from::vector<DLRuntimeMethod*>& get_methods() noexcept {
                return this->unique_invokers;
            }

            // Get a method by name if it exists
            DLRuntimeMethod* find_method(const char* name) noexcept {
                std::string_view name_sv{ name };
                auto iter = std::find_if(this->unique_invokers.begin(),
                    this->unique_invokers.end(),
                    [&name_sv](const DLRuntimeMethod*& method) {
                    return method->method_name == name_sv;
                });
                return iter != this->unique_invokers.end() ? *iter : nullptr;
            }

            // Get a method by name if it exists
            DLRuntimeMethod* find_method_w(const wchar_t* name) noexcept {
                std::wstring_view name_sv{ name };
                auto iter = std::find_if(this->unique_invokers.begin(),
                    this->unique_invokers.end(),
                    [&name_sv](const DLRuntimeMethod*& method) {
                    return method->method_name_w == name_sv;
                });
                return iter != this->unique_invokers.end() ? *iter : nullptr;
            }

        private:
            // A pointer to the base class, if class is derived
            DLRuntimeClass* base_class;
            // TODO: confirm it's a DLRuntimeMethod of the constructor
            DLRuntimeMethod* constructor_invokers;
            // A sorted vector of unique DLRuntimeMethods
            from::vector<DLRuntimeMethod*> unique_invokers;
        };

        int s = sizeof(DLRuntimeClass);

        template <class Impl>
        class DLRuntimeClassImpl : public DLRuntimeClass {
            virtual ~DLRuntimeClassImpl() = default;

            const char* get_name() const noexcept override { return this->class_name; }
            const wchar_t* get_name_w() const noexcept override { return this->class_name_w; }

            size_t class_size() const noexcept override { return sizeof(Impl); }

        private:
            const char* class_name;
            const wchar_t* class_name_w;
        };
    }
}