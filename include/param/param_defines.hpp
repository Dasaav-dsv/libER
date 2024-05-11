/**
 * @file param_defines.hpp
 * @brief ELDEN RING param defines and enums
 *
 * Copyright 2024 libER ELDEN RING API library
 *
 */
#pragma once

#include <detail/preprocessor.hpp>
#include <param/detail/paramdef.hpp>

#include <cstddef>
#include <cstdint>

namespace from {
namespace param {
using row_index_type = int32_t;

inline constexpr row_index_type row_index_min = 0;
inline constexpr row_index_type row_index_max = 999'999'999;

#define LIBER_PARAM_ENTRY(PARAM, PARAMDEF) PARAM,

enum class param_index : int {
#include <param/detail/paramlist.inl>
    PARAM_COUNT
};

inline constexpr size_t param_count = size_t(param_index::PARAM_COUNT);

#undef LIBER_PARAM_ENTRY
} // namespace param
} // namespace from
