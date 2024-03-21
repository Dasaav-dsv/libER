#pragma once

#include <cppsv.h>

/*
* A symbol repository header that pulls
* addresses of objects and functions from versioned
* .csv files. Check the root/symbols folder for more.
*/

namespace liber {
    CPPSV_VIEW_BEGIN
#include <1.10.1_0.csv>
    CPPSV_VIEW_NAME(symbol_list)

    template <cppsv::cppsv_field Name>
    struct symbol;
    
#define LIBER_ADD_SYMBOL(NAME)       \
    template <>                      \
    struct symbol<#NAME> {           \
        static void* get() noexcept; \
    };

#include <symbols.inl>

#undef LIBER_ADD_SYMBOL
}