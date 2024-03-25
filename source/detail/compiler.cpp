#include <version>

/*
* Ensure libER is being compiled with MSVC/clang with MSVC STL.
* This is necessary for binary compatibility between libER and ELDEN RING,
* as it had been compiled with the Microsoft Visual Compiler from VS2015, build 26***.
* MSVC maintains a stable ABI from its 2015 version onwards, any version is okay to use.
* clang-cl for Visual Studio is exempt from this restriction, as long the MSVC STL is used.
*/

#if !defined(_MSVC_STL_UPDATE)
#error libER only supports the Microsoft Visual Compiler/clang \
       with MSVC STL for ELDEN RING ABI compatibility reasons. \
       Check libER/source/detail/compiler.cpp for details.
#endif