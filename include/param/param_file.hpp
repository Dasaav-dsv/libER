/**
 * @file param_file.hpp
 * @brief ELDEN RING param file layouts
 *
 * Copyright 2024 libER ELDEN RING API library
 *
 */
#pragma once

#include <param/param_defines.hpp>

#include <cstddef>
#include <cstdint>
#include <span>

namespace from {
namespace param {
/**
 * @brief The layout of a .param file.
 *
 * .param files contain whole param tables of a given param type.
 *
 */
struct param_file {
    /**
     * @brief The "end" offset, does not always point to valid data.
     *
     * Most often points to the last 16 bytes of the file.
     *
     */
    uint32_t _end;

    /**
     * @brief The short data offset (always 0), purpose is unclear.
     *
     */
    uint16_t data_offset;
    uint16_t liber_unknown;

    /**
     * @brief The paramdef version.
     *
     */
    uint16_t paramdef_version;

    /**
     * @brief How many rows there are in the param table.
     *
     * Note it is a 16-bit unsigned integer, therefore only 65535 rows
     * may be defined in a single param file at once.
     *
     */
    uint16_t row_count;

    /**
     * @brief Offset of the param type string.
     *
     * The type string is a null terminated char string containing the
     * paramdef/param type name.
     *
     */
    uint64_t param_type_offset;
    uint64_t liber_unknown[3];

    /**
     * @brief The offset of the raw param data.
     *
     */
    uint64_t param_data_offset;
    uint64_t liber_unknown;

    /**
     * @brief An instance of a structure describing a param table entry later in
     * the file.
     *
     */
    struct param_row_locator {
        /**
         * @brief The param row index.
         *
         */
        row_index_type row;

        /**
         * @brief The offset (from the start of the file) to this param's row
         * data.
         *
         */
        uintptr_t file_offset;

        /**
         * @brief The offset (from the start of the file) to the end of the
         * file.
         *
         * This field is the same for all param locators.
         *
         */
        uintptr_t file_end;
    };

    /**
     * @brief Get the file start as an integer pointer representation.
     *
     * @return uintptr_t the file start pointer
     */
    uintptr_t get_file_start() const noexcept {
        return reinterpret_cast<uintptr_t>(&this->_end);
    }

    /**
     * @brief Get a pointer to the null terminated param type char string.
     *
     * @return char* null terminated char param type string
     */
    char* get_param_type() const noexcept {
        return reinterpret_cast<char*>(
            this->get_file_start() + this->param_type_offset);
    }

    /**
     * @brief Get the param row locators in this param file.
     *
     * @return std::span<param_row_locator> a span of all the locators
     */
    std::span<param_row_locator> get_param_row_locators() const noexcept {
        auto first = reinterpret_cast<param_row_locator*>(
            this->get_file_start() + sizeof(param_file));
        return std::span<param_row_locator>(first, this->row_count);
    }
};

/**
 * @brief A wrapper for a raw param file in memory used by ELDEN RING.
 *
 */
struct param_file_wrapper {
    /**
     * @brief The offset (from the start of the file) to the rest of the
     * wrapper's data.
     *
     * The data will be aligned on the next 16 byte boundary.
     *
     */
    uint32_t wrapper_data_offset;

    /**
     * @brief How many rows there are in the param table.
     *
     * Note it is NOT a 16-bit unsigned integer, however the row count in a
     * param file is. Therefore, only 65535 rows may be defined in a single
     * param file at once.
     *
     */
    row_index_type row_count;

    /**
     * @brief The wrapped param file.
     *
     */
    alignas(16) param_file file;

    /**
     * @brief An instance of a structure describing a param entry in the file.
     *
     */
    struct wrapper_row_locator {
        /**
         * @brief The param row index.
         *
         */
        row_index_type row;

        /**
         * @brief The entry index in the param table.
         *
         * While a param's row index can be anything, the entry indices
         * are assigned in the order of the param rows' appearance.
         * So, param rows { 10001000, 10002000, 10002010 } will have indices
         * { n, n + 1, n + 2 }, where n is the index of param row 10001000,
         * provided there are no rows in-between.
         *
         */
        row_index_type index;
    };

    /**
     * @brief Get the wrapper row locators in this param file wrapper.
     * 
     * @return std::span<wrapper_row_locator> a span of all the locators
     */
    std::span<wrapper_row_locator> get_wrapper_row_locators() const noexcept {
        auto align = this->file.get_file_start() + this->wrapper_data_offset;
        align = (align + 0xF) & ~0xF;
        auto first = reinterpret_cast<wrapper_row_locator*>(align);
        return std::span<wrapper_row_locator>(first, this->row_count);
    }
};
} // namespace param
} // namespace from
