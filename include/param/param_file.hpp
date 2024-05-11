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
struct param_file {
    uint32_t _end;
    uint16_t data_offset;
    uint16_t liber_unknown;
    uint16_t paramdef_version;
    uint16_t row_count;
    uint64_t param_type_offset;
    uint64_t liber_unknown[3];
    uint64_t param_data_offset;
    uint64_t liber_unknown;

    struct param_row_locator {
        row_index_type row;
        uintptr_t file_offset;
        uintptr_t file_end;
    };

    uintptr_t get_file_start() const noexcept {
        return reinterpret_cast<uintptr_t>(&this->_end);
    }

    char* get_param_type() const noexcept {
        return reinterpret_cast<char*>(
            this->get_file_start() + this->param_type_offset);
    }

    std::span<param_row_locator> get_param_row_locators() const noexcept {
        auto first = reinterpret_cast<param_row_locator*>(
            this->get_file_start() + sizeof(param_file));
        return std::span<param_row_locator>(first, this->row_count);
    }
};

struct param_file_wrapper {
    uint32_t wrapper_data_offset;
    row_index_type row_count;
    alignas(16) param_file file;

    struct wrapper_row_locator {
        row_index_type row;
        row_index_type index;
    };

    std::span<wrapper_row_locator> get_wrapper_row_locators() const noexcept {
        auto align = this->file.get_file_start() + this->wrapper_data_offset;
        align = (align + 0xF) & ~0xF;
        auto first = reinterpret_cast<wrapper_row_locator*>(align);
        return std::span<wrapper_row_locator>(first, this->row_count);
    }
};
} // namespace param
} // namespace from
