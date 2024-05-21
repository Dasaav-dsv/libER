/**
 * @file component.hpp
 * @brief FD4ComponentBase implementation
 *
 * Copyright 2024 libER ELDEN RING API library
 *
 */
#pragma once

#include <dantelion2/reflection.hpp>
#include <detail/literal_string.hpp>
#include <detail/preprocessor.hpp>

// LIBER_CLASS specialization that implements
// DLRuntimeClass reflection for CLASSNAME
// The class must inherit from FD4ComponentBase
#define FD4_RUNTIME_CLASS(CLASSNAME)                                    \
    from::DLRF::DLRuntimeClass* get_runtime_class() noexcept override { \
        return &from::DLRF::DLRuntimeClassTemplate<CLASSNAME,           \
            LIBER_STRINGIFY(CLASSNAME)>::dl_runtime_class;              \
    }                                                                   \
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
    /**
     * @brief Get the runtime class object
     *
     * @return DLRF::DLRuntimeClass* pointer to the runtime class
     */
    LIBERAPI virtual DLRF::DLRuntimeClass* get_runtime_class() noexcept;

    LIBERAPI virtual ~FD4ComponentBase();
};
} // namespace FD4
} // namespace from
