// An FPS counter in the console using tasks

#include "../example_base.hpp"

// For the task functionality:
#include <coresystem/task.hpp>
// For from::unique_ptr with delay deletion:
#include <memory/from_unique_ptr.hpp>
// For wait_for_system:
#include <dantelion2/system.hpp>

// Our new task must derive from CS::CSEzTask
// It's a task that accumulates frame time passed to it by ELDEN RING
struct count_frames_task : public from::CS::CSEzTask {
    // Override the abstract execute method
    // It will be called every frame
    void eztask_execute(from::FD4::FD4TaskData* data) override {
        // Add the current frame's delta time to the total time
        time_passed += data->get_dt();
        // Increment frame count
        ++frame_count;
    }

    // Custom free_task that is called from the overriden destructor
    // Prints out all of the collected data
    void free_task() override {
        system("cls");
        std::cout << "Framerate collection finished!\n";
        std::cout << "Game time passed: " << time_passed << "\n";
        std::cout << "Total frames counted: " << frame_count << std::endl;
    }

    // Call this class's free_task when the task is destroyed
    // CS::CSEzTask does so too, but it calls the base free_task
    ~count_frames_task() override {
        this->free_task();
    }

    // Member variables for persistent data:
    double time_passed = 0.0;
    long long frame_count = 0;
};

// We can further instrument frame counting to do something every second
// This task prints out data from a count_frames_task and calculates the framerate
// Derives from CS::CSEzTask through its parent class
struct print_fps_task : count_frames_task {
    print_fps_task(count_frames_task& count_task) : count_task(count_task) {}

    void eztask_execute(from::FD4::FD4TaskData* data) override {
        // Call the base function to increment this task's time and frame count
        count_frames_task::eztask_execute(data);
        if (count_task.time_passed > 0.0f && this->time_passed >= 1.0f) {
            double fps = static_cast<double>(count_task.frame_count)
                       / count_task.time_passed;
            // Clear console and print FPS:
            system("cls");
            std::cout << "Frames last second: " << this->frame_count << "\n";
            std::cout << "Average FPS: " << fps << std::endl;
            // Reset the counters of this task
            this->time_passed = 0.0f;
            this->frame_count = 0;
        }
    }

    // The counter task to read from:
    count_frames_task& count_task;
};

// Will be called from DllMain
void example_base() {
    // Allocate console, enable manual flushing
    con_allocate(true);
    // Make two unique_ptr objects locally
    // Once they go out of scope, the tasks will be freed
    from::unique_ptr<count_frames_task> count_task =
        from::make_unique<count_frames_task>();
    from::unique_ptr<print_fps_task> print_task =
        from::make_unique<print_fps_task>(*count_task);
    // It's necessary to wait for the task system to be initialized
    // before registering tasks. We can use wait_for_system
    // with a timeout of 5000ms to ensure ELDEN RING has initialized it
    if (!from::DLSY::wait_for_system(5'000)) {
        std::cout << "wait_for_system timed out!" << std::endl;
    }
    // Register the two tasks, which starts their execution
    // count_task is set to execute on FrameBegin, the first task group
    // print_task will execute on Flip, a much later task group
    // This chronological relationship means print_task can
    // access count_task's data in a thread safe manner
    count_task->register_task(from::CS::CSTaskGroup::FrameBegin);
    print_task->register_task(from::CS::CSTaskGroup::Flip);
    // Wait and let the tasks run for 60s
    Sleep(60'000);
    // The tasks don't need to be explicitly freed,
    // as the delay deleter of from::unique_ptr will free
    // them instead when they go out of scope.
    // count_task->free_task();
    // print_task->free_task();
}
