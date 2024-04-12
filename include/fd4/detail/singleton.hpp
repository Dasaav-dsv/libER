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

// LIBER_INTERFACE_CLASS specialization for ELDEN RING
// singleton objects in static memory. Declares the instance()
// method, which is defined separately as to not expose symbols
// See detail/singleton.h
#define FD4_SINGLETON_CLASS(CLASSNAME)                     \
    [[nodiscard]] LIBERAPI static liber::optref<CLASSNAME> \
    instance() noexcept;                                   \
    LIBER_INTERFACE_CLASS(CLASSNAME)
