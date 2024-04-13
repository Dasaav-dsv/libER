#include <version/detail/version_fileio.hpp>
#include <version/detail/version_winhttp.hpp>
#include <version/version.hpp>

#include <detail/preprocessor.hpp>

#include <algorithm>
#include <filesystem>
#include <fstream>
#include <shlobj_core.h>
#include <sstream>

namespace liber {
namespace fs = std::filesystem;

// Get %APPDATA% using the shell SHGetKnownFolderPath function
fs::path get_appdata() {
    wchar_t* path = nullptr;
    HRESULT result =
        SHGetKnownFolderPath(FOLDERID_RoamingAppData, 0, NULL, &path);
    if (!path)
        return L"";
    fs::path appdata{ path };
    // Free memory (also correct on error)
    CoTaskMemFree(path);
    return result == S_OK ? appdata : L"";
}

// Get the full path to the symbol directory
// for the currently running version of the binary
fs::path resolve_file_path(const std::wstring& version, const std::string& filename = "") {
    if (version.empty())
        return "";
    fs::path base_path = get_appdata();
    if (base_path.empty())
        return "";
    // ELDEN RING savefile folder in %APPDATA%
    base_path.append("EldenRing/libER/symbols");
    base_path.append(version);
    std::error_code err;
    fs::create_directories(base_path, err);
    if (!fs::exists(base_path, err))
        return "";
    if (!filename.empty())
        base_path.append(filename);
    return base_path;
}

// TODO: error reporting instead of std::terminate
std::string load_versioned_csv_from_disk(const std::wstring& version) noexcept {
    fs::path file_path = resolve_file_path(version, LIBER_STRINGIFY(LIBER_FILE_LIST));
    if (file_path.empty())
        return "";
    std::stringstream out;
    try {
        std::ifstream filelist_file{ file_path };
        if (!filelist_file.is_open())
            return "";
        std::string line;
        while (std::getline(filelist_file, line)) {
            auto [filename, wfilename] = filename_from_line(line);
            if (filename.empty())
                continue;
            file_path.replace_filename(filename);
            std::ifstream file{ file_path };
            file.exceptions(std::ios::failbit);
            out << file.rdbuf();
            out << "\n";
        }
    }
    catch (std::exception& ex) {
        const char* what = ex.what();
        (void)what;
        std::terminate();
    }
    return out.str();
}

// TODO: error reporting instead of std::terminate
void save_file_to_disk(const std::string& filename,
    const std::string& data, const std::wstring& version) noexcept {
    fs::path file_path = resolve_file_path(version, filename);
    if (file_path.empty())
        return;
    try {
        std::ofstream file{ file_path, std::ios::out | std::ios::trunc };
        file.exceptions(std::ios::failbit);
        file << data;
    }
    catch (std::exception& ex) {
        const char* what = ex.what();
        (void)what;
        std::terminate();
    }
}

std::pair<std::string, std::wstring> filename_from_line(
    const std::string& line) noexcept {
    std::string out;
    std::wstring wout;
    // In an #include "header.*" statement,
    // pass through string until the first quote,
    // then copy substring until the next quote.
    // Result: (header.*)
    for (bool in_quotes = false; char chr : line) {
        if (in_quotes) {
            if (chr == '"')
                break;
            out.push_back(chr);
            wout.push_back(chr);
        }
        else
            in_quotes = chr == '"';
    }
    return std::make_pair(out, wout);
}
} // namespace liber
