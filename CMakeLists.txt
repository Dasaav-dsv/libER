cmake_minimum_required(VERSION 3.15.0)
project(libER VERSION 0.1.1.0 LANGUAGES C CXX)

# Must build with C++20 or newer
set(CMAKE_CXX_STANDARD 20)

# Object library for libER[d].dll and libER_static[d].lib
add_library("objlibER" OBJECT)

# Set iterator debug level to 0 for ELDEN RING ABI compatibility
add_definitions(-D_ITERATOR_DEBUG_LEVEL=0)

# Dependency: WinTypes
target_link_libraries("objlibER" PUBLIC "wintypes")
add_subdirectory("dependencies/wintypes" "wintypes")

# Dependency: mimalloc
option(MI_SECURE            "Use full security mitigations (like guard pages, allocation randomization, double-free mitigation, and free-list corruption detection)" OFF)
option(MI_DEBUG_FULL        "Use full internal heap invariant checking in DEBUG mode (expensive)" OFF)
option(MI_PADDING           "Enable padding to detect heap block overflow (always on in DEBUG or SECURE mode, or with Valgrind/ASAN)" OFF)
option(MI_OVERRIDE          "Override the standard malloc interface (e.g. define entry points for malloc() etc)" OFF)
option(MI_XMALLOC           "Enable abort() call on memory allocation failure by default" OFF)
option(MI_SHOW_ERRORS       "Show error and warning messages by default (only enabled by default in DEBUG mode)" OFF)
option(MI_TRACK_VALGRIND    "Compile with Valgrind support (adds a small overhead)" OFF)
option(MI_TRACK_ASAN        "Compile with address sanitizer support (adds a small overhead)" OFF)
option(MI_TRACK_ETW         "Compile with Windows event tracing (ETW) support (adds a small overhead)" OFF)
option(MI_USE_CXX           "Use the C++ compiler to compile the library (instead of the C compiler)" ON)
option(MI_SEE_ASM           "Generate assembly files" OFF)
option(MI_OSX_INTERPOSE     "Use interpose to override standard malloc on macOS" OFF)
option(MI_OSX_ZONE          "Use malloc zone to override standard malloc on macOS" OFF)
option(MI_WIN_REDIRECT      "Use redirection module ('mimalloc-redirect') on Windows if compiling mimalloc as a DLL" OFF)
option(MI_LOCAL_DYNAMIC_TLS "Use slightly slower, dlopen-compatible TLS mechanism (Unix)" OFF)
option(MI_BUILD_SHARED      "Build shared library" OFF)
option(MI_BUILD_STATIC      "Build static library" OFF)
option(MI_BUILD_OBJECT      "Build object library" ON)
option(MI_BUILD_TESTS       "Build test executables" OFF)
option(MI_DEBUG_TSAN        "Build with thread sanitizer (needs clang)" OFF)
option(MI_DEBUG_UBSAN       "Build with undefined-behavior sanitizer (needs clang++)" OFF)
option(MI_SKIP_COLLECT_ON_EXIT "Skip collecting memory on program exit" OFF) # ON in the future?
option(MI_NO_PADDING        "Force no use of padding even in DEBUG mode etc." OFF)
option(MI_INSTALL_TOPLEVEL  "Install directly into $CMAKE_INSTALL_PREFIX instead of PREFIX/lib/mimalloc-version" OFF)
option(MI_NO_THP            "Disable transparent huge pages support on Linux/Android for the mimalloc process only" OFF)
target_include_directories("objlibER" SYSTEM PRIVATE "dependencies/thirdparty/mimalloc/include")
add_subdirectory("dependencies/mimalloc" SYSTEM)

# Dependency: cppsv
target_include_directories("objlibER" SYSTEM PRIVATE "dependencies/cppsv/include")

# Compile definitions:
target_compile_definitions("objlibER" PUBLIC LIBERAPI_EXPORT)

if (CMAKE_CXX_COMPILER_ID STREQUAL "Clang")
    target_compile_options("objlibER" PUBLIC "-Wno-unused")
endif()

# Include directories:
target_include_directories("objlibER"
PUBLIC
    "include"
PRIVATE
    "symbols"
)

# Confirm libER is compiled with MSVC or clang-cl
# with MSVC STL. Check the source file for more details
target_sources("objlibER" PUBLIC
    "source/detail/compiler.cpp"
)

# Core source files
target_sources("objlibER" PUBLIC
    "source/detail/base_address.cpp"
    "source/detail/symbols.cpp"
    "source/detail/preprocessor.cpp"
)

# Versioning source files
target_sources("objlibER" PUBLIC
    "source/version/version.cpp"
    "source/version/detail/version_fileio.cpp"
)

# Memory source files
target_sources("objlibER" PUBLIC
    "source/memory/from_allocator.cpp"
    "source/memory/from_delay_delete.cpp"
)

# Namespace DL source files
target_sources("objlibER" PUBLIC
    "source/dantelion2/kernel_runtime.cpp"
    "source/dantelion2/reflection.cpp"
    "source/dantelion2/system.cpp"
    "source/dantelion2/utility.cpp"
    "source/dantelion2/fileio.cpp"
)

# Namespace FD4 source files
target_sources("objlibER" PUBLIC
    "source/fd4/time.cpp"
    "source/fd4/component.cpp"
    "source/fd4/resource.cpp"
    "source/fd4/detail/fd4_memory.cpp"
    "source/fd4/detail/fd4_task.cpp"
)

# Namespace CS source files
target_sources("objlibER" PUBLIC
    "source/coresystem/task.cpp"
    "source/coresystem/file.cpp"
)

# Target libER[d].dll
add_library("libER" SHARED $<TARGET_OBJECTS:objlibER> $<TARGET_OBJECTS:mimalloc-obj>)
target_include_directories("libER" PUBLIC "include")
# Target libER_static[d].lib
add_library("libER_static" STATIC $<TARGET_OBJECTS:objlibER> $<TARGET_OBJECTS:mimalloc-obj>)
target_include_directories("libER_static" PUBLIC "include")
# Debug build "d" postfix in libERd.*
set_target_properties("libER" "libER_static" PROPERTIES DEBUG_POSTFIX d)
# Target libER_updater
add_executable("libER_updater"
    "source/version/version.cpp"
    "source/version/updater/version_updater.cpp"
    "source/version/detail/version_fileio.cpp"
    "source/version/detail/version_winhttp.cpp"
)
target_link_libraries("libER_updater" PRIVATE "winhttp")
target_include_directories("libER_updater" PRIVATE "include")

# No unused warnings with clang-cl
if (CMAKE_CXX_COMPILER_ID STREQUAL "Clang")
    target_compile_options("libER" PUBLIC "-Wno-unused")
    target_compile_options("libER_static" PUBLIC "-Wno-unused")
    target_compile_options("libER_updater" PUBLIC "-Wno-unused")
endif()