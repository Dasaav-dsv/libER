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

namespace from {
namespace param {
#define LIBER_PARAM_ENTRY(PARAM, PARAMDEF) PARAM,

enum class param_index : int {
#include <param/detail/paramlist.inl>
    PARAM_COUNT
};

#undef LIBER_PARAM_ENTRY

template <param_index Index, typename Def>
class param_table {
public:
    using paramdef_type = Def;
    static constexpr param_index index = Index;

    constexpr param_table() = default;

private:
    LIBERAPI paramdef_type* get_row(int pos) const;
};

#define LIBER_PARAM_ENTRY(PARAM, PARAMDEF) \
    inline constexpr param_table<param_index::PARAM, paramdef::PARAMDEF> PARAM;

#include <param/detail/paramlist.inl>

#undef LIBER_PARAM_ENTRY
} // namespace param
} // namespace from
