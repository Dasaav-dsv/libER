// Request a gparam file to be loaded and get a gparam resource

#include "../example_base.hpp"

// For the file and resource requests
#include <coresystem/file/file.hpp>
// For wait_for_system:
#include <dantelion2/system.hpp>
// For Sleep
#include <detail/windows.inl>

// Request a gparam with from::resource_request
void get_gparam_resource() {
    // Request the gparam resource "m12_01_0000" from the gparam repository,
    // loading it from the m12_01_0000.gparam file in the "gparam:/" virtual
    // game directory (if loading from disk, you should provide the path
    // instead)
    from::resource_request gparam_request{
        from::CS::CSResourceRepository::CSGparamRepository, L"m12_01_0000",
        L"gparam:/m12_01_0000.gparam"
    };
    // Wait for the gparam_request with a locking call to
    // from::resource_request::get. Alternatively, you can poll
    // for the result with from::resource_request::ready and
    // from::resource_request::check - example below this function!
    auto gparam = gparam_request.get();
    std::cout << "Got m12_01_0000: " << std::boolalpha << gparam.has_reference()
              << '\n';
}

// Request a gparam file to be loaded, making
// its resources available to the game with from::file_request
void load_gparam_resource() {
    // Request the gparam file "m12_01_0000.gparam" from the "gparam:/" virtual
    // game directory (if loading from disk, you should provide the path
    // instead) The file_request types are:
    // - LOAD = load the file if it hasn't been loaded yet
    // - RELOAD = load the file or reload an existing one, replacing it
    // - UNLOAD = unload the file if it is loaded
    from::file_request gparam_file_request{ L"gparam:/m10_00_0000.gparam",
        from::file_request::LOAD };
    // Poll for the gparam request, this can be done in a separate thread,
    // or a task. ALWAYS prefer to poll when loading files and resources
    // inside a task, by checking if the request is ready ONCE whenever the
    // task is ran.
    while (!gparam_file_request.ready()) {
        std::cout << "Waiting for m10_00_0000.gparam...\n";
        Sleep(100);
    }
    // from::file_request::check is a non-locking version of
    // from::file_request::get
    auto gparam_file = gparam_file_request.check();
    std::cout << "Got m10_00_0000.gparam: " << std::boolalpha
              << gparam_file.has_reference() << '\n';
}

// Will be called from DllMain
void example_base() {
    // Allocate console, don't enable manual flushing
    con_allocate(false);
    // It's necessary to wait for the game systems to be initialized.
    if (!from::DLSY::wait_for_system(5'000)) {
        std::cout << "wait_for_system timed out!\n";
        return;
    }
    // Wait a bit longer, since the game doesn't
    // expect to be loading gparams right on boot.
    Sleep(10'000);
    get_gparam_resource();
    load_gparam_resource();
}
