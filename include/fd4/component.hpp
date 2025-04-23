/**
 * @file component.hpp
 * @brief FD4ComponentBase implementation
 *
 * Copyright 2024 libER ELDEN RING API library
 *
 */
#pragma once

#include <dantelion2/reflection.hpp>
#include <detail/preprocessor.hpp>

// LIBER_CLASS specialization that uses
// DLRuntimeClass reflection for CLASSNAME
#define FD4_RUNTIME_CLASS(CLASSNAME)                                         \
    virtual from::DLRF::DLRuntimeClass* get_runtime_class() const noexcept { \
        return from::DLRF::DLRuntimeClass::get_runtime_class(                \
            LIBER_STRINGIFY(CLASSNAME));                                     \
    }                                                                        \
    LIBER_CLASS(CLASSNAME)

namespace from {
namespace FD4 {
/**
 * @brief Reflection implementation for a given class.
 *
 * A class that automatically instantiates reflective DLRF::DLRuntimeClass
 * instances for classes that derive from it. Commonly used in the ELDEN RING
 * codebase.
 *
 */
struct FD4ComponentBase {
    FD4_RUNTIME_CLASS(FD4ComponentBase);

    virtual ~FD4ComponentBase() = default;
};
} // namespace FD4
} // namespace from
