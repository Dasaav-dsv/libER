#pragma once

#include <iterator>
#include <utility>

namespace liber {

using param_row_id = unsigned long long;
using param_row_count = unsigned short;

struct param_row_info {
    param_row_id id;
    ptrdiff_t data_begin_offset;
    ptrdiff_t data_end_offset;
};

template <typename Data>
class param_row_container {
public:
    using base_address_type = unsigned char*;

    class iterator {
    public:
        using size_type = size_t;
        using difference_type = std::ptrdiff_t;
        using value_type = std::pair<param_row_id, Data&>;
        using pointer_type = const std::pair<param_row_id, Data&>*;
        using reference_type = const std::pair<param_row_id, Data&>&;
        using iterator_category = std::bidirectional_iterator_tag;

        iterator() : base_address(nullptr), row(nullptr) {}

        iterator(base_address_type base_address, param_row_info* row)
            : base_address(base_address), row(row) {}

        iterator operator+(size_type value) const {
            return iterator{ base_address, row + value };
        }

        iterator operator-(size_type value) const {
            return iterator{ base_address, row - value };
        }

        size_type operator-(iterator other) const {
            return other.row - row;
        }

        iterator& operator+=(size_type value) {
            row += value;
            return *this;
        }

        iterator& operator-=(size_type value) {
            row -= value;
            return *this;
        }

        iterator& operator--() {
            row--;
            return *this;
        }

        iterator operator--(int) {
            iterator retval = *this;
            --(*this);
            return retval;
        }

        iterator& operator++() {
            row++;
            return *this;
        }

        iterator operator++(int) {
            iterator retval = *this;
            ++(*this);
            return retval;
        }

        bool operator==(iterator other) const {
            return this->base_address == other.base_address
                && this->row == other.row;
        }

        bool operator!=(iterator other) const {
            return !(*this == other);
        }

        value_type operator*() {
            return value_type(this->row->id,
                *reinterpret_cast<Data*>(
                    base_address + row->data_begin_offset));
        }

        const value_type operator*() const {
            return value_type(this->row->id,
                *reinterpret_cast<Data*>(
                    base_address + row->data_begin_offset));
        }

    private:
        base_address_type base_address;
        param_row_info* row;
    };

    iterator begin() {
        return iterator{ base_address, rows };
    }

    iterator end() {
        return iterator{ base_address, rows + size() };
    }

    iterator::value_type operator[](size_t pos) {
        return *iterator{ base_address, rows[pos] };
    }

    size_t size() {
        return num_rows;
    };

    param_row_container(base_address_type base_address, param_row_info* rows,
        size_t num_rows)
        : base_address(base_address), rows(rows), num_rows(num_rows) {}

    param_row_container(const param_row_container&) = delete;

private:
    base_address_type base_address;
    size_t num_rows;
    param_row_info* rows;
};

}; // namespace liber
