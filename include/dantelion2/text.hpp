#pragma once

#include <detail/preprocessor.hpp>
#include <memory/from_string.hpp>

#include <string>
#include <utility>

// TODO: anchor vtable
namespace from {
// "Dantelion text" namespace
namespace DLTX {
// Simple structure that holds a string pointer
// and a hash of the string. It is rehashed after
// the string could have changed (non-const access)
template <typename T>
struct string_hash {
    string_hash(const T& str) : str(&str), hash_value(0), needs_hashing(true) {}

    void may_change() noexcept {
        this->needs_hashing = true;
    }

    int get_hash() noexcept {
        if (this->needs_hashing) this->hash_string(*this->str);
        return this->hash_value;
    }

    int hash_string(const T& str) noexcept {
        int result = 0;
        for (int chr : str) {
            // To lowercase (approximate)
            if (chr <= 'Z') chr += 0x20;
            // Treat backslashes identically
            else if (chr == '\\') chr = '/';
            result *= 137;
            result += chr;
        }
        this->hash_value = result;
        this->needs_hashing = false;
        return result;
    }

private:
    const T* str;
    int hash_value;
    bool needs_hashing;
};

// A minimal FD4BasicHashString implementation,
// using std::basic_string constructors and member access
// to provide full string functionality along with hashing.
struct FD4BasicHashString {
    LIBER_CLASS(FD4BasicHashString);

    using string_type = from::wstring;
    using hash_type = string_hash<from::wstring>;

    virtual ~FD4BasicHashString() = default;

    // Forward to string constructors
    template <typename... Args>
    FD4BasicHashString(Args&&... args)
        : string(std::forward<Args>(args)...), string_hash(this->string) {}

    operator string_type&() noexcept {
        return this->get_string();
    }

    operator const string_type&() const noexcept {
        return this->get_string();
    }

    string_type& get_string() noexcept {
        this->string_hash.may_change();
        return this->string;
    }

    const string_type& get_string() const noexcept {
        return this->string;
    }

    int get_hash() const noexcept {
        return string_hash.get_hash();
    }

private:
    string_type string;
    // May be rehashed
    mutable hash_type string_hash;
};

// Common Dantelion string type.
// The purpose of the bool is unknown,
// may be related to weak referencing
using DLString = std::pair<from::string, bool>;

LIBER_ASSERTS_BEGIN(FD4BasicHashString);
LIBER_ASSERT_SIZE(0x40);
LIBER_ASSERTS_END;
} // namespace DLTX
} // namespace from