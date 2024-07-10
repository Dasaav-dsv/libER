/**
 * @file memory.hpp
 * @brief Namespace CS memory management
 *
 * Copyright 2024 libER ELDEN RING API library
 *
 */
#pragma once

#include <detail/preprocessor.hpp>
#include <fd4/detail/fd4_memory.hpp>

namespace from {
namespace CS {
/**
 * @brief Singleton responsible for managing memory allocation.
 *
 * This singleton is overriden by libER to implement custom
 * mimalloc memory allocation in ELDEN RING.
 * See source/memory/from_allocator.cpp for the implementation.
 *
 */
class CSMemory : public FD4::FD4MemoryManager {
public:
    LIBER_CLASS(CSMemory);

    LIBERAPI virtual ~CSMemory();

private:
    virtual void liber_unknown() {}
    virtual void liber_unknown() {}

    bool liber_unknown = false;
};

LIBER_ASSERTS_BEGIN(CSMemory);
LIBER_ASSERT_SIZE(0x2B8);
LIBER_ASSERTS_END;
} // namespace CS
} // namespace from
