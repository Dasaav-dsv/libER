#include <symbols.h>
#include <version.h>
#include <base_address.h>
#include <liber_preprocessor.hpp>

#include <cppsv.h>
#include <cppsv_rt.h>

// For std::terminate
#include <stdexcept>

CPPSV_VIEW_BEGIN
#include LIBER_INCLUDIFY(LIBER_TARGET_VERSION/LIBER_FILE_LIST)
CPPSV_VIEW_NAME(symbol_list)

namespace liber {
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
            symbol_list.get_field<1>(row).as<int>();                     \
        int result = symbol<#NAME>::value;                               \
        if (!result) {                                                   \
            if (match_version())                                         \
                result = this_version_result;                            \
            else                                                         \
                result = get_versioned_symbol(#NAME);                    \
            symbol<#NAME>::value = result;                               \
        }                                                                \
        return base_offset(result);                                      \
    }                                                                          

#include LIBER_INCLUDIFY(LIBER_TARGET_VERSION/LIBER_SYMBOL_LIST)

#undef LIBER_ADD_SYMBOL
}