#pragma once

/*
 * A header containing preprocessor definitions
 * used during the compilation of libER.
 * Some may be overridden.
 */

// clang-format off

#ifdef LIBERAPI_EXPORT
#define LIBERAPI __declspec(dllexport)
#else
#define LIBERAPI
#endif

// The ELDEN RING app binary version this build of libER targets
#define LIBER_TARGET_VERSION "1.16.0"

// Invalid version constant
// All version fields are negative 16-bit integers
#define LIBER_INVALID_VERSION -1ll

// clang-format on
