#include <dantelion2/fileio.hpp>
#include <detail/singleton.hpp>

#include <algorithm>
#include <mutex>

using namespace from;

LIBER_SINGLETON_INSTANCE(DLIO::DLFileDeviceManager);

bool DLIO::DLFileDeviceManager::is_virtual_path(
    const std::filesystem::path& path) {
    const std::wstring& path_string = path.native();
    size_t colon_pos = path_string.find_first_of(':');
    std::wstring_view wsv{ path_string };
    if (colon_pos != std::wstring::npos)
        wsv = wsv.substr(0, colon_pos);
    // ELDEN RING Wwise implementation detail:
    if (wsv == L"sd")
        return true;
    std::scoped_lock lock{ this->mutex };
    for (const auto& [dir, _] : this->virtual_directories)
        if (wsv == dir)
            return true;
    return false;
}
