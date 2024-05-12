/**
 * @file param_iterator.hpp
 * @brief param_table iterator
 *
 * Copyright 2024 libER ELDEN RING API library
 *
 */
#pragma once

#include <detail/preprocessor.hpp>
#include <param/detail/paramdef.hpp>
#include <param/param_defines.hpp>
#include <param/param_file.hpp>

#include <compare>
#include <cstddef>
#include <cstdint>
#include <iterator>
#include <type_traits>
#include <utility>

namespace from {
namespace param {
template <typename Def>
/**
 * @brief The bidirectional param table iterator.
 *
 */
class param_iterator {
    uintptr_t file_start;
    param_file::param_row_locator* ptr;

public:
    /**
     * @brief Bidirectional iterator concept tag.
     *
     */
    using iterator_concept = std::bidirectional_iterator_tag;

    /**
     * @brief Bidirectional iterator category tag.
     *
     */
    using iterator_category = std::bidirectional_iterator_tag;

    /**
     * @brief Dereferencing returns a row index/row pair.
     *
     */
    using value_type = std::pair<row_index_type, Def&>;

    /**
     * @brief Iterator difference type.
     *
     */
    using difference_type = ptrdiff_t;

    /**
     * @brief Iterator pointer type.
     *
     */
    using pointer = value_type*;

    /**
     * @brief Iterator reference type.
     *
     */
    using reference = value_type&;

    /**
     * @brief Default construct a param iterator.
     *
     * All default constructed param iterators are equal.
     *
     */
    param_iterator() noexcept : file_start(0), ptr(nullptr) {}

    /**
     * @brief Construct a param iterator at a given row entry position.
     *
     * @param file the param file
     * @param pos the entry index in the range [0, file.row_count)
     */
    param_iterator(const param_file& file, difference_type pos) noexcept
        : file_start(file.get_file_start()),
          ptr(&*file.get_param_row_locators().begin() + pos) {}

    /**
     * @brief Construct a new param iterator (copy constructor).
     *
     */
    param_iterator(const param_iterator& other) noexcept
        : file_start(other.file_start), ptr(other.ptr) {}

    /**
     * @brief Construct a new param iterator (const iterator promotion).
     *
     */
    param_iterator(
        const param_iterator<std::remove_const_t<Def>>& other) noexcept
        requires(std::is_const_v<Def>)
        : file_start(other.file_start), ptr(other.ptr) {}

    /**
     * @brief Dereference the iterator at the current position to get a row
     * index/row pair.
     *
     * @return value_type the row index/row pair at the current iterator
     * position
     */
    value_type operator*() const noexcept {
        return { this->ptr->row,
            *reinterpret_cast<Def*>(
                this->file_start + this->ptr->file_offset) };
    }

    /**
     * @brief Advance the iterator forwards by one entry (precrement).
     *
     * @return param_iterator& the new iterator position
     */
    param_iterator& operator++() noexcept {
        ++this->ptr;
        return *this;
    }

    /**
     * @brief Advance the iterator forwards by one entry (postcrement).
     *
     * @return param_iterator the old iterator position
     */
    param_iterator operator++(int) noexcept {
        param_iterator tmp = *this;
        ++this->ptr;
        return tmp;
    }

    /**
     * @brief Advance the iterator backwards by one entry (predecrement).
     *
     * @return param_iterator& the new iterator position
     */
    param_iterator& operator--() noexcept {
        --this->ptr;
        return *this;
    }

    /**
     * @brief Advance the iterator backwards by one entry (postdecrement).
     *
     * @return param_iterator the old iterator position
     */
    param_iterator operator--(int) noexcept {
        param_iterator tmp = *this;
        --this->ptr;
        return tmp;
    }

    /**
     * @brief Advance the iterator forwards by offset entries.
     *
     * @param offset signed offset to advance by
     * @return param_iterator& the new iterator position
     */
    param_iterator& operator+=(difference_type offset) noexcept {
        this->ptr += offset;
        return *this;
    }

    /**
     * @brief Add offset entries to the iterator.
     *
     * @param offset signed offset to add
     * @return param_iterator the new iterator
     */
    param_iterator operator+(difference_type offset) const noexcept {
        param_iterator tmp = *this;
        tmp += offset;
        return tmp;
    }

    /**
     * @brief Advance the iterator backwards by offset entries.
     *
     * @param offset signed offset to advance by
     * @return param_iterator& the new iterator position
     */
    param_iterator& operator-=(difference_type offset) noexcept {
        this->ptr -= offset;
        return *this;
    }

    /**
     * @brief Subtract offset entries from the iterator.
     *
     * @param offset signed offset to subtract
     * @return param_iterator the new iterator
     */
    param_iterator operator-(difference_type offset) const noexcept {
        param_iterator tmp = *this;
        tmp -= offset;
        return tmp;
    }

    /**
     * @brief How many steps would it take from this iterator
     * to reach iterator rhs?
     *
     * The result is only valid if the iterators point to the same
     * param range.
     *
     * @tparam OtherDef optionally const matching paramdef type
     * @param rhs another iterator (can be a const iterator) to the same range
     * @return difference_type the entry difference
     */
    template <typename OtherDef>
    difference_type operator-(
        const param_iterator<OtherDef>& rhs) const noexcept
        requires(std::is_same_v<const Def, const OtherDef>)
    {
        return static_cast<difference_type>(this->ptr - rhs.ptr);
    }

    /**
     * @brief Param table iterator subscript.
     *
     * @param offset the param entry offset from the current iterator position
     * @return value_type the row index/row pair
     */
    value_type operator[](difference_type offset) const noexcept {
        return *(*this + offset);
    }

    /**
     * @brief The iterator equality comparison operator.
     *
     * Any iterators pointing to the same param row are equal,
     * as are any default constructed iterators.
     *
     * Operator != is synthesized from this operator.
     *
     * @tparam OtherDef optionally const matching paramdef type
     * @param rhs another iterator (can be a const iterator)
     * @return true iterators are equal
     * @return false iterators are not equal
     */
    template <typename OtherDef>
    bool operator==(const param_iterator<OtherDef>& rhs) const noexcept
        requires(std::is_same_v<const Def, const OtherDef>)
    {
        return this->ptr == rhs.ptr;
    }

    /**
     * @brief The iterator relation operator in terms of row indices.
     *
     * @tparam OtherDef optionally const matching paramdef type
     * @param rhs another iterator (can be a const iterator)
     * @return std::strong_ordering the relation
     */
    template <typename OtherDef>
    std::strong_ordering operator<=>(
        const param_iterator<OtherDef>& rhs) const noexcept
        requires(std::is_same_v<const Def, const OtherDef>)
    {
        return this->ptr <=> rhs.ptr;
    }

private:
    template <typename Def>
    friend class param_iterator;

    template <typename ParamType>
    friend class param_table;

    param_iterator(const param_iterator<const Def>& other) noexcept
        requires(!std::is_const_v<Def>)
        : file_start(other.file_start), ptr(other.ptr) {}
};

template <typename Def>
using param_const_iterator = param_iterator<const Def>;
} // namespace param
} // namespace from
