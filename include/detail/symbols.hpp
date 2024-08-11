#pragma once

#include <algorithm>
#include <cstddef>
#include <cstdint>

#include <detail/literal_string.hpp>
#include <detail/preprocessor.hpp>

/*
 * A symbol repository header that pulls
 * addresses of objects and functions from versioned
 * .csv files. Check the root/symbols directory for more.
 */

namespace liber {
template <literal_string Name>
struct symbol;

#define LIBER_ADD_SYMBOL(NAME)       \
    template <>                      \
    struct symbol<#NAME> {           \
        static void* get() noexcept; \
    };

#include <symbol_list.inl>

#undef LIBER_ADD_SYMBOL
} // namespace liber
