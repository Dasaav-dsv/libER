/**
 * @file version.hpp
 * @brief Game version introspection
 *
 * Copyright 2024 libER ELDEN RING API library
 *
 */
#pragma once

#include <cstddef>
#include <cstdint>
#include <string>

namespace liber {
/**
 * @brief unsigned 64 bit integer representing a version.
 *
 * A 4-part version number (every part is 16 bits) is concatenated into a single
 * 64-bit result.
 *
 */
using uversion = uint64_t;

/**
 * @brief Get the program version of the current process.
 *
 * The value is cached, only one attempt at
 * retrieving the version is made; subsequent
 * calls to the function return the same value
 *
 * If the call fails, the value is LIBER_INVALID_GAME_VERSION.
 *
 * @return uversion a 64-bit concatenated result of 4 16-bit fields
 */
uversion get_version() noexcept;

/**
 * @brief Get the program version of the current process.
 *
 * @return const std::string& a formatted version string
 */
const std::string& get_version_string() noexcept;

/**
 * @brief Check if the program version of the current process matches
 * LIBER_TARGET_VERSION.
 *
 * @return true
 * @return false
 */
bool match_version() noexcept;

/**
 * @brief Load the symbol .csv for the current ELDEN RING version.
 *
 * @note Internal method.
 *
 * @return std::string the .csv contents as a string
 */
std::string load_versioned_csv() noexcept;
} // namespace liber
