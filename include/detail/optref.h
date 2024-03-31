#pragma once

#include <utility>
#include <optional>
#include <concepts>
#include <type_traits>

namespace liber {
    template <typename T>
    concept not_reference = !std::is_reference_v<T>;

	// A std::optional<std::reference_wrapper<T>> wrapper for lvalue references.
	// Satisfies CopyConstructible, CopyAssignable and TriviallyCopyable.
    template <typename T> requires not_reference<T>
    struct optref {
        using value_type = T;
        using reference_type = std::add_lvalue_reference_t<T>;
        using const_reference_type = std::add_const_t<reference_type>;
        using reference_wrapper_type = std::reference_wrapper<value_type>;

        // Default constructor - std::optional contains no reference
        constexpr optref() noexcept : opt(std::nullopt) {}

        // Nullopt constructor - no reference
        constexpr optref(std::nullopt_t) noexcept : opt(std::nullopt) {}

        // Copy constructor
        constexpr optref(const optref& other) noexcept : opt(other.opt) {}

        // Converting copy constructor for base/derived class references
        template <typename U> requires std::convertible_to<U, T>
        constexpr optref(const optref<U>& other) noexcept : opt(other.has_value() ? static_cast<reference_type>(other.reference()) : std::nullopt) {}

        // Construct an optref from reference
        constexpr optref(T& reference) noexcept : opt(reference_wrapper_type(reference)) {}

        // Construct an optref from std::reference_wrapper
        constexpr optref(std::reference_wrapper<T> wrapper) noexcept : opt(wrapper) {}

        // Contains a reference?
        constexpr bool has_reference() const noexcept { return this->opt.has_value(); }
        explicit constexpr operator bool() const noexcept { return static_cast<bool>(this->opt); }

        // Get the contained reference; throws if none
        // =/= std::optional::value, since references cannot be modified after assignment
        constexpr reference_type reference() { return this->opt.value(); }
        constexpr const_reference_type reference() const { return this->opt.value(); }

        // Other std::optional functions
        // std::optional::operator(s) *,-> and std::optional::value_or aren't applicable to references
        // Would overload operator . if it was possible
        void swap(optref& other) noexcept { this->opt.swap(other.opt); }
        void reset() noexcept { this->opt.reset(); }

    private:
        std::optional<reference_wrapper_type> opt;
    };
}