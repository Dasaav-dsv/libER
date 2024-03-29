#pragma once

/*
* A superset of liber_defines for internal use.
* Provides additional function-like macros
* and libER attribute definitions.
*/

// TODO: annotate macros

#include "liber_defines.hpp"

#include <sstream>
#include <stdexcept>
#include <source_location>
#include <intrin.h>

#define LIBER_STRINGIFY_(X) #X
#define LIBER_STRINGIFY(X) LIBER_STRINGIFY_(X)

#define LIBER_WSTRINGIFY__(X) L ## X
#define LIBER_WSTRINGIFY_(X) LIBER_WSTRINGIFY__(#X)
#define LIBER_WSTRINGIFY(X) LIBER_WSTRINGIFY_(X)

#define LIBER_INCLUDIFY(X) <X>

#define LIBER_BIT_FLAG(INDEX) (1ull << (INDEX))

#define LIBER_DUMMY [[maybe_unused]]

#define LIBER_BAD_CALL(REASON) {                                   \
    void* caller = _ReturnAddress();                               \
    std::stringstream err;                                         \
    err << std::source_location::current().file_name() << ':';     \
    err << std::source_location::current().line() << ':';          \
    err << std::source_location::current().column() << ':';        \
    err << " libER: " << LIBER_STRINGIFY(REASON) << " \"";         \
    err << std::source_location::current().function_name() << '"'; \
    liber::append_module_name_and_base(err, caller);               \
    liber::bad_call_terminate(err, caller);                        \
}

#define LIBER_UNIMPLEMENTED LIBER_BAD_CALL(unimplemented function)

#define LIBER_UNIMPLEMENTED_RETURN _unimplemented_return()

#define LIBER_INTERFACE_ONLY = 0;

#define LIBER_INTERFACE LIBER_BAD_CALL(ELDEN RING interface functions cannot be called from explicitly constructed objects:)

namespace liber {
    // Exception type for calling functions
    // that must not be called in libER, but are defined
    class bad_call : public std::exception {
        std::string message;
    public:
        bad_call(std::string&& message) noexcept : message(message) {}
        const char* what() const noexcept { return message.c_str(); }
    };

    // Terminate an invalid function call.
    // Runs into its own noexcept from the lambda (no warning)
    [[noreturn]] [[maybe_unused]] inline void bad_call_terminate(std::stringstream& err, void* caller) noexcept {
        [&] { throw liber::bad_call(err.str()); } ();
        std::terminate();
    }

    void append_module_name_and_base(std::ostream& out, void* caller) noexcept;

    [[noreturn]] [[maybe_unused]] static void _unimplemented_return() LIBER_UNIMPLEMENTED
}
