cmake_minimum_required(VERSION 3.15.0)
project(libER VERSION 0.2.0.0 LANGUAGES C CXX)

# Must build with C++20 or newer
set(CMAKE_CXX_STANDARD 20)

# Object library for libER[d].dll and libER_static[d].lib
add_library("objlibER" OBJECT)

# Set iterator debug level to 0 for ELDEN RING ABI compatibility
add_definitions(-D_ITERATOR_DEBUG_LEVEL=0)

# Compile definitions:
target_compile_definitions("objlibER" PUBLIC LIBERAPI_EXPORT)

if (CMAKE_CXX_COMPILER_ID STREQUAL "Clang")
    target_compile_options("objlibER" PUBLIC "-Wno-unused" "-Wno-inconsistent-missing-override")
endif()

# Include directories:
target_include_directories("objlibER"
PUBLIC
    "include"
    "symbols"
)

# Confirm libER is compiled with MSVC or clang-cl
# with MSVC STL. Check the source file for more details
target_sources("objlibER" PUBLIC
    "source/detail/compiler.cpp"
)

# Core source files
target_sources("objlibER" PUBLIC
    "source/detail/app_version.cpp"
)

# Memory source files
target_sources("objlibER" PUBLIC
    "source/memory/from_allocator.cpp"
    "source/memory/from_delay_delete.cpp"
)

# Namespace DL source files
target_sources("objlibER" PUBLIC
    "source/dantelion2/kernel_runtime.cpp"
    "source/dantelion2/system.cpp"
    "source/dantelion2/utility.cpp"
    "source/dantelion2/fileio.cpp"
)

# Namespace FD4 source files
target_sources("objlibER" PUBLIC
    "source/fd4/time.cpp"
    "source/fd4/resource.cpp"
    "source/fd4/detail/fd4_task.cpp"
)

# Namespace CS source files
target_sources("objlibER" PUBLIC
    "source/coresystem/cs_param.cpp"
    "source/coresystem/task.cpp"
    "source/coresystem/file.cpp"
    "source/coresystem/sound.cpp"
)

# Namespace GX source files
target_sources("objlibER" PUBLIC
    "source/graphics/draw.cpp"
)

# Param manipulation source files
# target_sources("objlibER" PUBLIC
#     "source/param/param.cpp"
# )

# Target libER[d].dll
add_library("libER" SHARED $<TARGET_OBJECTS:objlibER>)
target_include_directories("libER" PUBLIC "include" "symbols")
# Target libER_static[d].lib
add_library("libER_static" STATIC $<TARGET_OBJECTS:objlibER>)
target_include_directories("libER_static" PUBLIC "include" "symbols")
# Debug build "d" postfix in libERd.*
set_target_properties("libER" "libER_static" PROPERTIES DEBUG_POSTFIX d)

# No unused warnings with clang-cl
if (CMAKE_CXX_COMPILER_ID STREQUAL "Clang")
    target_compile_options("libER" PUBLIC "-Wno-unused" "-Wno-inconsistent-missing-override")
    target_compile_options("libER_static" PUBLIC "-Wno-unused" "-Wno-inconsistent-missing-override")
endif()