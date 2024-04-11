#pragma once

#include <cstddef>
#include <cstdint>
#include <string>

/*
 * A function to retrieve the game version.
 * The value is cached, only one attempt at
 * retrieving the version is made; subsequent
 * calls to the function return the same value
 */

namespace liber {
using uversion = uint64_t;

// Get the program version of the current process
// Returns a 64-bit concatenated result of 4 16-bit fields
// If the call fails, the value is LIBER_INVALID_GAME_VERSION
uversion get_version() noexcept;

// Get the program version of the current process
// Returns a formatted version string
const std::string& get_version_string() noexcept;

// Check if the program version of the current process
// matches LIBER_TARGET_VERSION
bool match_version() noexcept;

std::string load_versioned_csv() noexcept;
} // namespace liber
