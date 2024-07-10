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
#include <type_traits>
#include <utility>

namespace from {
namespace param {
/**
 * @brief An interface to a param table of one of the predefined types.
 *
 * @tparam ParamType one of the predefined param types
 */
template <typename ParamType>
class param_table {
public:
    /**
     * @brief The paramdefs this param type uses.
     *
     */
    using paramdef_type = typename ParamType::paramdef_type;

    /**
     * @brief The param index of this param table.
     *
     */
    static constexpr param_index index = ParamType::index;

    /**
     * @brief Param iterator type.
     *
     */
    using iterator = param_iterator<paramdef_type>;

    /**
     * @brief Reverse order param iterator type.
     *
     */
    using reverse_iterator = std::reverse_iterator<iterator>;

    /**
     * @brief Param const iterator type.
     *
     */
    using const_iterator = param_const_iterator<paramdef_type>;

    /**
     * @brief Reverse order param const iterator type.
     *
     */
    using const_reverse_iterator = std::reverse_iterator<const_iterator>;

    constexpr param_table() = default;

    /**
     * @brief Get a param row from this param table by its row index.
     *
     * Performs a binary search on the param table to find a matching
     * param row index and returns the row on success. If the desired param
     * row does not exist, returns a default-initialized param row instead.
     *
     * The bool in the param row/bool pair indicates whether the row exists.
     *
     * Example:
     * @code{.cpp} auto [row, row_exists] =
     *     from::param::EquipParamAccessory[5020]; @endcode
     *
     * @param row The row id.
     * @return std::pair<paramdef_type&, bool>
     */
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

    /**
     * @brief Get the iterator to the first param row in the table.
     *
     * If the table has not been yet initialized, returns a default
     * constructed iterator.
     *
     * @return iterator an iterator to the first param row or a
     * default constructed iterator
     */
    iterator begin() noexcept {
        auto file = this->get_file();
        // Param table is not loaded, return default constructed iterator
        if (!file)
            return iterator{};
        auto& file_ref = *file.reference();
        return iterator(file_ref, 0);
    }

    /**
     * @brief Get the iterator after the last param row in the table.
     *
     * If the table has not been yet initialized, returns a default
     * constructed iterator.
     *
     * @return iterator an iterator past the end of the param table or a
     * default constructed iterator
     */
    iterator end() noexcept {
        auto file = this->get_file();
        // Param table is not loaded, return default constructed iterator
        if (!file)
            return iterator{};
        auto& file_ref = *file.reference();
        return iterator(file_ref, file_ref.row_count);
    }

    /**
     * @brief Get the iterator to the first param row in the table.
     *
     * If the table has not been yet initialized, returns a default
     * constructed iterator.
     *
     * @return const_iterator an iterator to the first param row or a
     * default constructed iterator
     */
    const_iterator begin() const noexcept {
        return const_cast<param_table*>(this)->begin();
    }

    /**
     * @brief Get the iterator after the last param row in the table.
     *
     * If the table has not been yet initialized, returns a default
     * constructed iterator.
     *
     * @return const_iterator an iterator past the end of the param table or a
     * default constructed iterator
     */
    const_iterator end() const noexcept {
        return const_cast<param_table*>(this)->end();
    }

    /**
     * @brief Get the const iterator to the first param row in the table.
     *
     * If the table has not been yet initialized, returns a default
     * constructed iterator.
     *
     * @return const_iterator an iterator to the first param row or a
     * default constructed iterator
     */
    const_iterator cbegin() const noexcept {
        return this->begin();
    }

    /**
     * @brief Get the const iterator after the last param row in the table.
     *
     * If the table has not been yet initialized, returns a default
     * constructed iterator.
     *
     * @return const iterator an iterator past the end of the param table or a
     * default constructed iterator
     */
    const_iterator cend() const noexcept {
        return this->end();
    }

    /**
     * @brief Get the reverse iterator to the last param row in the table.
     *
     * If the table has not been yet initialized, returns a default
     * constructed iterator.
     *
     * @return reverse_iterator an iterator to the last param row or a
     * default constructed iterator
     */
    reverse_iterator rbegin() noexcept {
        return this->end();
    }

    /**
     * @brief Get the reverse iterator before the first param row in the table.
     *
     * If the table has not been yet initialized, returns a default
     * constructed iterator.
     *
     * @return reverse_iterator an iterator before the start of the param table
     * or a default constructed iterator
     */
    reverse_iterator rend() noexcept {
        return this->begin();
    }

    /**
     * @brief Get the reverse iterator to the last param row in the table.
     *
     * If the table has not been yet initialized, returns a default
     * constructed iterator.
     *
     * @return const_reverse_iterator an iterator to the last param row or a
     * default constructed iterator
     */
    const_reverse_iterator rbegin() const noexcept {
        return this->end();
    }

    /**
     * @brief Get the reverse iterator before the first param row in the table.
     *
     * If the table has not been yet initialized, returns a default
     * constructed iterator.
     *
     * @return const_reverse_iterator an iterator before the start of the param
     * table or a default constructed iterator
     */
    const_reverse_iterator rend() const noexcept {
        return this->begin();
    }

    /**
     * @brief Get the reverse iterator to the last param row in the table.
     *
     * If the table has not been yet initialized, returns a default
     * constructed iterator.
     *
     * @return const_reverse_iterator an iterator to the last param row or a
     * default constructed iterator
     */
    const_reverse_iterator crbegin() const noexcept {
        return this->end();
    }

    /**
     * @brief Get the reverse iterator before the first param row in the table.
     *
     * If the table has not been yet initialized, returns a default
     * constructed iterator.
     *
     * @return const_reverse_iterator an iterator before the start of the param
     * table or a default constructed iterator
     */
    const_reverse_iterator crend() const noexcept {
        return this->begin();
    }

private:
    mutable std::unique_ptr<paramdef_type> dummy_param;

    liber::optref<param_file*> get_file() noexcept {
        auto repository = CS::SoloParamRepository::instance();
        if (!repository)
            return std::nullopt;
        return repository.reference().get_param_file(index);
    }
};

/**
 * @brief A helper structure with param type data.
 *
 */
template <param_index Index, typename Def>
struct param_type {
    /**
     * @brief The paramdefs this param uses.
     *
     */
    using paramdef_type = Def;

    /**
     * @brief The param index of this param table.
     *
     */
    static constexpr param_index index = Index;
};

#define LIBER_PARAM_ENTRY(PARAM, PARAMDEF)                                 \
    inline param_table<param_type<param_index::PARAM, paramdef::PARAMDEF>> \
        PARAM;

#include <param/detail/paramlist.inl>

#undef LIBER_PARAM_ENTRY
} // namespace param
} // namespace from
