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
// Base class used for non-copyable,
// but movable objects
class DLNonCopyable {
public:
    DLNonCopyable() = default;
    virtual ~DLNonCopyable();

    DLNonCopyable(const DLNonCopyable&) = delete;
    DLNonCopyable& operator=(const DLNonCopyable&) = delete;
};

// Base class for implementing
// reference counting garbage collection.
// Derived classes provide a deleter method
class DLReferenceCountObject {
public:
    LIBER_CLASS(DLReferenceCountObject);

    DLReferenceCountObject() : counter(0){};

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
        if (value == 1) this->deleter();
        else if (value < 1) throw std::runtime_error("bad unref() call");
    }

    std::atomic_int counter;
};

// A refcounted pointer that models std::shared_ptr
// Use from::make_refcounted<T>(...) to create refcounted objects
// These objects must derive from DLReferenceCountObject
template <typename T>
    requires std::derived_from<T, DLReferenceCountObject>
class DLReferenceCountPtr {
public:
    LIBER_CLASS(DLReferenceCountPtr);

    DLReferenceCountPtr() noexcept : raw(nullptr) {}
    DLReferenceCountPtr(std::nullptr_t) noexcept : raw(nullptr) {}

    template <class U>
        requires std::convertible_to<U*, T*>
    explicit DLReferenceCountPtr(U* raw) noexcept : raw(raw) {
        if (this->get()) this->counter().ref();
    }

    DLReferenceCountPtr(const DLReferenceCountPtr& other) noexcept
        : DLReferenceCountPtr(other.get()) {}

    template <class U>
        requires std::convertible_to<U*, T*>
    DLReferenceCountPtr(const DLReferenceCountPtr<U>& other) noexcept
        : DLReferenceCountPtr(other.get()) {}

    DLReferenceCountPtr(DLReferenceCountPtr&& other) noexcept {
        this->raw = std::exchange(other.raw, nullptr);
    }

    template <class U>
        requires std::convertible_to<U*, T*>
    DLReferenceCountPtr(DLReferenceCountPtr<U>&& other) noexcept {
        this->raw = std::exchange(other.raw, nullptr);
    }

    ~DLReferenceCountPtr() {
        if (this->get()) this->counter().unref();
    }

    template <class U>
        requires std::convertible_to<U*, T*>
    DLReferenceCountPtr& operator=(const DLReferenceCountPtr<U>& other) {
        if (this->get()) this->counter().unref();
        this->raw = other->get();
        if (this->get()) this->counter().ref();
        return *this;
    }

    template <class U>
        requires std::convertible_to<U*, T*>
    DLReferenceCountPtr& operator=(DLReferenceCountPtr<U>&& other) {
        if (this->get()) this->counter().unref();
        this->raw = std::exchange(other.raw, nullptr);
        return *this;
    }

    void reset() {
        this->counter().unref();
        this->raw = nullptr;
    }

    template <class U>
        requires std::convertible_to<U*, T*>
    void reset(U* raw) {
        this->counter().unref();
        this->raw = raw;
        if (raw) this->counter().ref();
    }

    void swap(DLReferenceCountPtr& other) {
        std::swap(this->raw, other.raw);
    }

    T* get() const noexcept {
        return this->raw;
    }

    T& operator*() const noexcept {
        return *this->get();
    }

    T* operator->() const noexcept {
        return this->get();
    }

    explicit operator bool() const noexcept {
        return this->get();
    }

private:
    DLReferenceCountObject& counter() noexcept {
        return static_cast<DLReferenceCountObject&>(*this->raw);
    }

    T* raw;
};

// Pointer comparison operators:
template <typename T, typename U>
inline bool operator==(
    const DLReferenceCountPtr<T>& lhs, const DLReferenceCountPtr<U>& rhs) {
    return lhs.get() == rhs.get();
}

template <typename T, typename U>
inline std::strong_ordering operator<=>(
    const DLReferenceCountPtr<T>& lhs, const DLReferenceCountPtr<U>& rhs) {
    return lhs.get() <=> rhs.get();
}

template <typename T, typename U>
inline bool operator==(const DLReferenceCountPtr<U>& lhs, std::nullptr_t) {
    return lhs.get() == nullptr;
}

template <typename T, typename U>
inline std::strong_ordering operator<=>(
    const DLReferenceCountPtr<T>& lhs, std::nullptr_t) {
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

// Construct a reference counted object using a provided allocator
template <typename T, typename U, typename... Args>
    requires std::derived_from<T, DLUT::DLReferenceCountObject>
[[nodiscard]] inline DLUT::DLReferenceCountPtr<T> allocate_refcounted(
    const from::allocator<U>& allocator, Args&&... args) {
    using allocator_rebind_type = typename std::allocator_traits<
        from::allocator<U>>::template rebind_alloc<T>;
    allocator_rebind_type allocator_rebind{ allocator };
    T* raw = std::allocator_traits<allocator_rebind_type>::allocate(
        allocator_rebind, 1);
    std::allocator_traits<allocator_rebind_type>::construct(
        allocator_rebind, raw, std::forward<Args>(args)...);
    return DLUT::DLReferenceCountPtr<T>(raw);
}

// Construct a reference counted object using a provided allocator
template <typename T, typename... Args>
    requires std::derived_from<T, DLUT::DLReferenceCountObject>
[[nodiscard]] inline DLUT::DLReferenceCountPtr<T> allocate_refcounted(
    const from::allocator<T>& allocator, Args&&... args) {
    from::allocator<T> proxy_allocator{ allocator };
    T* raw =
        std::allocator_traits<from::allocator<T>>::allocate(proxy_allocator, 1);
    std::allocator_traits<from::allocator<T>>::construct(
        proxy_allocator, raw, std::forward<Args>(args)...);
    return DLUT::DLReferenceCountPtr<T>(raw);
}

// Construct a reference counted object with the default libER allocator
template <typename T, typename... Args>
    requires std::derived_from<T, DLUT::DLReferenceCountObject>
[[nodiscard]] inline DLUT::DLReferenceCountPtr<T> make_refcounted(
    Args&&... args) {
    return allocate_refcounted(
        from::allocator<T>{}, std::forward<Args>(args)...);
}
} // namespace from