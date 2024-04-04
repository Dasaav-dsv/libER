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

#ifndef LIBER_TARGET_VERSION
// The ELDEN RING binary version this build of libER targets
// BUILD, REVISION, MINOR, MAJOR 16-bit fields in LE order
// This does NOT mean incompatibility with other versions
// See the documentation/README for more details
#define LIBER_TARGET_VERSION 562949953486848
#endif

// Invalid version constant
// All version fields are set to (short)-1
#define LIBER_INVALID_VERSION ~0ull

// Two files containing the list of the symbol .csvs,
// and the symbols defined in the in the listed .csvs
#ifndef LIBER_FILE_LIST
#define LIBER_FILE_LIST file_list.inl
#endif
#ifndef LIBER_SYMBOL_LIST
#define LIBER_SYMBOL_LIST symbol_list.inl
#endif

// Where to look for the symbol .csv files online:
// 1. The domain of the server
// 2. The owner of the repository
// 3. The repository branch
// 4. The path to the symbols
#ifndef LIBER_CSV_SERVER
#define LIBER_CSV_SERVER raw.githubusercontent.com
#endif
#ifndef LIBER_REPO_OWNER
#define LIBER_REPO_OWNER Dasaav-dsv
#endif
#ifndef LIBER_DIR_BRANCH
#define LIBER_DIR_BRANCH main
#endif
#ifndef LIBER_SYMBOL_DIR
#define LIBER_SYMBOL_DIR symbols
#endif

// Mutex names used by program-wide Windows mutexes
// See NamedMutex in dependencies/wintypes
#define LIBER_VERSION_FILEIO_MUTEX L"LIBER_VERSION_FILEIO_MUTEX"

// clang-format on
