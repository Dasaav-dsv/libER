#pragma once

#include <string>

/*
 * Internal header to support fetching symbol .csv files online,
 * based on the ELDEN RING binary version of the currently running executable.
 */

namespace liber {
// Try to download symbol .csv files online,
// and cache them. The lookup variables (domain etc.)
// can be found in detail/defines.hpp
bool download_versioned_csv(const std::wstring& version) noexcept;
} // namespace liber
