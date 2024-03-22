#include <symbols.h>
#include <game_ver.h>
#include <base_address.h>

#include <cppsv.h>
#include <cppsv_rt.h>

// For std::terminate
#include <stdexcept>

// Symbol file io
// TODO: move io to separate header
#include <filesystem>

CPPSV_VIEW_BEGIN
#include <1.10.1_0.csv>
CPPSV_VIEW_NAME(symbol_list)

namespace liber {
    std::string load_versioned_csv() noexcept {
        std::string out;
        auto version = game_version();
        if (version == LIBER_INVALID_GAME_VERSION)
            return out;
        std::error_code err;
        // TODO: make a defines header
        std::filesystem::path base_dir_path{ R"(%APPDATA%\EldenRing)" };
        std::filesystem::directory_iterator first{ base_dir_path, err };
        if (err) return out;
        std::filesystem::directory_iterator last{};
        while (first != last) {
            first->path().filename();
        }
        return out;
    }

    // TODO: replace std::terminate
    int get_versioned_symbol(const char* name) noexcept {
        static cppsv::runtime_cppsv_view versioned_symbol_list {[]{
            std::string csv_data = load_versioned_csv();
            if (csv_data.empty())
                std::terminate();
            return csv_data;
        }()};
        auto row = versioned_symbol_list.find_row([&](const auto& field){
            return !field[0].compare(name);
        });
        auto result = cppsv::to_integer(row[1].begin(), row[1].end(), 0);
        if (!result.has_value())
            std::terminate();
        return result.value();
    }

#define LIBER_ADD_SYMBOL(NAME)                                           \
    int symbol<#NAME>::value = 0;                                        \
    void* symbol<#NAME>::get() noexcept {                                \
        constexpr auto row = symbol_list.find_row([](const auto& field){ \
            const auto& [name, offset] = field;                          \
            return !name.compare(#NAME);                                 \
        });                                                              \
        constexpr int this_version_result =                              \
            symbol_list.get_field<"offset">(row).as<int>();              \
        int result = symbol<#NAME>::value;                               \
        if (!result) {                                                   \
            if (game_version_match())                                    \
                result = this_version_result;                            \
            else                                                         \
                result = get_versioned_symbol(#NAME);                    \
            symbol<#NAME>::value = result;                               \
        }                                                                \
        return base_offset(result);                                      \
    }                                                                          

#include <symbols.inl>

#undef LIBER_ADD_SYMBOL
}