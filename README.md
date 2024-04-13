# libER ELDEN RING API library
libER is an ELDEN RING Application Programming Interface (API) library that aims to provide a safe C++ interface for the game by leveraging binary compatibility between different versions of the Microsoft Visual Compiler.

The ELDEN RING executable has been built with Visual Studio 2015, which also happens to be the earliest Microsoft guarantees binary compatibility for all future compiler and standard library versions onwards. For libER, this means the C++ standard library features can be used wherever they are used in ELDEN RING, as long as libER is compiled with MSVC or another compatible compiler.

Being able to use the STL provides the safety and guarantees of the standard library and greatly simplifies reversing and documenting efforts. Settling on the MSVC standard library (even if only because ELDEN RING uses it) means a stable ABI and API for the game. This choice is somewhat limiting, but also defines a common standard for projects that use libER.

**_NOTE:_** The clang-cl toolchain may be used instead of the MSVC compiler, provided the Visual Studio STL is used.

### Features
- Written in modern C++20
- Byte perfect documentation of ELDEN RING type layouts
- Type safety while exposing ELDEN RING's own functionality
- Thread safety where it is expected, asynchronous execution with native ELDEN RING tasks
- Non-invasive modifications to ELDEN RING, custom allocator replacement without hooks or code patches (!)
- No pattern matching or other fallible runtime analysis
- Symbol definition files, separated by game version
- Possibility to pull symbol definitions from GitHub on a game version mismatch
- Familiar stl-like naming, or the original ELDEN RING naming where it is known
- Doxygen documentation and widespread use of comments in the codebase
- Introspection of the ELDEN RING engine, tasks, memory allocation, file loading...
- Support for both static and dynamic linking

# Installation
libER is an ELDEN RING API, not a mod by itself. You can include libER in your project with CMake or by linking to the library files.

### Building libER
**_Requirements:_** git, CMake, Visual Studio with any toolchain
```
git clone --recurse-submodules https://github.com/Dasaav-dsv/libER.git
cd libER
mkdir build
cd build
cmake ..
cmake --build . --config Release
```
**_NOTE:_** If you wish to include libER in your CMake project, you must define "**_ITERATOR_DEBUG_LEVEL**" as "**0**", otherwise the STL containers will not be compatible in Debug mode.
```cmake
add_subdirectory("[libER INSTALL DIR]" "libER")

# Set iterator debug level to 0 for ELDEN RING ABI compatibility
add_definitions(-D_ITERATOR_DEBUG_LEVEL=0)
target_compile_features("[YOUR TARGET]" PRIVATE cxx_std_20)
```

# Usage
libER is meant to be a base for mods and other libraries for ELDEN RING. It wraps the ELDEN RING functionality in a safe interface that can be further abstracted.

Currently, **"./examples"** has examples of using ELDEN RING tasks and type reflection, with more to come in the future.

The libER documentation is currently hosted at https://dasaav-dsv.github.io/libER-dox/html/

libER replaces the standard allocators used by ELDEN RING. This both improves performance and more importantly allows for memory allocation before game initialization in a way that is compatible with the game.

### Namespaces
libER uses two main namespaces:
- namespace **from** describes ELDEN RING
- namespace **liber** contains libER implementation details

# Contributing
libER is open to contributions. You may file issues, open pull requests, fork the repository etc. *We are always looking for more contributors*.

Please use **clang-format** and annotate your code with **doxygen** (and normal) comments.

### Keep a consistent style with the rest of libER:
- Known ELDEN RING typenames and namespaces are kept as is
- Unknown and libER implementation names should use lowercase snake case
- Keep the directory structure consistent

# License
Permissive Apache 2.0 with LLVM exception.
