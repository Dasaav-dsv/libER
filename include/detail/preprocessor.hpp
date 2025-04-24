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
#define LIBER_STRINGIFY_LITERAL(X) #X
#define LIBER_STRINGIFY(X) LIBER_STRINGIFY_LITERAL(X)

// Interpret token X as a wchar_t string
#define LIBER_WSTRINGIFY_(X) L##X
#define LIBER_WSTRINGIFY_LITERAL(X) LIBER_WSTRINGIFY_(#X)
#define LIBER_WSTRINGIFY(X) LIBER_WSTRINGIFY_LITERAL(X)

// Set the bit at index INDEX
#define LIBER_BIT_FLAG(INDEX) (1ull << (INDEX))

// Flag for unused objects
#define LIBER_DUMMY [[maybe_unused]]

// A class declaration macro.
// Allows assert macros to access private members
#define LIBER_CLASS(CLASSNAME) \
    using self = CLASSNAME;    \
    friend class _liber_asserts_##CLASSNAME

// A class declaration with deleted constructors.
// Only instances created by ELDEN RING directly may be used
#define LIBER_INTERFACE_CLASS(CLASSNAME)             \
    LIBER_CLASS(CLASSNAME);                          \
    CLASSNAME() = delete;                            \
    CLASSNAME(const CLASSNAME&) = delete;            \
    CLASSNAME(CLASSNAME&&) noexcept = delete;        \
    CLASSNAME& operator=(const CLASSNAME&) = delete; \
    CLASSNAME& operator=(CLASSNAME&&) noexcept = delete

// The beginning of a libER class assert block.
// LIBER_ASSERTS_END closes the block 
#define LIBER_ASSERTS_BEGIN(CLASSNAME) \
    class _liber_asserts_##CLASSNAME { \
        using _liber_asserts_type = CLASSNAME

// See above. Used for template classes
#define LIBER_ASSERTS_TEMPLATE_BEGIN(CLASSNAME, ...) \
    class _liber_asserts_##CLASSNAME {               \
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
// Empty dummy object
struct dummy {};
}
