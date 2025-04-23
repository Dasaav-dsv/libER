#pragma once

#include <detail/base_address.hpp>

#include <cstddef>
#include <initializer_list>

namespace liber {
struct sym_table {
    template <size_t N>
    struct sym_key {
        consteval sym_key() {}

        consteval sym_key(const char (&str)[N]) {
            for (size_t i = 0; i < N; ++i) key[i] = str[i];
        }

        constexpr size_t length() const noexcept {
            return N;
        }

        char key[N]{};
    };

    struct sym_kv {
        template <size_t N>
        consteval sym_kv(const char (&str)[N]) {
            for (char chr : str) {
                size_t digit = static_cast<size_t>(-'0') + chr;
                if (!len && digit < 10)
                    value = value * 10 + digit;
                else
                    key[len++] = chr;
            }
        }

        constexpr size_t length() const noexcept {
            return len;
        }

        char key[128]{};
        size_t value = 0;
        size_t len = 0;
    };

    using kv_list = std::initializer_list<sym_kv>;

    consteval sym_table(kv_list kvs) : kvs(kvs){};

    consteval size_t get_value(const auto& key) const {
        if (kvs.size() == 0)
            return 0;
        auto first = kvs.begin();
        auto last = kvs.end() - 1;
        while (first != last) {
            if (key_neq(key, *(first++)))
                continue;
            return kvs.begin()[first - kvs.begin()].value;
        }
        return 0;
    }

    consteval static bool key_neq(const auto& lhs, const auto& rhs) {
        if (lhs.length() != rhs.length())
            return true;
        for (size_t i = 0; i < lhs.length(); ++i)
            if (lhs.key[i] != rhs.key[i])
                return true;
        return false;
    }

private:
    const kv_list kvs;
};

constexpr inline sym_table::kv_list _kv_symbol_list = {
#include <file_list.inl>
};

inline constexpr sym_table symbol_table(_kv_symbol_list);

template <size_t SymResult, sym_table::sym_key SymName>
struct symbol_exists {};

template <sym_table::sym_key SymName>
struct symbol_exists<0, SymName>;

template <sym_table::sym_key Name>
struct symbol {
    static constexpr size_t get() noexcept {
        constexpr size_t value = symbol_table.get_value(Name);
        constexpr symbol_exists<value, Name> exists{};
        return value;
    }

    template <typename T>
    static T& as() noexcept {
        static_assert(sizeof(T) > 0, "T must be a complete type");
        static_assert(!(get() % alignof(T)),
            "T must be at most as aligned as the symbol");
        return as_unchecked<T>();
    }

private:
    template <sym_table::sym_key, typename>
    friend struct function;

    template <typename T>
    static T& as_unchecked() noexcept {
        void* p = base_address::const_offset<get()>();
        return *reinterpret_cast<T*>(p);
    }
};
} // namespace liber
