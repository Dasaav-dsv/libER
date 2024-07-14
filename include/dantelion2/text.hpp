/**
 * @file text.hpp
 * @brief Dantelion2 strings
 *
 * Copyright 2024 libER ELDEN RING API library
 *
 */
#pragma once

#include <detail/preprocessor.hpp>
#include <memory/from_string.hpp>

#include <string>
#include <utility>

namespace from {
// "Dantelion text" namespace
namespace DLTX {
/**
 * @brief Simple structure that holds a string pointer
 * and a hash of the string.
 *
 * The string is rehashed after the string could have changed (non-const
 * access). The hash is 32 bits in size.
 *
 */
struct string_hash {
    /**
     * @brief Construct a new string hash object.
     *
     */
    string_hash() : str(nullptr), hash_value(0), needs_hashing(true) {}

    /**
     * @brief Construct a new string hash object.
     *
     * @param str the string
     */
    explicit string_hash(const wchar_t* str)
        : str(str), hash_value(0), needs_hashing(true) {}

    /**
     * @brief Request a lazy rehash if the string may change.
     *
     */
    void may_change() noexcept {
        this->needs_hashing = true;
    }

    /**
     * @brief Get the hash of the string.
     *
     * @return int hash of the string
     *
     * @tparam T type of the string
     */
    template <typename T>
    int get_hash(const T& str) noexcept {
        if (this->needs_hashing)
            this->hash_string(str);
        return this->hash_value;
    }

    /**
     * @brief Hash the string and get the hash.
     *
     * Differs from @ref get_hash in that it always rehashes the string, while
     * @ref get_hash may return a cached result if the string has not changed.
     *
     * The implementation mirrors ELDEN RING's string hashing and produces
     * equivalent hashes for the same strings.
     *
     * @return int hash of the string
     *
     * @tparam T type of the string
     */
    template <typename T>
    int hash_string(const T& str) noexcept {
        int result = 0;
        for (int chr : str) {
            // To lowercase (approximate)
            if (chr <= 'Z')
                chr += 0x20;
            // Treat backslashes identically
            else if (chr == '\\')
                chr = '/';
            result *= 137;
            result += chr;
        }
        this->hash_value = result;
        this->needs_hashing = false;
        return result;
    }

    /**
     * @brief Set the underlying string pointer of the hash.
     *
     * @param new_ptr new pointer to use
     */
    void set_string_ptr(const wchar_t* new_ptr) {
        this->str = new_ptr;
    }

private:
    const wchar_t* str;
    int hash_value;
    bool needs_hashing;
};

/**
 * @brief A minimal FD4BasicHashString implementation
 *
 * Uses the from::wstring constructor and member access to provide full string
 * functionality along with hashing.
 *
 */
class FD4BasicHashString {
    using string_type = from::wstring;

public:
    LIBER_CLASS(FD4BasicHashString);

    virtual ~FD4BasicHashString();

    /**
     * @brief Construct a new FD4BasicHashString object with from::wstring
     * constructor arguments.
     *
     * @param args the arguments to pass to the string constructor
     */
    template <typename... Args>
    FD4BasicHashString(Args&&... args) : string(std::forward<Args>(args)...) {}

    /**
     * @brief Access the string with an implicit conversion.
     *
     * @return string_type& string
     */
    operator string_type&() noexcept {
        this->string_hash.may_change();
        return this->get_string();
    }

    /**
     * @brief Access the string with an implicit conversion.
     *
     * @return const string_type& string
     */
    operator const string_type&() const noexcept {
        return this->get_string();
    }

    /**
     * @brief Access the string.
     *
     * @return string_type& string
     */
    string_type& get_string() noexcept {
        this->string_hash.may_change();
        return this->string;
    }

    /**
     * @brief Access the string.
     *
     * @return const string_type& string
     */
    const string_type& get_string() const noexcept {
        return this->string;
    }

    /**
     * @brief Access the hash.
     *
     * @see string_hash.
     *
     * @return int hash
     */
    int get_hash() const noexcept {
        return string_hash.get_hash(*this);
    }

    /**
     * @brief Iterator begin.
     *
     * @return string begin iterator.
     */
    auto begin() noexcept {
        return this->string.begin();
    }

    /**
     * @brief Iterator const begin.
     *
     * @return const string begin iterator.
     */
    auto begin() const noexcept {
        return this->string.begin();
    }

    /**
     * @brief Iterator end.
     *
     * @return string end iterator.
     */
    auto end() noexcept {
        return this->string.end();
    }

    /**
     * @brief Iterator end.
     *
     * @return const string end iterator.
     */
    auto end() const noexcept {
        return this->string.end();
    }

private:
    string_type string;
    // May be rehashed
    mutable string_hash string_hash;
};

/**
 * @brief Common Dantelion string type.
 *
 * The purpose of the bool is unknown,
 * may be related to weak referencing.
 */
using DLString = std::pair<from::wstring, bool>;
} // namespace DLTX
} // namespace from

LIBER_ASSERTS_BEGIN(from::DLTX::FD4BasicHashString);
LIBER_ASSERT_SIZE(0x40);
LIBER_ASSERTS_END;
