/**
 * @file param.hpp
 * @brief ELDEN RING param manipulation
 * 
 * Copyright 2024 libER ELDEN RING API library
 * 
 */
#pragma once

#include <param/detail/paramdef.hpp>

namespace from {
namespace param {
#define LIBER_PARAM_ENTRY(PARAM, PARAMDEF) PARAM,  

enum class param_index : int {
#include <param/detail/paramlist.inl>
    PARAM_COUNT
};

#undef LIBER_PARAM_ENTRY
}
}