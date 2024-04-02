#include <fd4/component.h>

using namespace from::FD4;
using namespace from::DLRF;

DLRuntimeClass* FD4ComponentBase::get_runtime_class() noexcept {
    return &DLRuntimeClassTemplate<FD4ComponentBase,
        LIBER_STRINGIFY(FD4ComponentBase)>::dl_runtime_class;
}

// Anchored vtable:
FD4ComponentBase::~FD4ComponentBase() = default;