#include <symbols.h>
#include <base_address.h>

#include <cstddef>
#include <cstdint>

// For std::terminate
#include <stdexcept>

namespace liber {
    bool game_version_match() {
        // TODO:
        return true;
    }

#define LIBER_ADD_SYMBOL(NAME)                                                 \
    void* symbol<#NAME>::get() noexcept {                                      \
        constexpr auto row = symbol_list.find_row([](const auto& field){       \
            const auto& [name, offset] = field;                                \
            return !name.compare(#NAME);                                       \
        });                                                                    \
        constexpr int offset = symbol_list.get_field<"offset">(row).as<int>(); \
        if (game_version_match())                                              \
            return base_offset(offset);                                        \
        else                                                                   \
            std::terminate();                                                  \
    }                                                                          \

#include <symbols.inl>

#undef LIBER_ADD_SYMBOL
}