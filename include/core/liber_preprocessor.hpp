#pragma once

/*
* A superset of liber_defines for internal use.
* Provides additional function-like macros.
*/

#include <liber_defines.hpp>

#define LIBER_STRINGIFY_(X) #X
#define LIBER_STRINGIFY(X) LIBER_STRINGIFY_(X)

#define LIBER_WSTRINGIFY__(X) L ## X
#define LIBER_WSTRINGIFY_(X) LIBER_WSTRINGIFY__(#X)
#define LIBER_WSTRINGIFY(X) LIBER_WSTRINGIFY_(X)

#define LIBER_INCLUDIFY(X) <X>