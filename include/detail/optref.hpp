/**
 * @file optref.hpp
 * @brief Optional references based on std::optional
 *
 * Copyright 2024 libER ELDEN RING API library
 *
 */
#pragma once

#include <concepts>
#include <optional>
#include <type_traits>
#include <utility>

namespace liber {
/// @cond DOXYGEN_SKIP
template <typename T>
concept not_reference = !std::is_reference_v<T>;
/// @endcond

/**
 * @brief A std::optional<std::reference_wrapper<T>> wrapper for lvalue
 * references.
 *
 * Satisfies CopyConstructible, CopyAssignable and TriviallyCopyable.
 *
 * @tparam T the (optionally) referenced object
 */
template <typename T>
    requires not_reference<T>
struct optref {
    /**
     * @brief Value type.
     *
     */
    using value_type = T;

    /**
     * @brief Reference type.
     *
     */
    using reference_type = std::add_lvalue_reference_t<T>;

    /**
     * @brief Const reference type.
     *
     */
    using const_reference_type = std::add_const_t<reference_type>;

    /**
     * @brief Reference wrapper type for std::optional.
     *
     */
    using reference_wrapper_type = std::reference_wrapper<value_type>;

    /**
     * @brief  Default constructor - std::optional contains no reference.
     *
     */
    constexpr optref() noexcept : opt(std::nullopt) {}

    /**
     * @brief Nullopt constructor - no reference.
     *
     */
    constexpr optref(std::nullopt_t) noexcept : opt(std::nullopt) {}

    /**
     * @brief Copy constructor.
     *
     */
    constexpr optref(const optref& other) noexcept : opt(other.opt) {}

    /**
     * @brief Converting copy constructor for base/derived class references.
     *
     * @tparam U another class that is convertible to T
     * @param other
     */
    template <typename U>
        requires std::convertible_to<U, T>
    constexpr optref(const optref<U>& other) noexcept
        : optref([&]() -> optref {
              if (!other.has_reference())
                  return std::nullopt;
              return static_cast<reference_type>(other.reference());
          }()) {}

    /**
     * @brief Construct an optref from reference.
     *
     */
    constexpr optref(T& reference) noexcept
        : opt(reference_wrapper_type(reference)) {}

    /**
     * @brief Construct an optref from std::reference_wrapper.
     *
     */
    constexpr optref(std::reference_wrapper<T> wrapper) noexcept
        : opt(wrapper) {}

    /**
     * @brief Construct an optref from a pointer.
     *
     */
    constexpr optref(T* pointer) noexcept
        : optref([&]() -> optref {
              if (!pointer)
                  return std::nullopt;
              return *pointer;
          }()) {}

    /**
     * @brief Does it contain a reference?
     *
     * @return true
     * @return false
     */
    constexpr bool has_reference() const noexcept {
        return this->opt.has_value();
    }

    /**
     * @brief Does it contain a reference?
     *
     * @return true
     * @return false
     */
    explicit constexpr operator bool() const noexcept {
        return static_cast<bool>(this->opt);
    }

    /**
     * @brief Get the contained reference; throws if none.
     *
     * @throw std::bad_optional_access
     *
     * @return reference_type the reference
     */
    constexpr reference_type reference() {
        return this->opt.value();
    }

    /**
     * @brief Get the contained const reference; throws if none.
     *
     * @throw std::bad_optional_access
     *
     * @return const_reference_type the const reference
     */
    constexpr const_reference_type reference() const {
        return this->opt.value();
    }

    // Other std::optional functions
    // std::optional::operator(s) *,-> and std::optional::value_or aren't
    // applicable to references Would overload operator . if it was possible

    /**
     * @brief Swap implementation.
     *
     * @param other
     */
    void swap(optref& other) noexcept {
        this->opt.swap(other.opt);
    }

    /**
     * @brief Reset (cannot assign after).
     *
     */
    void reset() noexcept {
        this->opt.reset();
    }

private:
    std::optional<reference_wrapper_type> opt;
};
} // namespace liber
