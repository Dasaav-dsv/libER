/**
 * @file param.hpp
 * @brief ELDEN RING param manipulation
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

#undef LIBER_PARAM_ENTRY

template <typename Def>
class param_iterator {
    uintptr_t file_start;
    struct row_locator {
        row_index_type row;
        uintptr_t file_offset;
        uintptr_t file_end;
    }* ptr;
public:
    using value_type = Def;
};

template <param_index Index, typename Def>
class param_table {
public:
    using paramdef_type = Def;
    static constexpr param_index index = Index;

    constexpr param_table() = default;

private:
    LIBERAPI paramdef_type* get_row(row_index_type pos) const;
};

#define LIBER_PARAM_ENTRY(PARAM, PARAMDEF) \
    inline constexpr param_table<param_index::PARAM, paramdef::PARAMDEF> PARAM;

#include <param/detail/paramlist.inl>

#undef LIBER_PARAM_ENTRY
} // namespace param
} // namespace from
