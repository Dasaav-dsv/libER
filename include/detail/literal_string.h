#pragma once

#include <cstddef>
#include <cstdint>
#include <algorithm>
#include <iterator>

/*
* Simple constant evalutated string from a string literal.
*/

namespace liber {
    // Simple constant evalutated string from a string literal.
    template <typename CharT, size_t N>
    struct literal_string {
        consteval literal_string() = default;

        consteval literal_string(const CharT(&str)[N]) {
            std::copy_n(str, N, this->string);
        }

        // Widen CharT to wchar_t over the array
        consteval literal_string<wchar_t, N> widen() const {
            wchar_t out[N]{};
            std::copy(std::begin(this->string), std::end(this->string), std::begin(out));
            return out;
        }

        // Truncate CharT to char over the array
        consteval literal_string<char, N> trunc() const {
            char out[N]{};
            std::copy(std::begin(this->string), std::end(this->string), std::begin(out));
            return out;
        }

        CharT string[N]{};
    };
}