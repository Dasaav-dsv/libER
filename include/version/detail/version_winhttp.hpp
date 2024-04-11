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
std::string load_versioned_csv_from_repo() noexcept;
} // namespace liber
