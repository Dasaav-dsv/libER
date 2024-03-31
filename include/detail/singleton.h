#pragma once

#include <detail/preprocessor.h>
#include <detail/optref.h>
#include <detail/symbols.h>

#define LIBER_GET_SINGLETON(CLASSNAME) liber::optref<CLASSNAME> CLASSNAME::get_singleton() noexcept {
            CSTask* singleton = *reinterpret_cast<CSTask**>(liber::symbol<"CSTask">::get());
            if (!singleton) return std::nullopt;
            return *singleton;
        }
