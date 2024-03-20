cmake_minimum_required(VERSION 3.12.0)
project(windyn VERSION 0.1.0.0 LANGUAGES C CXX)

add_library("libER" STATIC)
target_compile_features("libER" PRIVATE cxx_std_20)

target_include_directories("libER" PRIVATE
    "include"
    "dependencies"
    "dependencies/cppsv/include"
    "dependencies/thirdparty"
)

target_sources("libER" PRIVATE
    "source/core/compiler.cpp"
)