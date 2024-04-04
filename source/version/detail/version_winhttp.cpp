#include <version/detail/version_fileio.hpp>
#include <version/detail/version_winhttp.hpp>

#include <detail/preprocessor.hpp>
#include <version/detail/winhttp.inl>

#include <mutex>
#include <sstream>
#include <string>
#include <utility>

namespace liber {
static std::mutex load_store_mutex;

std::string load_versioned_csv_from_repo() noexcept {
    std::scoped_lock lock{ load_store_mutex };
    auto session = winhttp_session::create();
    if (!session->has_value()) return "";
    auto connection =
        winhttp_session::connect(session, LIBER_WSTRINGIFY(LIBER_CSV_SERVER));
    if (!connection->has_value()) return "";
    std::string file_list = get_file(connection,
// clang-format off
        LIBER_WSTRINGIFY(LIBER_REPO_OWNER/libER/LIBER_DIR_BRANCH/LIBER_SYMBOL_DIR/LIBER_FILE_LIST));
// clang-format on
    if (file_list.empty()) return "";
    save_file_to_disk(LIBER_STRINGIFY(LIBER_FILE_LIST), file_list);
    std::stringstream files{ std::move(file_list) };
    std::string line, out;
    while (std::getline(files, line)) {
        auto [filename, wfilename] = filename_from_line(line);
        if (filename.empty()) continue;
        std::string file = get_file(connection,
// clang-format off
            LIBER_WSTRINGIFY(LIBER_REPO_OWNER/libER/LIBER_DIR_BRANCH/LIBER_SYMBOL_DIR/) +
// clang-format on
               wfilename);
        if (file.empty()) continue;
        out.append(file);
        out.push_back('\n');
        save_file_to_disk(filename, file);
    }
    return out;
}
} // namespace liber