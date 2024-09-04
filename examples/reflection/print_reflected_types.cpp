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
        std::cout << "wait_for_system timed out!\n";
        return;
    }
    // Get a vector of all DLRuntimeClasses that have been
    // registered so far by ELDEN RING
    auto registered_classes =
        from::DLRF::DLRuntimeClass::get_registered_classes();
    if (!registered_classes) {
        std::cout << "registered_classes is null!\n";
        return;
    }
    for (const auto& class_holder : *registered_classes) {
        // Print out the DLRuntimeClass address and name
        std::cout << class_holder.instance << ' '
                  << class_holder.name;
        const auto& methods = class_holder.instance->get_methods();
        if (methods.empty()) {
            std::cout << '\n';
            continue;
        }
        // Print out the DLRuntimeClass methods, if present
        std::cout << " and its methods:\n";
        for (const auto& method : methods) {
            std::cout << "    " << method.name;
            const auto& invokers = method.instance->get_invokers();
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
