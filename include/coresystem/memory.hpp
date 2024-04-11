#pragma once

#include <detail/preprocessor.hpp>
#include <fd4/detail/fd4_memory.hpp>

namespace from {
namespace CS {
class CSMemory : public FD4::FD4MemoryManager {
public:
    LIBER_CLASS(CSMemory);

    virtual ~CSMemory() = default;
    virtual void liber_unknown() {}
    virtual void liber_unknown() {}

    CSMemory() = default;

private:
    bool liber_unknown = false;
};

LIBER_ASSERTS_BEGIN(CSMemory);
LIBER_ASSERT_SIZE(0x2B8);
LIBER_ASSERTS_END;
} // namespace CS
} // namespace from
