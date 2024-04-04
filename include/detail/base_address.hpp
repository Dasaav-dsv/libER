#pragma once

/*
 * Functions to retrieve the process base address, caching it
 */

namespace liber {
// Get the process base address
void* base_address() noexcept;

// Get an offset pointer from the process base address
void* base_offset(int offset) noexcept;
} // namespace liber