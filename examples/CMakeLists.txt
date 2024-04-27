cmake_minimum_required(VERSION 3.15.0)
project(libER-examples LANGUAGES C CXX)

add_subdirectory("../" "libER")

# Set iterator debug level to 0 for ELDEN RING ABI compatibility
add_definitions(-D_ITERATOR_DEBUG_LEVEL=0)
set(CMAKE_CXX_STANDARD 20)

add_library("libER_fps_example" SHARED "tasks/fps_counter.cpp")
target_link_libraries("libER_fps_example" PUBLIC "libER")

add_library("libER_reflection_example" SHARED "reflection/print_reflected_types.cpp")
target_link_libraries("libER_reflection_example" PUBLIC "libER")

add_library("libER_task_group_example" SHARED "tasks/task_groups.cpp")
target_link_libraries("libER_task_group_example" PUBLIC "libER")

add_library("libER_gparam_resource_example" SHARED "resources/load_gparam.cpp")
target_link_libraries("libER_gparam_resource_example" PUBLIC "libER")

add_library("libER_play_bank_sound_example" SHARED "resources/play_bank_sound.cpp")
target_link_libraries("libER_play_bank_sound_example" PUBLIC "libER")