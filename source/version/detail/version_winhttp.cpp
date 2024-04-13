#include <version/detail/version_fileio.hpp>
#include <version/detail/version_winhttp.hpp>

#include <detail/preprocessor.hpp>
#include <version/detail/winhttp.inl>

#include <sstream>
#include <string>
#include <utility>

namespace liber {
bool download_versioned_csv(const std::wstring& version) noexcept {
    // clang-format off
    std::wstring base_path = LIBER_WSTRINGIFY(LIBER_REPO_OWNER/libER/LIBER_DIR_BRANCH/LIBER_SYMBOL_DIR/) + version;
    // clang-format on
    auto session = winhttp_session::create();
    if (!session->has_value())
        return false;
    auto connection =
        winhttp_session::connect(session, LIBER_WSTRINGIFY(LIBER_CSV_SERVER));
    if (!connection->has_value())
        return false;
    std::string file_list = get_file(connection,
        // clang-format off
        base_path + LIBER_WSTRINGIFY(/LIBER_FILE_LIST));
    // clang-format on
    if (file_list.empty())
        return false;
    save_file_to_disk(LIBER_STRINGIFY(LIBER_FILE_LIST), file_list, version);
    std::stringstream files{ std::move(file_list) };
    std::string line;
    while (std::getline(files, line)) {
        auto [filename, wfilename] = filename_from_line(line);
        if (filename.empty())
            continue;
        std::string file = get_file(connection, base_path + L'/' + wfilename);
        if (file.empty())
            continue;
        save_file_to_disk(filename, file, version);
    }
    return true;
}
} // namespace liber
