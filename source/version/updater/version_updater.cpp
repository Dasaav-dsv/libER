#include <version/detail/version_winhttp.hpp>
#include "Windows.h"

int main() {
    int argc = 0;
    LPWSTR cmdline = GetCommandLineW();
    LPWSTR* argv_w = CommandLineToArgvW(cmdline, &argc);
    if (argc <= 1) return 1;
    return !liber::download_versioned_csv(argv_w[1]);
}