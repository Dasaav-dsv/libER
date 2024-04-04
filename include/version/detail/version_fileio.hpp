#pragma once

#include <string>

/*
 * Internal header to support file I/O for symbol .csv files,
 * based on the ELDEN RING binary version of the currently running executable.
 */

namespace liber {
// Load a symbol csv from %APPDATA%/EldenRing/libER/*LIBER_TARGET_VERSION*
std::string load_versioned_csv_from_disk() noexcept;

// Save a file to %APPDATA%/EldenRing/libER/*LIBER_TARGET_VERSION*
void save_file_to_disk(
    const std::string& filename, const std::string& data) noexcept;

// Resolve an include statement to its filename (char and wchar_t)
std::pair<std::string, std::wstring> filename_from_line(
    const std::string& line) noexcept;
} // namespace liber