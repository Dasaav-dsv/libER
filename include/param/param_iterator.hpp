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
class param_iterator {
    uintptr_t file_start;
    param_file::param_row_locator* ptr;

public:
    using iterator_concept = std::bidirectional_iterator_tag;
    using iterator_category = std::bidirectional_iterator_tag;
    using value_type = std::pair<row_index_type, Def&>;
    using difference_type = ptrdiff_t;
    using pointer = value_type*;
    using reference = value_type&;

    param_iterator() noexcept : file_start(0), ptr(nullptr) {}

    param_iterator(const param_file& file, difference_type pos) noexcept
        : file_start(file.get_file_start()),
          ptr(&*file.get_param_row_locators().begin() + pos) {}

    param_iterator(const param_iterator& other) noexcept
        : file_start(other.file_start), ptr(other.ptr) {}

    value_type operator*() const noexcept {
        return { this->ptr->row,
            *reinterpret_cast<Def*>(
                this->file_start + this->ptr->file_offset) };
    }

    param_iterator& operator++() noexcept {
        ++this->ptr;
        return *this;
    }

    param_iterator operator++(int) noexcept {
        param_iterator tmp = *this;
        ++this->ptr;
        return tmp;
    }

    param_iterator& operator--() noexcept {
        --this->ptr;
        return *this;
    }

    param_iterator operator--(int) noexcept {
        param_iterator tmp = *this;
        --this->ptr;
        return tmp;
    }

    param_iterator& operator+=(difference_type offset) noexcept {
        this->ptr += offset;
        return *this;
    }

    param_iterator operator+(difference_type offset) const noexcept {
        param_iterator tmp = *this;
        tmp += offset;
        return tmp;
    }

    param_iterator& operator-=(difference_type offset) noexcept {
        this->ptr -= offset;
        return *this;
    }

    param_iterator operator-(difference_type offset) const noexcept {
        param_iterator tmp = *this;
        tmp -= offset;
        return tmp;
    }

    difference_type operator-(const param_iterator& rhs) const noexcept {
        return static_cast<difference_type>(this->ptr - rhs.ptr);
    }

    value_type operator[](difference_type offset) const noexcept {
        return *(*this + offset);
    }

    bool operator==(const param_iterator& rhs) const noexcept {
        return this->ptr == rhs.ptr;
    }

    std::strong_ordering operator<=>(const param_iterator& rhs) const noexcept {
        return this->ptr <=> rhs.ptr;
    }
};
} // namespace param
} // namespace from
