#include <fd4/component.hpp>

using namespace from::FD4;
using namespace from::DLRF;

DLRuntimeClass* FD4ComponentBase::get_runtime_class() noexcept {
    return &DLRuntimeClassTemplate<FD4ComponentBase,
        LIBER_STRINGIFY(FD4ComponentBase)>::dl_runtime_class;
}

// Transition: FD4ComponentBase does not necessary have a virtual dtor
// FD4ComponentBase::~FD4ComponentBase() = default;
