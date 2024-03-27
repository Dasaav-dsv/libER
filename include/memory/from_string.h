#pragma once

#if defined(_ITERATOR_DEBUG_LEVEL) && _ITERATOR_DEBUG_LEVEL > 0
#error "_ITERATOR_DEBUG_LEVEL" must be defined as "0" for STL containers to be compatible with the ELDEN RING ABI.
#endif

#include <string>
#include <memory/from_allocator.h>

namespace from {
    template <typename CharT, typename Traits = std::char_traits<CharT>, typename AllocatorTag = from::default_allocator_tag>
    using basic_string = std::basic_string<CharT, Traits, from::allocator<CharT, AllocatorTag>>;

    // Embedded allocator char string
    using string = from::basic_string<char, std::char_traits<char>, from::default_allocator_tag>;
    // Embedded allocator wchar_t string
    using wstring = from::basic_string<wchar_t, std::char_traits<wchar_t>, from::default_allocator_tag>;

    // Empty base allocator char string
    using ebstring = from::basic_string<char, std::char_traits<char>, from::default_empty_base_allocator_tag>;
    // Empty base allocator wchar_t string
    using ebwstring = from::basic_string<wchar_t, std::char_traits<wchar_t>, from::default_empty_base_allocator_tag>;

    // Compile time size checks - failing these means binary incompatibility
    static_assert(sizeof(from::string) == 40, "ELDEN RING ABI requirement");
    static_assert(sizeof(from::ebstring) == 32, "ELDEN RING ABI requirement");
}