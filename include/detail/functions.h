#pragma once

#include "symbols.h"

#include <utility>

/*
* A way for interpreting symbols retrieved by symbols.h as invokable
* functions and methods, forwarding arguments and getting the return value.
* NOTE: This is equivalent to casting a memory address to a function
* pointer and calling it. NO CHECKS can be performed at any step.
* As is, it is meant for internal use only.
*/

namespace liber {
    // Base template, uses perfect forwarding.
    // "Name" can be *any* imported symbol name,
    // so excersice caution!
    template <symbol_name Name, typename Return>
    struct function {
        template <typename...Args>
        static inline Return call(Args&&...args) {
            return reinterpret_cast<Return(*)(Args...)>(
                liber::symbol<Name>::get())(std::forward<Args>(args)...);
        }
    };

    // Template partial specialization 
    // for functions or methods without a return value
    template <symbol_name Name>
    struct function<Name, void> {
        template <typename...Args>
        static inline void call(Args&&...args) {
            reinterpret_cast<void(*)(Args...)>(
                liber::symbol<Name>::get())(std::forward<Args>(args)...);
        }
    };
}