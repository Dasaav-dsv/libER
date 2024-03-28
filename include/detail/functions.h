#pragma once

#include "symbols.h"

#include <type_traits>

/*
* A way for interpreting symbols retrieved by symbols.h as invokable
* functions and methods, NOT forwarding arguments, getting the return value.
* The "backend" of the libER <-> ELDEN RING ABI.
* NOTE: This is equivalent to casting a memory address to a function
* pointer and calling it. NO CHECKS can be performed at any step.
* As is, it is meant for internal use only.
*/

namespace liber {
    // Base template, "Name" can be
    // *any* imported symbol name.
    // Transition: no forwarding, only pass-by-value.
    // Passing references to the ELDEN RING ABI
    // is more error-prone, automatic moves are
    // not an option. 
    template <literal_string Name, typename Return>
    struct function {
        template <typename...Args>
        static inline Return call(Args...args) {
            return reinterpret_cast<Return(*)(std::decay_t<Args>...)>(
                liber::symbol<Name>::get())(args...);
        }
    };

    // Template partial specialization 
    // for functions or methods without a return value
    template <literal_string Name>
    struct function<Name, void> {
        template <typename...Args>
        static inline void call(Args&&...args) {
            reinterpret_cast<void(*)(Args...)>(
                liber::symbol<Name>::get())(std::forward<Args>(args)...);
        }
    };
}