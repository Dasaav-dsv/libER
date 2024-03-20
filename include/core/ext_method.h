#pragma once

#include <type_traits>

namespace libER {
    template <typename>
    union ExtMethodHolder;

    template <class Class, auto Function, typename = decltype(Function)>
    class ExtMethod;

    template <class Class, auto Function, typename Result, class ClassP, typename...Args>
    class ExtMethod<Class, Function, Result(*)(ClassP, Args...)> {
        static_assert(std::is_same_v<const volatile Class, const volatile typename std::remove_pointer_t<ClassP>>,
            "Bound function must take a pointer of its class type");
        Class* instance;
    public:
        auto operator()(Args...args) {
            if constexpr (std::is_same_v<Result, void>)
                Function(this->instance, args...);
            else
                return Function(this->instance, args...);
        }
    };
}