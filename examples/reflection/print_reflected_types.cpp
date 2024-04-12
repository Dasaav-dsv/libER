// Print DLRuntimeClass instances, their methods and invokers

#include "../example_base.hpp"

// For type reflection:
#include <dantelion2/reflection.hpp>
// For wait_for_system:
#include <dantelion2/system.hpp>

// Will be called from DllMain
void example_base() {
    // Allocate console
    con_allocate(false);
    // It's necessary to wait for the type reflection system to be initialized.
    // We can use wait_for_system with a timeout of 5000ms to ensure ELDEN RING
    // has initialized it
    if (!from::DLSY::wait_for_system(5'000)) {
        std::cout << "wait_for_system timed out!" << std::endl;
    }
    // Get a vector of all DLRuntimeClasses that have been
    // registered so far by ELDEN RING
    const auto& registered_classes =
        from::DLRF::DLRuntimeClass::get_registered_classes();
    for (const auto& registered_class : registered_classes) {
        // Print out the DLRuntimeClass address and name
        std::cout << registered_class.get() << ' '
                  << registered_class.get()->class_name();
        const auto& methods = registered_class.get()->get_methods();
        if (methods.empty()) {
            std::cout << '\n';
            continue;
        }
        // Print out the DLRuntimeClass methods, if present
        std::cout << " and its methods:\n";
        for (const auto& method : methods) {
            std::cout << "    " << method.get()->get_method_name();
            const auto& invokers = method.get()->get_invokers();
            if (invokers.empty())
                continue;
            std::cout << " and its invokers: ";
            // Print out the DLRuntimeClass method invokers, if present
            for (const auto& invoker : invokers) {
                std::cout << &invoker << " ";
            }
            std::cout << '\n';
        }
    }
}
