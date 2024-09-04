#pragma once

/*
 * A superset of liber_defines for internal use.
 * Provides additional function-like macros
 * and libER attribute definitions.
 */

// TODO: annotate macros

#include "defines.hpp"

#include <cstddef>
#include <cstdint>
#include <intrin.h>
#include <source_location>
#include <sstream>
#include <stdexcept>

#define LIBER_STRINGIFY_LITERAL(X) #X
#define LIBER_STRINGIFY(X) LIBER_STRINGIFY_LITERAL(X)

#define LIBER_WSTRINGIFY_(X) L##X
#define LIBER_WSTRINGIFY_LITERAL(X) LIBER_WSTRINGIFY_(#X)
#define LIBER_WSTRINGIFY(X) LIBER_WSTRINGIFY_LITERAL(X)

#define LIBER_BIT_FLAG(INDEX) (1ull << (INDEX))

#define LIBER_DUMMY [[maybe_unused]]

#define LIBER_CLASS(CLASSNAME) \
    using self = CLASSNAME;    \
    friend class _liber_asserts_##CLASSNAME

#define LIBER_INTERFACE_CLASS(CLASSNAME)             \
    LIBER_CLASS(CLASSNAME);                          \
    CLASSNAME() = delete;                            \
    CLASSNAME(const CLASSNAME&) = delete;            \
    CLASSNAME(CLASSNAME&&) noexcept = delete;        \
    CLASSNAME& operator=(const CLASSNAME&) = delete; \
    CLASSNAME& operator=(CLASSNAME&&) noexcept = delete

#define LIBER_ASSERTS_BEGIN(CLASSNAME) \
    class _liber_asserts_##CLASSNAME { \
        using _liber_asserts_type = CLASSNAME

#define LIBER_ASSERTS_TEMPLATE_BEGIN(CLASSNAME, ...) \
    class _liber_asserts_##CLASSNAME {               \
        using _liber_asserts_type = CLASSNAME<__VA_ARGS__>

#define LIBER_ASSERT_SIZE(SIZE)                          \
    static_assert(sizeof(_liber_asserts_type) == (SIZE), \
        LIBER_STRINGIFY(size of type is not SIZE))

#define LIBER_ASSERT_OFFS(OFFSET, MEMBER)                                      \
    static_assert(__builtin_offsetof(_liber_asserts_type, MEMBER) == (OFFSET), \
        LIBER_STRINGIFY(MEMBER is not at expected offset OFFSET))

#define LIBER_ASSERTS_END }

#define LIBER_XUNKNOWN_(COUNTER) _liber_unk_##COUNTER
#define LIBER_XUNKNOWN(COUNTER) LIBER_XUNKNOWN_(COUNTER)
#define liber_unknown LIBER_XUNKNOWN(__COUNTER__)

namespace liber {
// Empty dummy object
struct dummy {};
}
