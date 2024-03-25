#pragma once

#include <type_traits>

/*
* TODO: desc
*/

namespace liber {
    template <typename>
    union ext_method_holder;

    template <class Class, auto Function, typename = decltype(Function)>
    class ext_method;

    template <class Class, auto Function, typename Result, class ClassP, typename...Args>
    class ext_method<Class, Function, Result(*)(ClassP, Args...)> {
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

#define LIBER_EXT_METHOD_ACCESSOR_FOR(CLASS)         \
    template <typename Base = CLASS>                 \
    auto operator->() noexcept {                     \
        return liber::ext_method_holder<Base>(this); \
    }                                                \
    template <typename Base = CLASS>                 \
    auto operator->() const noexcept {               \
        return liber::ext_method_holder<Base>(this); \
    }

#define LIBER_EXT_METHOD_HOLDER_BEGIN(CLASS)            \
    using _cl = CLASS;                                  \
    template <> union liber::ext_method_holder<CLASS> { \
    const CLASS* instance;                              \
    auto operator->() noexcept {                        \
        return this;                                    \
    }                                                   \
    auto operator->() const noexcept {                  \
        return this;                                    \
    }

#define LIBER_EXT_METHOD(NAME) liber::ext_method<_cl, NAME> NAME

#define LIBER_EXT_METHOD_HOLDER_END };
}