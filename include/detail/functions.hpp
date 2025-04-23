#pragma once

#include "symbols.hpp"

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
template <sym_table::sym_key Name, typename Return>
struct function {
    template <typename... Args>
    static Return call(Args&&... args) {
        using symbol = liber::symbol<Name>;
        using function_type = Return(std::decay_t<Args>...);
        decltype(auto) function =
            symbol::template as_unchecked<function_type>();
        return function(args...);
    }
};

// Template partial specialization
// for functions or methods without a return value
template <sym_table::sym_key Name>
struct function<Name, void> {
    template <typename... Args>
    static void call(Args&&... args) {
        using symbol = liber::symbol<Name>;
        using function_type = void(std::decay_t<Args>...);
        decltype(auto) function =
            symbol::template as_unchecked<function_type>();
        function(args...);
    }
};
} // namespace liber
