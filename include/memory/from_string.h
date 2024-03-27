#pragma once

// Cannot use debug containers
#pragma push_macro("_DEBUG")
#undef _DEBUG

#include <string>
#include <memory/from_allocator.h>

#pragma pop_macro("_DEBUG")

namespace from {
    template <typename CharT, typename Traits = std::char_traits<CharT>, typename AllocatorTag = from::default_allocator_tag>
    using basic_string = std::basic_string<CharT, Traits, from::allocator<T, AllocatorTag>>;

    // Embedded allocator char string
    using string = from::basic_string<char, std::char_traits<char>, from::default_allocator_tag>;
    // Embedded allocator wchar_t string
    using wstring = from::basic_string<wchar_t, std::char_traits<wchar_t>, from::default_allocator_tag>;

    // Empty base allocator char string
    using ebstring = from::basic_string<char, std::char_traits<char>, from::default_empty_base_allocator_tag>;
    // Empty base allocator wchar_t string
    using ebwstring = from::basic_string<wchar_t, std::char_traits<wchar_t>, from::default_empty_base_allocator_tag>;
}