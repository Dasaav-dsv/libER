#pragma once

#include <detail/optref.hpp>
#include <detail/preprocessor.hpp>
#include <detail/symbols.hpp>

// Define the instance() method for a FD4_SINGLETON_CLASS
// (see fd4/singleton.h). As the symbols.h header is exposed,
// you may only use this header in a source file.
#define LIBER_SINGLETON_INSTANCE(CLASSNAME)                              \
    liber::optref<CLASSNAME> CLASSNAME::instance() noexcept {            \
        CLASSNAME* singleton = *reinterpret_cast<CLASSNAME**>(           \
            liber::symbol<LIBER_STRINGIFY(CLASSNAME::instance)>::get()); \
        return singleton;                                                \
    }
