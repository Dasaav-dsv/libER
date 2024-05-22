#pragma once

/*
 * A superset of liber_defines for internal use.
 * Provides additional function-like macros
 * and libER attribute definitions.
 */

#include "defines.hpp"

#include <cstddef>
#include <cstdint>
#include <intrin.h>
#include <source_location>
#include <sstream>
#include <stdexcept>

// Interpret token X as a char string
#define LIBER_STRINGIFY_(X) #X
#define LIBER_STRINGIFY(X) LIBER_STRINGIFY_(X)

// Interpret token X as a wchar_t string
#define LIBER_WSTRINGIFY__(X) L##X
#define LIBER_WSTRINGIFY_(X) LIBER_WSTRINGIFY__(#X)
#define LIBER_WSTRINGIFY(X) LIBER_WSTRINGIFY_(X)

// Interpret token X as an include parameter
#define LIBER_INCLUDIFY(X) <X>

// Set the bit at index INDEX
#define LIBER_BIT_FLAG(INDEX) (1ull << (INDEX))

// Flag for unused objects
#define LIBER_DUMMY [[maybe_unused]]

// Function body stub for functions that have not been implemented
// Useful for filling out unknown vtable entries of concrete instances
#define LIBER_UNIMPLEMENTED LIBER_BAD_CALL(unimplemented function)

// Early-abort return stub
#define LIBER_UNIMPLEMENTED_RETURN _unimplemented_return()

// Pure method in a class that libER only provides an interface for.
// In ELDEN RING, it may be a concrete class, but not implemented fully
// in libER, hence it is interface only
#define LIBER_INTERFACE_ONLY = 0

// "Pure" method in a concrete class that libER provides a constructor for.
// These methods are not meant to be called by the game or by the library
#define LIBER_INTERFACE                                                 \
    LIBER_BAD_CALL(ELDEN RING interface functions cannot be called from \
            explicitly constructed objects:)

// Above with an override specifier, see LIBER_INTERFACE
#define LIBER_INTERFACE_OVERRIDE                                            \
    override LIBER_BAD_CALL(ELDEN RING interface functions cannot be called \
            from explicitly constructed objects:)

// Fancy error message macro including the call origin
#define LIBER_BAD_CALL(REASON)                                         \
    {                                                                  \
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

// A class declaration macro.
// Allows assert macros to access private members
#define LIBER_CLASS(CLASSNAME) \
    using self = CLASSNAME;    \
    template <typename>        \
    friend class _liber_asserts

// A class declaration with deleted constructors.
// Only instances created by ELDEN RING directly may be used
#define LIBER_INTERFACE_CLASS(CLASSNAME)             \
    LIBER_CLASS(CLASSNAME);                          \
    CLASSNAME() = delete;                            \
    CLASSNAME(const CLASSNAME&) = delete;            \
    CLASSNAME(CLASSNAME&&) noexcept = delete;        \
    CLASSNAME& operator=(const CLASSNAME&) = delete; \
    CLASSNAME& operator=(CLASSNAME&&) noexcept = delete

template <typename>
class _liber_asserts;

// The beginning of a libER class assert block.
// LIBER_ASSERTS_END closes the block
#define LIBER_ASSERTS_BEGIN(CLASSNAME) \
    template <>                        \
    class _liber_asserts<CLASSNAME> {  \
        using _liber_asserts_type = CLASSNAME

// See above. Used for template classes
#define LIBER_ASSERTS_TEMPLATE_BEGIN(CLASSNAME, ...) \
    template <>                                      \
    class _liber_asserts<CLASSNAME<__VA_ARGS__>> {   \
        using _liber_asserts_type = CLASSNAME<__VA_ARGS__>

// Assert the size of an instance of the class
#define LIBER_ASSERT_SIZE(SIZE)                          \
    static_assert(sizeof(_liber_asserts_type) == (SIZE), \
        LIBER_STRINGIFY(size of type is not SIZE))

// Assert the offset of a member variable of the class
#define LIBER_ASSERT_OFFS(OFFSET, MEMBER)                                      \
    static_assert(__builtin_offsetof(_liber_asserts_type, MEMBER) == (OFFSET), \
        LIBER_STRINGIFY(MEMBER is not at expected offset OFFSET))

// Close the asserts block that begins with
// LIBER_ASSERTS_BEGIN or LIBER_ASSERTS_TEMPLATE_BEGIN
#define LIBER_ASSERTS_END }

// Generates a unique identifier for variables
// and functions. These variables may not be accessed.
#define LIBER_XUNKNOWN_(COUNTER) _liber_unk_##COUNTER
#define LIBER_XUNKNOWN(COUNTER) LIBER_XUNKNOWN_(COUNTER)
#define liber_unknown LIBER_XUNKNOWN(__COUNTER__)

namespace liber {
// Exception type for calling functions
// that must not be called in libER, but are defined
class bad_call : public std::exception {
    std::string message;

public:
    bad_call(std::string&& message) noexcept : message(message) {}
    const char* what() const noexcept {
        return message.c_str();
    }
};

// Terminate an invalid function call.
// Runs into its own noexcept from the lambda (no warning)
[[noreturn]] inline void bad_call_terminate(std::stringstream& err,
    void* caller) noexcept {
    [&] { throw liber::bad_call(err.str()); }();
    std::terminate();
}

// Empty dummy object
struct dummy {};

// Format the origin of a call as a string in a stream
LIBERAPI void append_module_name_and_base(std::ostream& out,
    void* caller) noexcept;

// Early-abort return
[[noreturn]] static void _unimplemented_return() LIBER_UNIMPLEMENTED
}
