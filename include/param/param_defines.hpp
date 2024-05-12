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
/**
 * @brief Signed 32-bit integers are used to represent param row indices.
 *
 */
using row_index_type = int32_t;

/**
 * @brief The smallest param row index.
 * 
 */
inline constexpr row_index_type row_index_min = 0;

/**
 * @brief The biggest param row index.
 * 
 * (it is not INT_MAX!)
 * 
 */
inline constexpr row_index_type row_index_max = 999'999'999;

/**
 * @brief The index for specifying no param row.
 * 
 * This may be used in param cells that refer to other params
 * to specify no reference.
 * 
 */
inline constexpr row_index_type row_index_none = -1;


#define LIBER_PARAM_ENTRY(PARAM, PARAMDEF) PARAM,

/**
 * @brief An enum of all param tables as they appear in order.
 * 
 * Contains every param type used.
 * 
 */
enum class param_index : int {
#include <param/detail/paramlist.inl>
    PARAM_COUNT
};

/**
 * @brief The total number of all defined param tables.
 * 
 */
inline constexpr size_t param_count = size_t(param_index::PARAM_COUNT);

#undef LIBER_PARAM_ENTRY
} // namespace param
} // namespace from
