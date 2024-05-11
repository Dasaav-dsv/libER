/**
 * @file fd4_param.hpp
 * @brief Namespace FD4 param resources
 *
 * Copyright 2024 libER ELDEN RING API library
 *
 */
#pragma once

#include <fd4/resource.hpp>
#include <param/param_file.hpp>

namespace from {
namespace FD4 {
class FD4ParamResCap : public FD4ResCap {
public:
    FD4_RUNTIME_CLASS(FD4ParamResCap);

    param::param_file*& get_param_file() noexcept {
        return this->file;
    }

    const param::param_file* const& get_param_file() const noexcept {
        return this->file;
    }

private:
    long long file_size;
    param::param_file* file;
};
} // namespace FD4
} // namespace from
