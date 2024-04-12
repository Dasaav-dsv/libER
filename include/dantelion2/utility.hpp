/**
 * @file utility.hpp
 * @brief Dantelion2 utility
 *
 * Copyright 2024 libER ELDEN RING API library
 *
 */
#pragma once

#include <detail/preprocessor.hpp>
#include <memory/from_allocator.hpp>

#include <algorithm>
#include <atomic>
#include <compare>
#include <concepts>
#include <stdexcept>
#include <utility>

namespace from {
// Dantelion2 utility
namespace DLUT {
/**
 * @brief Base class used for non-copyable, but movable objects
 *
 */
class DLNonCopyable {
public:
    DLNonCopyable() = default;
    LIBERAPI virtual ~DLNonCopyable();

    DLNonCopyable(const DLNonCopyable&) = delete;
    DLNonCopyable& operator=(const DLNonCopyable&) = delete;
};

/**
 * @brief Abstract class for implementing reference counting garbage collection.
 *
 * Commonly used in ELDEN RING's codebase.
 *
 * @note Derived classes must provide a deleter method.
 *
 */
class DLReferenceCountObject {
public:
    LIBER_CLASS(DLReferenceCountObject);

    DLReferenceCountObject() : counter(0){};

    /**
     * @brief The deleter method to call when reference count reaches zero.
     *
     */
    virtual void deleter() = 0;
    virtual ~DLReferenceCountObject() = default;

private:
    template <typename T>
        requires std::derived_from<T, DLReferenceCountObject>
    friend class DLReferenceCountPtr;

    // Number of references to object
    int count() const noexcept {
        return this->counter.load(std::memory_order_relaxed);
    }

    // Reference object
    void ref() noexcept {
        ++this->counter;
    }

    // Unreference object; there cannot
    // be more ref() calls than unref() calls
    void unref() {
        int value = this->counter.fetch_add(-1, std::memory_order_seq_cst);
        if (value == 1)
            this->deleter();
        else if (value < 1)
            throw std::runtime_error("bad unref() call");
    }

    std::atomic_int counter;
};

// A refcounted pointer that models std::shared_ptr
// Use from::make_refcounted<T>(...) to create refcounted objects
// These objects must derive from DLReferenceCountObject
/**
 * @brief A refcounted pointer that models std::shared_ptr<T>.
 *
 * Use @ref from::make_refcounted to create refcounted objects.
 *
 * @note These objects must derive from DLReferenceCountObject.
 *
 * @tparam T a class that derives from DLReferenceCountObject
 */
template <typename T>
    requires std::derived_from<T, DLReferenceCountObject>
class DLReferenceCountPtr {
public:
    LIBER_CLASS(DLReferenceCountPtr);

    DLReferenceCountPtr() noexcept : raw(nullptr) {}

    /**
     * @brief Construct a new DLReferenceCountPtr (std::nullopt).
     *
     */
    DLReferenceCountPtr(std::nullptr_t) noexcept : raw(nullptr) {}

    /**
     * @brief Construct a new DLReferenceCountPtr (raw pointer).
     *
     * @tparam U a class that derives from DLReferenceCountObject and is a
     * common class with T
     * @param raw the raw pointer to own and manage
     */
    template <class U>
        requires std::convertible_to<U*, T*>
    explicit DLReferenceCountPtr(U* raw) noexcept : raw(raw) {
        if (this->get())
            this->counter().ref();
    }

    /**
     * @brief Construct a new DLReferenceCountPtr object (copy).
     *
     * @param other
     */
    DLReferenceCountPtr(const DLReferenceCountPtr& other) noexcept
        : DLReferenceCountPtr(other.get()) {}

    /**
     * @brief Construct a new DLReferenceCountPtr object (copy, pointer
     * conversion).
     *
     * @tparam U other class that derives from DLReferenceCountObject and is a
     * common class with T
     * @param other
     */
    template <class U>
        requires std::convertible_to<U*, T*>
    DLReferenceCountPtr(const DLReferenceCountPtr<U>& other) noexcept
        : DLReferenceCountPtr(other.get()) {}

    /**
     * @brief Construct a new DLReferenceCountPtr object (move).
     *
     * Does not modify the reference count.
     *
     * @param other
     */
    DLReferenceCountPtr(DLReferenceCountPtr&& other) noexcept {
        this->raw = std::exchange(other.raw, nullptr);
    }

    /**
     * @brief Construct a new DLReferenceCountPtr object (move, pointer
     * conversion).
     *
     * Does not modify the reference count.
     *
     * @tparam U another class that derives from DLReferenceCountObject and is a
     * common class with T
     * @param other
     */
    template <class U>
        requires std::convertible_to<U*, T*>
    DLReferenceCountPtr(DLReferenceCountPtr<U>&& other) noexcept {
        this->raw = std::exchange(other.raw, nullptr);
    }

    ~DLReferenceCountPtr() {
        if (this->get())
            this->counter().unref();
    }

    /**
     * @brief Copy assignment operator.
     *
     * @tparam U another class that derives from DLReferenceCountObject and is a
     * common class with T
     * @param other
     */
    template <class U>
        requires std::convertible_to<U*, T*>
    DLReferenceCountPtr& operator=(const DLReferenceCountPtr<U>& other) {
        if (this->get())
            this->counter().unref();
        this->raw = other->get();
        if (this->get())
            this->counter().ref();
        return *this;
    }

    /**
     * @brief Move assignment operator.
     *
     * Does not modify the reference count.
     *
     * @tparam U another class that derives from DLReferenceCountObject and is a
     * common class with T
     * @param other
     */
    template <class U>
        requires std::convertible_to<U*, T*>
    DLReferenceCountPtr& operator=(DLReferenceCountPtr<U>&& other) {
        if (this->get())
            this->counter().unref();
        this->raw = std::exchange(other.raw, nullptr);
        return *this;
    }

    /**
     * @brief Reset the owned pointer (and decrement reference count).
     *
     */
    void reset() {
        if (this->raw)
            this->counter().unref();
        this->raw = nullptr;
    }

    /**
     * @brief Replace the owned pointer (and decrement reference count).
     *
     * @tparam U another class that derives from DLReferenceCountObject and is a
     * common class with T
     * @param raw the raw pointer to own and manage
     */
    template <class U>
        requires std::convertible_to<U*, T*>
    void reset(U* raw) {
        if (this->raw)
            this->counter().unref();
        this->raw = raw;
        if (raw)
            this->counter().ref();
    }

    /**
     * @brief Swap for DLReferenceCountPtr.
     *
     * @param other
     */
    void swap(DLReferenceCountPtr& other) {
        std::swap(this->raw, other.raw);
    }

    /**
     * @brief Get the managed pointer.
     *
     * @return T* pointer (may be null)
     */
    T* get() const noexcept {
        return this->raw;
    }

    /**
     * @brief Dereference the managed pointer.
     *
     * @warning Unchecked, may dereference a nullptr!
     *
     * @return T& reference to the managed object
     */
    T& operator*() const noexcept {
        return *this->get();
    }

    /**
     * @brief Member access for the managed object.
     *
     * @warning Unchecked, may dereference a nullptr!
     */
    T* operator->() const noexcept {
        return this->get();
    }

    /**
     * @brief Check if the managed pointer is not null.
     *
     * @return bool is not null
     */
    explicit operator bool() const noexcept {
        return this->get();
    }

private:
    DLReferenceCountObject& counter() noexcept {
        return static_cast<DLReferenceCountObject&>(*this->raw);
    }

    T* raw;
};

/**
 * @brief DLReferenceCountPtr comparison. 
 * 
 */
template <typename T, typename U>
inline bool operator==(const DLReferenceCountPtr<T>& lhs,
    const DLReferenceCountPtr<U>& rhs) {
    return lhs.get() == rhs.get();
}

/**
 * @brief DLReferenceCountPtr comparison. 
 * 
 */
template <typename T, typename U>
inline std::strong_ordering operator<=>(const DLReferenceCountPtr<T>& lhs,
    const DLReferenceCountPtr<U>& rhs) {
    return lhs.get() <=> rhs.get();
}

/**
 * @brief DLReferenceCountPtr comparison. 
 * 
 */
template <typename T, typename U>
inline bool operator==(const DLReferenceCountPtr<U>& lhs, std::nullptr_t) {
    return lhs.get() == nullptr;
}

/**
 * @brief DLReferenceCountPtr comparison. 
 * 
 */
template <typename T, typename U>
inline std::strong_ordering operator<=>(const DLReferenceCountPtr<T>& lhs,
    std::nullptr_t) {
    return lhs.get() <=> nullptr;
}

LIBER_ASSERTS_BEGIN(DLReferenceCountObject);
LIBER_ASSERT_SIZE(0x10);
LIBER_ASSERTS_END;

struct dummy_rfco : DLReferenceCountObject {};
LIBER_ASSERTS_TEMPLATE_BEGIN(DLReferenceCountPtr, dummy_rfco);
LIBER_ASSERT_SIZE(0x8);
LIBER_ASSERTS_END;
} // namespace DLUT

/**
 * @brief Construct a reference counted object with the default libER allocator.
 * 
 * @tparam T class that derives from DLReferenceCountObject
 * @param args constructor parameters
 * @return [[nodiscard]] DLUT::DLReferenceCountPtr<T> the resulting refcounted pointer
 */
template <typename T, typename... Args>
    requires std::derived_from<T, DLUT::DLReferenceCountObject>
[[nodiscard]] inline DLUT::DLReferenceCountPtr<T> make_refcounted(
    Args&&... args) {
    return allocate_refcounted(from::allocator<T>{},
        std::forward<Args>(args)...);
}
} // namespace from
