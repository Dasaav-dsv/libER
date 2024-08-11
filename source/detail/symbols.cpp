#include <detail/app_version.hpp>
#include <detail/base_address.hpp>
#include <detail/preprocessor.hpp>
#include <detail/symbols.hpp>

#include <detail/cppsv/cppsv.hpp>

CPPSV_VIEW_BEGIN
#include <file_list.inl>
CPPSV_VIEW_NAME(symbol_list)

using namespace liber;

#define LIBER_ADD_SYMBOL(NAME)                                            \
    void* symbol<#NAME>::get() noexcept {                                 \
        constexpr auto row = symbol_list.find_row([](const auto& field) { \
            const auto& [name, offset] = field;                           \
            return name == #NAME;                                         \
        });                                                               \
        constexpr int result = symbol_list.get_field<1>(row).as<int>();   \
        static_assert(result > 0, "bad symbol offset");                   \
        return base_address.offset(result);                               \
    }

#include <symbol_list.inl>

#undef LIBER_ADD_SYMBOL
