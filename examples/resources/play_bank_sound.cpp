// Load a Wwise sound bank and play a sound from it

#include "../example_base.hpp"

// For the file and resource requests
#include <coresystem/file/file.hpp>
// For sound playback
#include <coresystem/sound.hpp>
// For wait_for_system:
#include <dantelion2/system.hpp>

// Will be called from DllMain
void example_base() {
    // Allocate console, don't enable manual flushing
    con_allocate(false);
    // It's necessary to wait for the game systems to be initialized.
    if (!from::DLSY::wait_for_system(5'000)) {
        std::cout << "wait_for_system timed out!\n";
        return;
    }
    // Request a wwise bank containing our sound file to be loaded
    from::file_request request{ L"sd:/vc201.bnk", from::file_request::LOAD };
    // Wait for the request to be ready and get the result, see load_gparam.cpp
    // for more details on file and resource loading.
    auto bank = request.get();
    if (!bank) {
        std::cout << "Failed to load sd:/vc201.bnk!\n";
        return;
    }
    auto cssound = from::CS::CSSoundImp::instance();
    if (!cssound) {
        std::cout << "CSSoundImp not initialized!\n";
        return;
    }
    // Load v020240300 (from vc201.bnk we loaded earlier) 
    auto sound = cssound.reference().make_system_sound('v', 20240300);
    if (!sound) {
        std::cout << "make_system_sound failed!\n";
        return;
    }
    // Start sound playback (Play_v020240300 will be called)
    sound.reference().start_playback();
}
