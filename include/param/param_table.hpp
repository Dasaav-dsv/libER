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
#include <atomic>
#include <cstddef>
#include <cstdint>
#include <iterator>
#include <memory>
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
    using const_iterator = param_const_iterator<paramdef_type>;
    using const_reverse_iterator = std::reverse_iterator<const_iterator>;

    constexpr param_table() = default;

    std::pair<paramdef_type&, bool> operator[](
        row_index_type row) const noexcept {
        iterator first = this->begin();
        iterator last = this->end();
        iterator found = std::lower_bound(first, last, row,
            [](const auto& cmp, const auto& row) { return cmp.first < row; });
        if (found == last || (*found).first != row) {
            if (!this->dummy_param) {
                auto swap = std::make_unique<paramdef_type>();
                std::atomic_thread_fence(std::memory_order_seq_cst);
                this->dummy_param.swap(swap);
                std::atomic_thread_fence(std::memory_order_seq_cst);
            }
            return { *this->dummy_param, false };
        }
        return { (*found).second, true };
    }

    iterator begin() noexcept {
        auto file = this->get_file();
        // Param table is not loaded, return default constructed iterator
        if (!file)
            return iterator{};
        auto& file_ref = *file.reference();
        return iterator(file_ref, 0);
    }

    iterator end() noexcept {
        auto file = this->get_file();
        // Param table is not loaded, return default constructed iterator
        if (!file)
            return iterator{};
        auto& file_ref = *file.reference();
        return iterator(file_ref, file_ref.row_count);
    }

    const_iterator begin() const noexcept {
        return const_cast<param_table<Index, Def>*>(this)->begin();
    }

    const_iterator end() const noexcept {
        return const_cast<param_table<Index, Def>*>(this)->end();
    }

    const_iterator cbegin() const noexcept {
        return this->begin();
    }

    const_iterator cend() const noexcept {
        return this->end();
    }

    reverse_iterator rbegin() noexcept {
        return this->end();
    }

    reverse_iterator rend() noexcept {
        return this->begin();
    }

    const_reverse_iterator rbegin() const noexcept {
        return this->end();
    }

    const_reverse_iterator rend() const noexcept {
        return this->begin();
    }

    const_reverse_iterator crbegin() const noexcept {
        return this->end();
    }

    const_reverse_iterator crend() const noexcept {
        return this->begin();
    }

private:
    mutable std::unique_ptr<paramdef_type> dummy_param;

    liber::optref<param_file*> get_file() noexcept {
        auto repository = CS::SoloParamRepositoryImp::instance();
        if (!repository)
            return std::nullopt;
        return repository.reference().get_param_file(index);
    }
};

#define LIBER_PARAM_ENTRY(PARAM, PARAMDEF) \
    inline param_table<param_index::PARAM, paramdef::PARAMDEF> PARAM;

#include <param/detail/paramlist.inl>

#undef LIBER_PARAM_ENTRY
} // namespace param
} // namespace from
