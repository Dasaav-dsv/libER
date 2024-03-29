#include <dantelion2/reflection.h>
#include <detail/functions.h>

#include <cstddef>
#include <cstdint>
#include <algorithm>

namespace from {
    namespace DLRF {
        DLRuntimeMethod* DLRuntimeClass::find_method(const std::string_view& method_name) noexcept {
            auto iter = std::find_if(this->runtime_methods.begin(),
                this->runtime_methods.end(),
                [&method_name](const DLRuntimeMethodHolder& holder) {
                return holder.method_name == method_name;
            });
            return iter != this->runtime_methods.end() ? iter->method.get() : nullptr;
        }

        void DLRuntimeClass::add_constructor_invoker(DLMethodInvoker* invoker, const char* method_name, const wchar_t* method_name_w) {
            if (!this->runtime_constructor) {
                this->runtime_constructor = from::make_unique<DLRuntimeMethod>(this, method_name, method_name_w);
            }
            this->runtime_constructor->invokers.push_back(invoker);
        }

        void DLRuntimeClass::add_method_invoker(DLMethodInvoker* invoker, const char* method_name, const wchar_t* method_name_w) {
            std::string_view name_sv{ method_name };
            DLRuntimeMethod* method = this->find_method(name_sv);
            if (!method) {
                auto method_unique = from::make_unique<DLRuntimeMethod>(this, method_name, method_name_w);
                method = method_unique.get();
                size_t length = name_sv.length();
                auto iter = std::lower_bound(this->runtime_methods.begin(),
                    this->runtime_methods.end(), length, [](const DLRuntimeMethodHolder& holder, const size_t& length) {
                    return holder.length > length;
                });
                this->runtime_methods.insert(iter, { std::move(method_unique), method_name, method_name_w, length });
            }
            method->invokers.push_back(invoker);
        }

        void DLRuntimeClass::register_class() {
            liber::function<"DLRF::DLRuntimeClass::register_runtime_class", void>::call(this);
        }

        from::vector<DLRuntimeMethodHolder>& DLRuntimeClass::get_registered_classes() noexcept {
            return *reinterpret_cast<from::vector<DLRuntimeMethodHolder>*>(liber::symbol<"DLRF::DLRuntimeClass::GLOBAL_registered_classes">::get());
        }

        from::vector<DLRuntimeClassPair>& DLRuntimeClass::get_runtime_pairs() noexcept {
            return *reinterpret_cast<from::vector<DLRuntimeClassPair>*>(liber::symbol<"DLRF::DLRuntimeClass::GLOBAL_runtime_pairs">::get());
        }
    }
}