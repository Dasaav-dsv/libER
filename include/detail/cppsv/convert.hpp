#pragma once

#include <algorithm>
#include <optional>
#include <type_traits>

namespace cppsv {
// Convert a single character that represents
// an integer digit (up to base 36) to its value representation
inline constexpr char32_t char_digit(char32_t chr) {
    // clang-format off
    const char* digit_lut = 
        "\x24\x24\x24\x24\x24\x24\x24\x24\x24\x24\x24\x24\x24\x24\x24\x24"\
        "\x24\x24\x24\x24\x24\x24\x24\x24\x24\x24\x24\x24\x24\x24\x24\x24"\
        "\x24\x24\x24\x24\x24\x24\x24\x24\x24\x24\x24\x24\x24\x24\x24\x24"\
        "\x00\x01\x02\x03\x04\x05\x06\x07\x08\x09\x24\x24\x24\x24\x24\x24"\
        "\x24\x0a\x0b\x0c\x0d\x0e\x0f\x10\x11\x12\x13\x14\x15\x16\x17\x18"\
        "\x19\x1a\x1b\x1c\x1d\x1e\x1f\x20\x21\x22\x23\x24\x24\x24\x24\x24"\
        "\x24\x0a\x0b\x0c\x0d\x0e\x0f\x10\x11\x12\x13\x14\x15\x16\x17\x18"\
        "\x19\x1a\x1b\x1c\x1d\x1e\x1f\x20\x21\x22\x23\x24\x24\x24\x24\x24";
    // clang-format on
    return chr < 0x80 ? digit_lut[chr] : 36;
}

// Convert a single ASCII character to its lowercase counterpart
inline constexpr char32_t char_lower(char32_t chr) noexcept {
    char32_t chr_A = chr - 'A';
    return chr_A > 'Z' - 'A' ? chr : chr_A + 'a';
}

// Convert a character range between first and last to an integer
// Supports base 2, 10 and 16 prefixes, radixes 2-36
template <typename Integer, typename It>
inline constexpr std::optional<Integer> to_integer(It first, It last,
    Integer = {}, int radix = 10) noexcept {
    // Trim leading and trailing characters
    do {
        if (first == last)
            return std::nullopt;
        auto prev = last - 1;
        if (*first == ' ')
            ++first;
        else if (*prev == ' ' || *prev == '\0')
            last = prev;
        else
            break;
    } while (true);
    bool sign = *first == '-';
    if (sign)
        ++first;
    if (first == last)
        return std::nullopt;
    int base = radix;
    // 0x, 0o, 0b prefix notation check (can use uppercase)
    if (*first == '0') {
        It it_chr = ++first;
        if (it_chr == last) {
            return Integer{};
        }
        auto chr = *it_chr;
        first = ++it_chr;
        switch (char_lower(chr)) {
        case 'x':
            base = 16;
            break;
        case 'o':
            base = 8;
            break;
        case 'b':
            base = 2;
            break;
        default:
            return std::nullopt;
        }
    }
    Integer result{};
    while (first != last) {
        auto digit = char_digit(*(first++));
        if (digit > base)
            return std::nullopt;
        result = result * base + digit;
    }
    // Return signed result
    return sign ? -result : result;
}

template <typename CharT>
struct fp_constants {
    static constexpr CharT infinity[]{ 'i', 'n', 'f', 'i', 'n', 'i', 't', 'y' };
    static constexpr CharT inf[]{ 'i', 'n', 'f' };
    static constexpr CharT nan[]{ 'n', 'a', 'n' };
};

template <typename Fp, typename It>
inline constexpr auto check_fp_constants(It first, It last,
    Fp default_result) noexcept {
    using reference = typename std::iterator_traits<It>::value_type;
    using constants_type =
        fp_constants<typename std::iterator_traits<It>::value_type>;
    auto pred = [](const reference first, const reference second) {
        return char_lower(first) == second;
    };
    if (std::equal(first, last, std::begin(constants_type::infinity),
            std::end(constants_type::infinity), pred)
        || std::equal(first, last, std::begin(constants_type::inf),
            std::end(constants_type::inf), pred)) {
        return std::numeric_limits<Fp>::infinity();
    }
    else if (std::equal(first, last, std::begin(constants_type::nan),
                 std::end(constants_type::nan), pred)) {
        return std::numeric_limits<Fp>::quiet_NaN();
    }
    else
        return default_result;
}

// Convert a character range between first and last to a floating point number
// Supports normal and E notation, but not hexadecimal floating poing notation
template <typename Fp, typename It>
inline constexpr std::optional<Fp> to_floating_point(It first, It last,
    Fp = {}) noexcept {
    // Trim leading and trailing characters
    do {
        if (first == last)
            return std::nullopt;
        auto prev = last - 1;
        if (*first == ' ')
            ++first;
        else if (*prev == ' ' || *prev == '\0')
            last = prev;
        else
            break;
    } while (true);
    bool sign = *first == '-';
    if (sign)
        ++first;
    if (first == last)
        return std::nullopt;
    // Could be a FP constant ("nan", "inf", "infinity" in any case)
    auto first_chr = char_lower(*first);
    if (first_chr == 'i' || first_chr == 'n') {
        Fp default_result = Fp{};
        Fp result = check_fp_constants(first, last, default_result);
        // Already matched the start of some non-numeric character sequence
        // return unconditionally
        if (result == default_result)
            return std::nullopt;
        else
            return sign ? -result : result;
    }
    // Find exponent part (e, E), if present
    It first_exp = first;
    while (++first_exp != last)
        if (char_lower(*first_exp) == 'e')
            break;
    // Calculate base 10 whole part
    // Iterate from most significant digit forward
    Fp result{};
    // clang-format off
    constexpr Fp fp_lut[] = {
        0.0, 1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0, 9.0 
    };
    // clang-format on
    auto last_decimal = first_exp;
    while (first != last_decimal) {
        auto chr = *(first++);
        if (chr == '.')
            break;
        auto digit = char_digit(chr);
        if (digit > 10)
            return std::nullopt;
        result = result * static_cast<Fp>(10.0) + fp_lut[digit];
    }
    // Calculate base 10 fractional part
    // Iterate from least significant digit backward
    Fp decimals{};
    while (first != last_decimal) {
        auto chr = *(--last_decimal);
        auto digit = char_digit(chr);
        if (digit > 10)
            return std::nullopt;
        decimals = decimals / static_cast<Fp>(10.0) + fp_lut[digit];
    }
    // The first decimal digit is still in the whole part, adjust and add
    result += decimals / static_cast<Fp>(10.0);
    if (first_exp != last) {
        // Calculate exponent (integer only!)
        auto exponent_opt = to_integer<int>(++first_exp, last);
        if (!exponent_opt)
            return std::nullopt;
        int exponent = exponent_opt.value();
        if (exponent > 0)
            while (exponent--) result *= static_cast<Fp>(10.0);
        else if (exponent < 0)
            while (exponent++) result /= static_cast<Fp>(10.0);
    }
    // Return signed result
    return sign ? -result : result;
}
} // namespace cppsv
