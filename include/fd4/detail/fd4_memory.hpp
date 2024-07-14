/**
 * @file fd4_memory.hpp
 * @brief Namespace FD4 memory management
 *
 * Copyright 2024 libER ELDEN RING API library
 *
 */
#pragma once

#include <dantelion2/text.hpp>
#include <detail/preprocessor.hpp>

namespace from {
namespace FD4 {
/**
 * @brief Base of CS::CSMemory, a singleton responsible for managing memory
 * allocation.
 *
 */
class FD4MemoryManager {
public:
    LIBER_CLASS(FD4MemoryManager);

    FD4MemoryManager() = default;

    LIBERAPI virtual ~FD4MemoryManager();

private:
    virtual void init_allocators();
    virtual void free_allocators() LIBER_INTERFACE;
    virtual void memdump(void*, wchar_t*) LIBER_INTERFACE;

    void* liber_unknown = nullptr;
    void* liber_unknown = nullptr;
    void* liber_unknown[6]{};
    int liber_unknown = -1;
    int liber_unknown = 0x400;
    void* liber_unknown = nullptr;
    void* liber_unknown = nullptr;
    DLTX::DLString allocator_names[11];
    size_t liber_unknown = 0;
    size_t max_name_length = 255;
    size_t liber_unknown = 1;
    size_t size = 0x2000000;
    int liber_unknown = 0;
    int liber_unknown = 0;
    int liber_unknown = 4;
    int liber_unknown = 0;
    int liber_unknown = 6;
    int liber_unknown = 0;
    int liber_unknown = 0;
    bool liber_unknown = false;
};
} // namespace FD4
} // namespace from

LIBER_ASSERTS_BEGIN(from::FD4::FD4MemoryManager);
LIBER_ASSERT_SIZE(0x2B0);
LIBER_ASSERT_OFFS(0x60, allocator_names);
LIBER_ASSERT_OFFS(0x288, size);
LIBER_ASSERTS_END;
