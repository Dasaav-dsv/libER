#pragma once

#include <cstddef>
#include <cstdint>
#include <algorithm>

/*
* A symbol repository header that pulls
* addresses of objects and functions from versioned
* .csv files. Check the root/symbols folder for more.
*/

namespace liber {
    template <typename CharT, size_t N>
    struct symbol_name {
        consteval symbol_name() = default;

        consteval symbol_name(const CharT(&str)[N]) {
            std::copy_n(str, N, this->string);
        }

        CharT string[N]{};
    };

    template <symbol_name Name>
    struct symbol;
    
#define LIBER_ADD_SYMBOL(NAME)       \
    template <>                      \
    struct symbol<#NAME> {           \
        static int value;            \
        static void* get() noexcept; \
    };

#include <symbols.inl>

#undef LIBER_ADD_SYMBOL
}