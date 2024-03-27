#pragma once

/*
* Unimplemented exceptions and dummy structure definitions.
* For internal use.
*/

#include <sstream>
#include <stdexcept>
#include <source_location>

#include <intrin.h>

#define LIBER_DUMMY [[maybe_unused]]

namespace liber {
    // Exception type for calling functions
    // that have not been implemented in libER, but are defined
    class unimplemented : public std::exception {
        std::string message;
    public:
        unimplemented(std::string&& message) noexcept : message(message) {}
        const char* what() const noexcept { return message.c_str(); }
    };

    // Terminate an unimplemented function.
    // Runs into its own noexcept from the lambda (no warning)
    [[noreturn]] [[maybe_unused]] inline void unimplemented_terminate(std::stringstream& err, void* caller) noexcept {
        [&] { throw liber::unimplemented(err.str()); } ();
        std::terminate();
    }

    void append_module_name_and_base(std::ostream& out, void* caller) noexcept;
}

#define LIBER_UNIMPLEMENTED {                                      \
    void* caller = _ReturnAddress();                               \
    std::stringstream err;                                         \
    err << std::source_location::current().file_name() << ':';     \
    err << std::source_location::current().line() << ':';          \
    err << std::source_location::current().column() << ':';        \
    err << " libER: unimplemented function \"";                    \
    err << std::source_location::current().function_name() << '"'; \
    liber::append_module_name_and_base(err, caller);               \
    liber::unimplemented_terminate(err, caller);                   \
}