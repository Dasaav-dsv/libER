/**
 * @file app_version.hpp
 * @brief Game version introspection
 *
 * Copyright 2024 libER ELDEN RING API library
 *
 */
#pragma once

#include <detail/preprocessor.hpp>

#include <bit>
#include <cstddef>
#include <cstdint>
#include <string>

namespace liber {
class app_version {
public:
    using value_type = int64_t;

    // BUILD, REVISION, MINOR, MAJOR 16-bit fields in LE order
    struct fields_type {
        int16_t build;
        int16_t revision;
        int16_t minor;
        int16_t major;
    };

    static_assert(sizeof(value_type) == sizeof(fields_type));

    static const app_version& get() noexcept {
        static app_version appver;
        return appver;
    }

    LIBERAPI app_version() noexcept;

    value_type get_version_int() const noexcept {
        return appver_i64;
    }

    fields_type get_version_fields() const noexcept {
        return std::bit_cast<fields_type>(appver_i64);
    }

    std::string_view get_version_str() const noexcept {
        return appver_str;
    }

    std::wstring_view get_version_wstr() const noexcept {
        return appver_wstr;
    }

private:
    value_type appver_i64 = LIBER_INVALID_VERSION;
    std::string appver_str = LIBER_STRINGIFY_LITERAL(LIBER_INVALID_VERSION);
    std::wstring appver_wstr = LIBER_WSTRINGIFY_LITERAL(LIBER_INVALID_VERSION);
};
} // namespace liber
