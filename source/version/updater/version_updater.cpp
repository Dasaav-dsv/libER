#include <version/detail/version_winhttp.hpp>
#include "Windows.h"

// Simple executable that downloads symbol .csvs from GitHub
// and saves them to %APPDATA%/EldenRing/libER/[target_version]
int main() {
    int argc = 0;
    LPWSTR cmdline = GetCommandLineW();
    LPWSTR* argv_w = CommandLineToArgvW(cmdline, &argc);
    if (argc <= 1) return 1;
    LPWSTR target_version = argv_w[1];
    return !liber::download_versioned_csv(target_version);
}