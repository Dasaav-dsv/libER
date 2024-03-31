#pragma once

#include <detail/preprocessor.h>
#include <detail/optref.h>

#define FD4_SINGLETON_CLASS(CLASSNAME)        \
liber::optref<CLASSNAME> instance() noexcept; \
LIBER_CLASS(CLASSNAME)