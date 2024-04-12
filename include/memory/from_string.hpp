/**
 * @file from_string.hpp
 * @brief from::basic_string based on std::basic_string
 * 
 * Copyright 2024 libER ELDEN RING API library
 * 
 */
#pragma once

#if defined(_ITERATOR_DEBUG_LEVEL) && _ITERATOR_DEBUG_LEVEL > 0
#error "_ITERATOR_DEBUG_LEVEL" must be defined as "0" for STL containers to be compatible with the ELDEN RING ABI.
#endif

#include <memory/from_allocator.hpp>
#include <string>

namespace from {
/**
 * @brief std::basic_string with from::allocator.
 *
 */
template <typename CharT, typename Traits = std::char_traits<CharT>,
    typename AllocatorTag = from::default_allocator_tag>
using basic_string =
    std::basic_string<CharT, Traits, from::allocator<CharT, AllocatorTag>>;

/**
 * @brief std::string with from::allocator.
 *
 * The allocator is embedded in the string, so
 * sizeof(from::string) != sizeof(std::string).
 * 
 */
using string = from::basic_string<char, std::char_traits<char>,
    from::default_allocator_tag>;

/**
 * @brief std::wstring with from::allocator.
 * 
 * The allocator is embedded in the string, so
 * sizeof(from::string) != sizeof(std::string).
 *
 */
using wstring = from::basic_string<wchar_t, std::char_traits<wchar_t>,
    from::default_allocator_tag>;

/**
 * @brief std::string with from::allocator that is empty.
 * 
 * The allocator is NOT embedded in the string, so
 * sizeof(from::ebstring) == sizeof(std::string).
 *
 */
using ebstring = from::basic_string<char, std::char_traits<char>,
    from::default_empty_base_allocator_tag>;

/**
 * @brief std::wstring with from::allocator that is empty.
 * 
 * The allocator is NOT embedded in the string, so
 * sizeof(from::ebwstring) == sizeof(std::wstring).
 *
 */
using ebwstring = from::basic_string<wchar_t, std::char_traits<wchar_t>,
    from::default_empty_base_allocator_tag>;

// Compile time size checks - failing these means binary incompatibility
static_assert(sizeof(from::string) == 40, "ELDEN RING ABI requirement");
static_assert(sizeof(from::ebstring) == 32, "ELDEN RING ABI requirement");
} // namespace from
