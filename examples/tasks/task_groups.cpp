// Demonstrate that task groups execute in order

#include "../example_base.hpp"

// For the task functionality:
#include <coresystem/task.hpp>
// For wait_for_system:
#include <dantelion2/system.hpp>

// A task that "wanders", meant to be reassigned from
// one task group to another repeatedly by another wandering task.
// Due to tasks having a strict chronological order this never happens
class wandering_task : public from::CS::CSEzTask {
public:
    void eztask_execute(from::FD4::FD4TaskData* data) override {
        auto group = data->get_task_group();
        // Did we collide with the other task?
        if (group == other->get_task_group())
            std::terminate();
        // Assign the other task to the next group
        auto next_group = static_cast<from::CS::CSTaskGroup>(int(group) + 1);
        if (next_group == from::CS::CSTaskGroup::SIZE)
            next_group = from::CS::CSTaskGroup::FrameBegin;
        other->register_task(next_group);
    }

    wandering_task* other;
};

// Will be called from DllMain
void example_base() {
    // Allocate console, enable manual flushing
    con_allocate(true);
    // Create and assign wandering tasks
    wandering_task* first = new wandering_task;
    wandering_task* second = new wandering_task;
    first->other = second;
    second->other = first;
    // It's necessary to wait for the task system to be initialized
    // before registering tasks. We can use wait_for_system
    // with a timeout of 5000ms to ensure ELDEN RING has initialized it
    if (!from::DLSY::wait_for_system(5'000)) {
        std::cout << "wait_for_system timed out!" << std::endl;
    }
    // Register the two tasks, which starts their execution
    // Starting on two different task groups, they will never
    // meet and cause the game to terminate
    first->register_task(from::CS::CSTaskGroup::FrameBegin);
    second->register_task(from::CS::CSTaskGroup::SteamThread0);
}
