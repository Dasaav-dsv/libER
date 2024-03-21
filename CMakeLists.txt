cmake_minimum_required(VERSION 3.12.0)
project(windyn VERSION 0.1.0.0 LANGUAGES C CXX)

add_library("libER" STATIC)
target_compile_features("libER" PRIVATE cxx_std_20)

target_include_directories("libER" PRIVATE
    "include"
    "include/core"
    "include/memory/containers"
    "dependencies"
    "dependencies/cppsv/include"
    "dependencies/thirdparty"
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

# Memory source files
target_sources("libER" PRIVATE
    "source/memory/from_allocator.cpp"
)