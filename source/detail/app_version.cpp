#include <detail/app_version.hpp>
#include <detail/preprocessor.hpp>

#include <bit>
#include <detail/windows.inl>
#include <iomanip>
#include <sstream>
#include <string>
#include <utility>

using namespace liber;

app_version::value_type get_version_from_resource() noexcept {
    // Resource: VS_VERSION, resource type: RT_VERSION
    HRSRC resource_handle =
        FindResourceW(NULL, MAKEINTRESOURCEW(1), MAKEINTRESOURCEW(16));
    if (!resource_handle)
        return LIBER_INVALID_VERSION;
    HGLOBAL global_handle = LoadResource(NULL, resource_handle);
    if (!global_handle)
        return LIBER_INVALID_VERSION;
    DWORD* resource_start =
        reinterpret_cast<DWORD*>(LockResource(global_handle));
    if (!resource_start)
        return LIBER_INVALID_VERSION;
    // The first field of the resource is its length in bytes
    DWORD* resource_end = reinterpret_cast<DWORD*>(
        reinterpret_cast<uintptr_t>(resource_start) + *resource_start);
    // Look for the resource signature, which indicates the begining of the
    // resource data
    while (*(resource_start++) != 0xFEEF04BD)
        if (resource_start >= resource_end)
            return LIBER_INVALID_VERSION;
    VS_FIXEDFILEINFO* fixed_file_info =
        reinterpret_cast<VS_FIXEDFILEINFO*>(resource_start);
    auto version_result =
        (static_cast<long long>(fixed_file_info->dwFileVersionLS) << 32)
        | fixed_file_info->dwFileVersionMS;
    return version_result > 0 ? version_result : LIBER_INVALID_VERSION;
}

app_version::app_version() noexcept {
    auto appver_res = get_version_from_resource();
    if (appver_res == LIBER_INVALID_VERSION)
        return;
    auto fields = std::bit_cast<fields_type>(appver_res);
    if (fields.major > 1) {
        fields.minor += (fields.major - 1) * 10;
        fields.major = 1;
    }
    auto appver_to_str = [](fields_type fields, auto&& stream) {
        using char_type = typename decltype(stream.view())::value_type;
        stream << std::setfill<char_type>('0');
        stream << fields.major << '.';
        stream << std::setw(2) << fields.minor << '.';
        stream << fields.revision;
        return stream.str();
    };
    appver_str = appver_to_str(fields, std::stringstream{});
    appver_wstr = appver_to_str(fields, std::wstringstream{});
}
