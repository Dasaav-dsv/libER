/**
 * @file param_table.hpp
 * @brief ELDEN RING param instances
 *
 * Copyright 2024 libER ELDEN RING API library
 *
 */
#pragma once

#include <coresystem/cs_param.hpp>
#include <detail/optref.hpp>
#include <detail/preprocessor.hpp>
#include <param/detail/paramdef.hpp>
#include <param/param_defines.hpp>
#include <param/param_iterator.hpp>

#include <algorithm>
#include <cstddef>
#include <cstdint>
#include <iterator>
#include <utility>

namespace from {
namespace param {
template <param_index Index, typename Def>
class param_table {
public:
    using paramdef_type = Def;
    static constexpr param_index index = Index;

    using iterator = param_iterator<paramdef_type>;
    using reverse_iterator = std::reverse_iterator<iterator>;

    constexpr param_table() = default;

    std::pair<paramdef_type&, bool> operator[](
        row_index_type row) const noexcept {
        iterator first = this->begin();
        iterator last = this->end();
        iterator found = std::lower_bound(first, last, row,
            [](const auto& cmp, const auto& row) { return cmp.first < row; });
        if (found == last || (*found).first != row) {
            static paramdef_type dummy_param;
            return { dummy_param, false };
        }
        return { (*found).second, true };
    }

    iterator begin() noexcept {
        auto file = this->get_file();
        // Param table is not loaded, return default constructed iterator
        if (!file)
            return iterator{};
        return iterator(*file.reference(), 0);
    }

    iterator end() noexcept {
        auto file = this->get_file();
        // Param table is not loaded, return default constructed iterator
        if (!file)
            return iterator{};
        return iterator(*file.reference(), file.reference()->row_count);
    }

    iterator begin() const noexcept {
        return const_cast<param_table<Index, Def>*>(this)->begin();
    }

    iterator end() const noexcept {
        return const_cast<param_table<Index, Def>*>(this)->end();
    }

    reverse_iterator rbegin() noexcept {
        return this->end();
    }

    reverse_iterator rend() noexcept {
        return this->begin();
    }

    reverse_iterator rbegin() const noexcept {
        return this->end();
    }

    reverse_iterator rend() const noexcept {
        return this->begin();
    }

private:
    liber::optref<param_file*> get_file() noexcept {
        auto repository = CS::SoloParamRepositoryImp::instance();
        if (!repository)
            return std::nullopt;
        return repository.reference().get_param_file(index);
    }
};

#define LIBER_PARAM_ENTRY(PARAM, PARAMDEF) \
    inline constexpr param_table<param_index::PARAM, paramdef::PARAMDEF> PARAM;

#include <param/detail/paramlist.inl>

#undef LIBER_PARAM_ENTRY
} // namespace param
} // namespace from
