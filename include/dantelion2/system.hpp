/**
 * @file system.hpp
 * @brief Dantelion2 system properties
 *
 * Copyright 2024 libER ELDEN RING API library
 *
 */
#pragma once

#include <detail/preprocessor.hpp>
#include <fd4/detail/singleton.hpp>

namespace from {
// Dantelion system
namespace DLSY {
/**
 * @brief Lock until main ELDEN RING system resources are initialized, or time
 * runs out.
 *
 * Initialization is performed by the game's main thread, post-entry. Returns
 * true on success, false on timeout. Timeout can be (unsigned int)-1 (indefinite wait).
 *
 * @warning **POTENTIAL DEADLOCK**
 *
 * @warning **DO NOT** call this function from a thread
 * that the game's main thread may wait on.
 *
 * @warning **DO NOT CALL THIS FUNCTION FROM DLLMAIN.**
 *
 * @param timeout time in ms before abandoning the wait
 * @return true wait succeeded
 * @return false wait timed out
 */
LIBERAPI bool wait_for_system(unsigned int timeout) noexcept;

/**
 * @brief Check if ELDEN RING system resources are initialized.
 * 
 * Does not lock (except for symbol retrieval), safe to call from any context.
 * 
 * @return true initialized
 * @return false not initialized
 */
LIBERAPI bool is_system_initialized() noexcept;
} // namespace DLSY
} // namespace from
