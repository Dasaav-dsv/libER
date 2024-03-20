/*
* Ensure libER is being compiled with MSVC/clang-cl.
* This is necessary for binary compatibility between libER and ELDEN RING,
* as it had been compiled with the Microsoft Visual Compiler from VS2015, build 26***.
* MSVC maintains a stable ABI from its 2015 version onwards, any version is okay to use.
* clang-cl for Visual Studio is exempt from this restriction, as long the MSVC STL is used.
*/

#if !defined(_MSC_VER) || !defined(_MSC_FULL_VER) || !defined(_MSVC_LANG)
#error libER only supports the Microsoft Visual Compiler/clang-cl \
       for ELDEN RING ABI compatibility reasons. \
       Check libER/source/core/compiler.cpp for details.
#endif