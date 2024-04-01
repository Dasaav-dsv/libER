#pragma once

#include <detail/preprocessor.h>
#include <detail/optref.h>

#define FD4_SINGLETON_CLASS(CLASSNAME)                             \
[[nodiscard]] static liber::optref<CLASSNAME> instance() noexcept; \
LIBER_INTERFACE_CLASS(CLASSNAME)