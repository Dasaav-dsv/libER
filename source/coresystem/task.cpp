#include <coresystem/task.hpp>
#include <detail/functions.hpp>

#include <utility>

using namespace from;

using namespace CS;

void CSEzTask::register_task(CSTaskGroup task_group) {
    CSTaskGroup current_group = this->get_task_group();
    if (current_group == task_group)
        return;
    else if (current_group != CSTaskGroup::INVALID)
        this->free_task();
    this->proxy =
        liber::function<"CS::CSEzTask::register_task", CSEzTaskProxy*>::call(
            this, int(task_group));
}

void CSEzTask::free_task() {
    if (!this->proxy)
        return;
    liber::function<"CS::CSEzTaskProxy::free_task", void>::call(this->proxy);
    this->proxy = nullptr;
}

CSTaskGroup CSEzTask::get_task_group() const noexcept {
    if (!this->proxy)
        return CSTaskGroup::INVALID;
    return this->proxy->get_task_group();
}

void CSEzTaskProxy::execute(FD4::FD4TaskData* data) {
    this->owner->eztask_execute(data);
}
