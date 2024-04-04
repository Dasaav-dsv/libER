#pragma once

#include <algorithm>
#include <cstddef>
#include <cstdint>

#include <detail/literal_string.h>
#include <detail/preprocessor.h>

/*
 * A symbol repository header that pulls
 * addresses of objects and functions from versioned
 * .csv files. Check the root/symbols directory for more.
 */

namespace liber {
template <literal_string Name>
struct symbol;

#define LIBER_ADD_SYMBOL(NAME)                                                 \
    template <>                                                                \
    struct symbol<#NAME> {                                                     \
        static int value;                                                      \
        static void* get() noexcept;                                           \
    };

// clang-format off
#include LIBER_INCLUDIFY(LIBER_TARGET_VERSION/LIBER_SYMBOL_LIST)
// clang-format on

#undef LIBER_ADD_SYMBOL
} // namespace liber