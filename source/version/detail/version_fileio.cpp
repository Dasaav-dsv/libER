#include <detail/version_fileio.h>
#include <detail/version_winhttp.h>
#include <version.h>

#include <cppsv_rt.h>
#include <liber_preprocessor.h>
#include <shlobj_core.h>

#include <filesystem>
#include <algorithm>
#include <fstream>
#include <sstream>
#include <mutex>

namespace liber {
    namespace fs = std::filesystem;

    static std::mutex load_store_mutex;

    fs::path get_appdata() {
        wchar_t* path;
        HRESULT result = SHGetKnownFolderPath(FOLDERID_RoamingAppData, 0, NULL, &path);
        fs::path appdata{ path };
        CoTaskMemFree(path);
        return result == S_OK ? path : L"";
    }

    fs::path resolve_file_path(const std::string& filename = "") {
        const auto& version = get_version_string();
        if (version.empty()) return "";
        fs::path base_path = get_appdata();
        if (base_path.empty()) return "";
        base_path.append("EldenRing/libER/symbols/" + version);
        std::error_code err;
        fs::create_directories(base_path, err);
        if (!fs::exists(base_path, err)) return "";
        if (!filename.empty()) base_path.append(filename);
        return base_path;
    }

    std::string load_versioned_csv_from_disk() noexcept {
        std::scoped_lock lock{ load_store_mutex };
        fs::path file_path = resolve_file_path(LIBER_STRINGIFY(LIBER_FILE_LIST));
        if (file_path.empty()) return "";
        std::stringstream out;
        try {
            std::ifstream filelist_file { file_path };
            if (!filelist_file.is_open()) return "";
            std::string line;
            while(std::getline(filelist_file, line)) {
                auto [filename, wfilename] = filename_from_line(line);
                if (filename.empty()) continue;
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

    void save_file_to_disk(const std::string& filename, const std::string& data) noexcept {
        std::scoped_lock lock{ load_store_mutex };
        fs::path file_path = resolve_file_path(filename);
        if (file_path.empty()) return;
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

    std::pair<std::string, std::wstring> filename_from_line(const std::string& line) noexcept {
        std::string out;
        std::wstring wout;
        for (bool in_quotes = false; char chr : line) {
            if (in_quotes) {
                if (chr == '"') break;
                out.push_back(chr);
                wout.push_back(chr);
            }
            else in_quotes = chr == '"';
        }
        return std::make_pair(out, wout);
    }
}
