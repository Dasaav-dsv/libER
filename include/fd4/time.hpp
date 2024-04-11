#pragma once

namespace from {
namespace FD4 {
// A basic floating point time class.
// Used for relative and absolute time, timers,
// delta time etc.
struct FD4Time {
    virtual ~FD4Time() noexcept;
    float time = 0.0f;
};
} // namespace FD4
} // namespace from
