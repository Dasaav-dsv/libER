#include <detail/singleton.h>
#include <fd4/detail/fd4_task.h>

using namespace from;

LIBER_SINGLETON_INSTANCE(FD4::FD4TaskManager);

using namespace from::FD4;

// Anchor vtable
FD4TaskBase::~FD4TaskBase() = default;
