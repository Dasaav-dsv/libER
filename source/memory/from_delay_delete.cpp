#include <memory/from_delay_delete.h>
#include <coresystem/task.h>

using namespace from;

struct delay_delete_task : public CS::CSEzTask {
    virtual ~delay_delete_task() = default;

    delay_delete_task(delay_deleter deleter, void* p)
        : deleter(deleter), target(p) {
        this->register_task(CS::CSTaskGroup::DelayDeleteStep);
    }

    delay_deleter deleter;
    void* target;

    void eztask_execute() override {
        this->deleter(target);
        this->free_task();
        delete this;
    }
};

void from::request_delete(delay_deleter deleter, void* p) {
    (void)new delay_delete_task({deleter, p});
}