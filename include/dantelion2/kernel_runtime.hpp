/**
 * @file kernel_runtime.hpp
 * @brief Dantelion2 kernel object management and synchronization
 *
 * Copyright 2024 libER ELDEN RING API library
 *
 */
#pragma once

#include <dantelion2/utility.hpp>
#include <detail/preprocessor.hpp>
#include <detail/minwin.inl>

// Part of namespace DLKR and DLKRD
#include <memory/from_allocator.hpp>

#include <new>

namespace from {
// Windows Kernel runtime functionality;
// mutexes, signals, allocators etc.
namespace DLKR {
// Non-copyable dummy (empty) synchronization object
class DLDummySyncObject : public DLUT::DLNonCopyable {};

/**
 * @brief A wrapper around a Windows Critical Section.
 *
 * Satisfies the C++ Mutex requirement.
 *
 * Recursive, not TimedLockable.
 *
 */
class DLPlainLightMutex : public DLUT::DLNonCopyable {
public:
    LIBER_CLASS(DLPlainLightMutex);

    LIBERAPI DLPlainLightMutex() noexcept;

    /**
     * @brief Initialize the Windows Critical Section with an explicit spin
     * count.
     *
     * @param spin_count how many times to spin before sleeping
     */
    LIBERAPI explicit DLPlainLightMutex(int spin_count) noexcept;

    LIBERAPI virtual ~DLPlainLightMutex() noexcept;

    /**
     * @brief Lock the mutex.
     *
     * Prefer using STL lock objects over calling this explicitly.
     */
    LIBERAPI void lock() noexcept;

    /**
     * @brief Unlock the mutex.
     *
     * Prefer using STL lock objects over calling this explicitly.
     */
    LIBERAPI void unlock() noexcept;

    /**
     * @brief Try to lock the mutex
     *
     * Prefer using STL lock objects over calling this explicitly.
     *
     * @return true acquired the lock
     * @return false failed to acquire the lock
     */
    [[nodiscard]] LIBERAPI bool try_lock() noexcept;

    DLPlainLightMutex(DLPlainLightMutex&&) noexcept = delete;

private:
    CRITICAL_SECTION critical_section;
};

LIBER_ASSERTS_BEGIN(DLPlainLightMutex);
LIBER_ASSERT_SIZE(0x30);
LIBER_ASSERTS_END;

/**
 * @brief A wrapper around a Windows kernel mutex.
 *
 * Satisfies the C++ Mutex requirement.
 *
 * Recursive, not TimedLockable.
 *
 */
class DLPlainMutex : public DLUT::DLNonCopyable {
public:
    LIBER_CLASS(DLPlainMutex);

    LIBERAPI DLPlainMutex() noexcept;

    LIBERAPI virtual ~DLPlainMutex() noexcept;

    /**
     * @brief Lock the mutex.
     *
     * Prefer using STL lock objects over calling this explicitly.
     */
    LIBERAPI void lock() noexcept;

    /**
     * @brief Unlock the mutex.
     *
     * Prefer using STL lock objects over calling this explicitly.
     */
    LIBERAPI void unlock() noexcept;

    /**
     * @brief Try to lock the mutex
     *
     * Prefer using STL lock objects over calling this explicitly.
     *
     * @return true acquired the lock
     * @return false failed to acquire the lock
     */
    [[nodiscard]] LIBERAPI bool try_lock() noexcept;

    DLPlainMutex(DLPlainMutex&&) noexcept = delete;

private:
    HANDLE mutex_handle;
};

LIBER_ASSERTS_BEGIN(DLPlainMutex);
LIBER_ASSERT_SIZE(0x10);
LIBER_ASSERTS_END;

/**
 * @brief A wrapper around a Windows Critical Section (with a spincount).
 *
 * Satisfies the C++ Mutex requirement.
 *
 * Recursive, not TimedLockable.
 *
 */
class DLPlainAdaptiveMutex : public DLPlainLightMutex {
public:
    LIBER_CLASS(DLPlainAdaptiveMutex);

    DLPlainAdaptiveMutex() noexcept
        : DLPlainLightMutex(4000), spin_count(4000) {}

    /**
     * @brief Initialize the Windows Critical Section with an explicit spin
     * count.
     *
     * @param spin_count how many times to spin before sleeping
     */
    explicit DLPlainAdaptiveMutex(int spin_count) noexcept
        : DLPlainLightMutex(spin_count), spin_count(spin_count) {}

    virtual ~DLPlainAdaptiveMutex() noexcept = default;

    DLPlainAdaptiveMutex(DLPlainAdaptiveMutex&&) noexcept = delete;

private:
    int spin_count;
};

LIBER_ASSERTS_BEGIN(DLPlainAdaptiveMutex);
LIBER_ASSERT_SIZE(0x38);
LIBER_ASSERTS_END;
} // namespace DLKR
} // namespace from
