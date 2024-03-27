cmake_minimum_required(VERSION 3.13.0)
project(libER VERSION 0.1.0.0 LANGUAGES C CXX)

# Object library for libER[d].dll and libER_static[d].lib
add_library("objlibER" OBJECT)
target_compile_features("objlibER" PRIVATE cxx_std_20)

# Dependencies:
target_link_libraries("objlibER" PUBLIC "wintypes")
add_subdirectory("dependencies/wintypes" "wintypes")

target_include_directories("objlibER" PUBLIC "dependencies/cppsv/include")

# Compile definitions:
target_compile_definitions("objlibER" PUBLIC _ITERATOR_DEBUG_LEVEL=0)

# Include directories:
target_include_directories("objlibER"
PUBLIC
    "include"
    "include/memory/containers"
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
    "source/detail/unimplemented.cpp"
    "source/detail/symbols.cpp"
)

# Versioning source files
target_sources("objlibER" PUBLIC
    "source/version/version.cpp"
    "source/version/detail/version_fileio.cpp"
    "source/version/detail/version_winhttp.cpp"
)

# Memory source files
target_sources("objlibER" PUBLIC
    "source/memory/from_allocator.cpp"
)

# Namespace DL source files
target_sources("objlibER" PUBLIC
    "source/dantelion2/kernel_runtime.cpp"
)

# Target libER[d].dll
add_library("libER" SHARED $<TARGET_OBJECTS:objlibER>)
# Target libER_static[d].lib
add_library("libER_static" STATIC $<TARGET_OBJECTS:objlibER>)
# Debug build "d" postfix in libERd.*
set_target_properties("libER" "libER_static" PROPERTIES DEBUG_POSTFIX d)