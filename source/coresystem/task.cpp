#include <coresystem/task.h>
#include <detail/singleton.h>
#include <detail/functions.h>

#include <utility>

using namespace from;

LIBER_SINGLETON_INSTANCE(CS::CSTaskImp);
LIBER_SINGLETON_INSTANCE(CS::CSTaskGroup);

using namespace CS;

void CSTaskImp::register_task(FD4::FD4TaskBase& task, CSTaskGroup::TaskGroups task_group) {
    liber::function<"CS::CSTaskImp::register_task", void>::call(this, int(task_group), std::addressof(task));
}