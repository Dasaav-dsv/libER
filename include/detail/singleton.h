#pragma once

#include <detail/preprocessor.h>
#include <detail/optref.h>
#include <detail/symbols.h>

#define LIBER_SINGLETON_INSTANCE(CLASSNAME)                          \
liber::optref<CLASSNAME> CLASSNAME::instance() noexcept {            \
    CLASSNAME* singleton = *reinterpret_cast<CLASSNAME**>(           \
        liber::symbol<LIBER_STRINGIFY(CLASSNAME::instance)>::get()); \
    if (!singleton) return std::nullopt;                             \
    return *singleton;                                               \
}
