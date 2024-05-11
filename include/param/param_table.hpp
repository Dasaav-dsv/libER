/**
 * @file param_table.hpp
 * @brief ELDEN RING param instances
 *
 * Copyright 2024 libER ELDEN RING API library
 *
 */
#pragma once

#include <detail/preprocessor.hpp>
#include <param/detail/paramdef.hpp>
#include <param/param_defines.hpp>
#include <param/param_iterator.hpp>

#include <cstddef>
#include <cstdint>

namespace from {
namespace param {
template <param_index Index, typename Def>
class param_table {
public:
    using paramdef_type = Def;
    static constexpr param_index index = Index;

    constexpr param_table() = default;

private:
    // LIBERAPI paramdef_type* get_row(row_index_type pos) const;
};

#define LIBER_PARAM_ENTRY(PARAM, PARAMDEF) \
    inline constexpr param_table<param_index::PARAM, paramdef::PARAMDEF> PARAM;

#include <param/detail/paramlist.inl>

#undef LIBER_PARAM_ENTRY
} // namespace param
} // namespace from
