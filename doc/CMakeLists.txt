cmake_minimum_required(VERSION 3.15.0)

find_package(Doxygen REQUIRED doxygen)

set(DOXYGEN_EXCLUDE_PATTERNS "*/include/detail/*;*/include/version/detail/*")
set(DOXYGEN_EXCLUDE_SYMBOLS "liber_*;LIBER_*;FD4_RUNTIME_CLASS;FD4_SINGLETON_CLASS")

doxygen_add_docs(doc "include" "include/detail/optref.hpp" ALL COMMENT "Generate HTML documentation")