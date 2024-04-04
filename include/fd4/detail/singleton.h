#pragma once

#include <detail/optref.h>
#include <detail/preprocessor.h>

// LIBER_INTERFACE_CLASS specialization for ELDEN RING
// singleton objects in static memory. Declares the instance()
// method, which is defined separately as to not expose symbols
// See detail/singleton.h
#define FD4_SINGLETON_CLASS(CLASSNAME)                                         \
    [[nodiscard]] static liber::optref<CLASSNAME> instance() noexcept;         \
    LIBER_INTERFACE_CLASS(CLASSNAME)