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

    template <typename AllocatorTag = from::default_allocator_tag>
    using string = from::basic_string<char, std::char_traits<char>, AllocatorTag>;

    template <typename AllocatorTag = from::default_allocator_tag>
    using wstring = from::basic_string<wchar_t, std::char_traits<wchar_t>, AllocatorTag>;
}