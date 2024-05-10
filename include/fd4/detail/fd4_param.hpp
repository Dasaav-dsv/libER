/**
 * @file fd4_param.hpp
 * @brief Namespace FD4 param resources
 *
 * Copyright 2024 libER ELDEN RING API library
 *
 */
#pragma once

#include <fd4/resource.hpp>

#include <cstddef>
#include <cstdint>

namespace from {
using param_row_id = uint64_t;
using param_row_count = uint16_t;

struct param_row_info {
    param_row_id id;
    ptrdiff_t data_begin_offset;
    ptrdiff_t data_end_offset;
};

struct param_file {
    uint32_t string_offset;
    uint16_t data_offset;
    uint16_t liber_unknown;
    uint16_t paramdef_version;
    uint16_t row_count;
    uint64_t param_type_offset;
    uint64_t liber_unknown[3];
    uint64_t param_data_offset;
    uint64_t liber_unknown;
    param_row_info row_info_arr[0];
};

namespace FD4 {
class FD4ParamResCap : public FD4ResCap {
public:
    FD4_RUNTIME_CLASS(FD4ParamResCap);

    param_file* get_param_file() {
        return this->file;
    }

    const param_file* get_param_file() const {
        return this->file;
    }

private:
    long long file_size;
    param_file* file;
};
} // namespace FD4
} // namespace from
