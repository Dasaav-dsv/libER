/**
 * @file time.hpp
 * @brief Namespace FD4 FD4Time
 * 
 * Copyright 2024 libER ELDEN RING API library
 * 
 */
#pragma once

#include <cstdint>

namespace from {
namespace FD4 {
/**
 * @brief A basic floating point time class.
 * 
 * Used for relative and absolute time, timers, delta time etc.
 * 
 */
struct FD4Time {
    virtual ~FD4Time() noexcept;

    /**
     * @brief The time.
     * 
     */
    float time = 0.0f;
};

/**
 * @brief A packed 64-bit SYSTEMTIME structure.
 * 
 * Thanks TKGP.
 * 
 */
struct FD4PackedSystemTime {
/// @cond DOXYGEN_SKIP
    uint64_t year : 12;
    uint64_t milliseconds : 10;
    uint64_t month : 4;
    uint64_t dayOfWeek : 3;
    uint64_t day : 5;
    uint64_t hour : 5;
    uint64_t minute : 6;
    uint64_t second : 6;
/// @endcond
};
} // namespace FD4
} // namespace from
