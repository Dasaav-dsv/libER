#pragma once

/*
* A function to retrieve the game version.
* The value is cached, only one attempt at 
* retrieving the game version is made; subsequent
* calls to the function return the same value
*/

// The game version this build of libER targets
// This does NOT mean incompatibility with other versions
// See the documentation/README for more details
// TODO: make a defines header
#define LIBER_GAME_VERSION 0x0002'0000'0001'0000
#define LIBER_INVALID_GAME_VERSION -1LL

namespace liber {
    // Get the program version of the current process
    // Returns a 64-bit concatenated result of 4 16-bit fields
    // If the call fails, the value is negative
    long long game_version() noexcept;

    // Check if the program version of the current process
    // matches LIBER_GAME_VERSION
    bool game_version_match() noexcept;
}