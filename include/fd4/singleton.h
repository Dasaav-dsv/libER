#pragma once

#include <detail/liber_preprocessor.h>
#include <detail/optref.h>

#define FD4_SINGLETON_CLASS(CLASSNAME)             \
liber::optref<CLASSNAME> get_singleton() noexcept; \
LIBER_CLASS(CLASSNAME)