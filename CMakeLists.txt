cmake_minimum_required(VERSION 3.12.0)
project(libER VERSION 0.1.0.0 LANGUAGES C CXX)

add_library("libER" STATIC)
target_compile_features("libER" PRIVATE cxx_std_20)

# For GetFileVersion - see source/core/game_ver.cpp
# target_link_libraries("libER" PRIVATE version.lib)

# target_link_libraries("libER" PRIVATE "wintypes")
# add_subdirectory("dependencies/wintypes" "wintypes" EXCLUDE_FROM_ALL)

target_include_directories("libER" PRIVATE
    "symbols"
    "include"
    "include/core"
    "include/version"
    "include/memory/containers"
    "dependencies"
    "dependencies/thirdparty"
    "dependencies/cppsv/include"
    "dependencies/wintypes/include"
)

# Confirm libER is being compiled with MSVC or clang-cl
# Check the source file for more details
target_sources("libER" PRIVATE
    "source/core/compiler.cpp"
)

# Core source files
target_sources("libER" PRIVATE
    "source/core/base_address.cpp"
)

# Versioning source files
target_sources("libER" PRIVATE
    "source/version/version.cpp"
    "source/version/symbols.cpp"
    "source/version/detail/version_fileio.cpp"
    "source/version/detail/version_winhttp.cpp"
)

# Memory source files
target_sources("libER" PRIVATE
    "source/memory/from_allocator.cpp"
)