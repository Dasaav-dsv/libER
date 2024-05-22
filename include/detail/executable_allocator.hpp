#pragma once

#include <detail/preprocessor.hpp>

#include <cstddef>
#include <cstdint>
#include <memory>
#include <type_traits>

namespace liber {
LIBERAPI void* allocate_executable_memory(size_t size, size_t alignment);

template <typename T>
class liber_executable_allocator {
public:
    using value_type = T;
    using size_type = size_t;
    using difference_type = ptrdiff_t;
    using propagate_on_container_move_assignment = std::true_type;
    using is_always_equal = std::true_type;

    liber_executable_allocator() noexcept = default;

    template <typename U>
    liber_executable_allocator(const liber_executable_allocator<U>&) noexcept {}

    [[nodiscard]] T* allocate(size_type n) {
        return reinterpret_cast<T*>(
            allocate_executable_memory(n * sizeof(T), alignof(T)));
    }

    void deallocate(T* p, size_type n = 0) {
        this->proxy().deallocate((void*)p);
    }

    template <typename T1, typename T2>
    friend bool operator==(const liber_executable_allocator<T1>&,
        const liber_executable_allocator<T2>&) noexcept;
};

template <typename T1, typename T2>
bool operator==(const liber_executable_allocator<T1>&,
    const liber_executable_allocator<T2>&) noexcept {
    return true;
}
} // namespace liber
