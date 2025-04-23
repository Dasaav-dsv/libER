/**
 * @file singleton.hpp
 * @brief FD4_SINGLETON_CLASS implementation
 *
 * Copyright 2024 libER ELDEN RING API library
 *
 */

#pragma once

#include <detail/optref.hpp>
#include <detail/preprocessor.hpp>
#include <detail/symbols.hpp>

// LIBER_INTERFACE_CLASS specialization for ELDEN RING
// singleton objects in static memory. Declares the instance()
// method, which is defined separately as to not expose symbols
// See detail/singleton.h
#define FD4_SINGLETON_CLASS(CLASSNAME)                                  \
    [[nodiscard]] static liber::optref<CLASSNAME> instance() noexcept { \
        return liber::symbol<"GLOBAL_" LIBER_STRINGIFY(           \
            CLASSNAME)>::as<CLASSNAME*>();                              \
    }                                                                   \
    LIBER_INTERFACE_CLASS(CLASSNAME)
