#pragma once

/*
* A superset of liber_defines for internal use.
* Provides additional function-like macros
* and libER attribute definitions.
*/

// TODO: annotate macros

#include "liber_defines.hpp"

#include <cstddef>
#include <cstdint>
#include <sstream>
#include <stdexcept>
#include <source_location>
#include <intrin.h>

#define LIBER_STRINGIFY_(X) #X
#define LIBER_STRINGIFY(X) LIBER_STRINGIFY_(X)

#define LIBER_WSTRINGIFY__(X) L ## X
#define LIBER_WSTRINGIFY_(X) LIBER_WSTRINGIFY__(#X)
#define LIBER_WSTRINGIFY(X) LIBER_WSTRINGIFY_(X)

#ifdef __clang__
#define LIBER_NO_UNIQUE_ADDRESS [[no_unique_address]]
#else
#define LIBER_NO_UNIQUE_ADDRESS [[msvc::no_unique_address]]
#endif

#define LIBER_INCLUDIFY(X) <X>

#define LIBER_BIT_FLAG(INDEX) (1ull << (INDEX))

#define LIBER_DUMMY [[maybe_unused]]

#define LIBER_UNIMPLEMENTED LIBER_BAD_CALL(unimplemented function)

#define LIBER_UNIMPLEMENTED_RETURN _unimplemented_return()

#define LIBER_INTERFACE_ONLY = 0

#define LIBER_INTERFACE LIBER_BAD_CALL(ELDEN RING interface functions cannot be called from explicitly constructed objects:)

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

#define LIBER_CLASS_TRAITS(TRAITS) TRAITS

#define LIBER_CLASS(CLASSNAME) using self = CLASSNAME; \
friend class _liber_asserts_ ## CLASSNAME;

#define LIBER_INTERFACE_CLASS(CLASSNAME)               \
LIBER_CLASS(CLASSNAME)                                 \
CLASSNAME() = delete;                                  \
CLASSNAME(const CLASSNAME&) = delete;                  \
CLASSNAME(CLASSNAME&&) noexcept = delete;              \
CLASSNAME& operator = (const CLASSNAME&) = delete;     \
CLASSNAME& operator = (CLASSNAME&&) noexcept = delete;

#define LIBER_ASSERTS_BEGIN(CLASSNAME) class _liber_assert_ ## CLASSNAME { \
    using _liber_asserts_type = CLASSNAME

#define LIBER_ASSERTS_TEMPLATE_BEGIN(CLASSNAME, ...) class _liber_asserts_ ## CLASSNAME { \
    using _liber_asserts_type = CLASSNAME<__VA_ARGS__>

#define LIBER_ASSERT_SIZE(SIZE) static_assert(sizeof(_liber_asserts_type) == (SIZE), \
LIBER_STRINGIFY(size of type is not SIZE))

#define LIBER_ASSERT_OFFS(OFFSET, MEMBER)                               \
static_assert(__builtin_offsetof(_liber_asserts_type, MEMBER) == (OFFSET), \
LIBER_STRINGIFY(MEMBER is not at expected offset OFFSET))

#define LIBER_ASSERTS_END };

#define LIBER_UNKNOWN__(TYPE, COUNTER) _liber_unk_ ## COUNTER
#define LIBER_UNKNOWN_(TYPE, COUNTER) LIBER_UNKNOWN__(TYPE, COUNTER)
#define LIBER_UNKNOWN(TYPE, ...) TYPE LIBER_UNKNOWN_(TYPE, __COUNTER__){__VA_ARGS__}

#define LIBER_PAD__(TYPE, COUNTER) _liber_pad_ ## TYPE ## _ ## COUNTER
#define LIBER_PAD_(TYPE, COUNTER) LIBER_PAD__(TYPE, COUNTER)
#define LIBER_PAD(TYPE, ...) TYPE LIBER_PAD_(TYPE, __COUNTER__)[(1,##__VA_ARGS__)]{};

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

    // Empty dummy object
    struct dummy {};

    void append_module_name_and_base(std::ostream& out, void* caller) noexcept;

    [[noreturn]] [[maybe_unused]] static void _unimplemented_return() LIBER_UNIMPLEMENTED
}
