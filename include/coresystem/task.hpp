/**
 * @file task.hpp
 * @brief Namespace CS task interface
 *
 * Copyright 2024 libER ELDEN RING API library
 *
 */
#pragma once

#include <dantelion2/text.hpp>
#include <detail/preprocessor.hpp>
#include <fd4/component.hpp>
#include <fd4/detail/fd4_task.hpp>
#include <fd4/detail/singleton.hpp>
#include <memory/from_allocator.hpp>
#include <memory/from_vector.hpp>

#include <algorithm>
#include <span>
#include <string>

namespace from {
namespace CS {
/**
 * @brief Typedef of a special unsigned integer type that may represent a task
 * id.
 *
 * See the CS_TASK_GROUP_ID macro in fd4.task.hpp
 *
 */
using cstgi = unsigned int;

// Forward declaration
class CSEzTaskProxy;

/**
 * @brief Inherit from this minimal task interface to create a custom task.
 *
 * Used by ELDEN RING to queue and free asynchronous tasks in the task queue.
 * Once a task is registered, it runs every frame when the task group specified
 * to the register_task call is executed. The task group execution order
 * is strict with regard to other task groups, but individual task execution
 * order *inside a task group* is unspecified.
 *
 * @warning Disclaimer: a task instance must not go out of scope as long as it
 * is registered and executing. Use from::unique_ptr from from_unique_ptr.hpp to
 * correctly manage its lifetime. Destroying it before it has executed on this
 * pass will leave a dangling pointer in the task queue.
 *
 */
class CSEzTask : public FD4::FD4TaskBase {
public:
    FD4_RUNTIME_CLASS(CSEzTask);

    CSEzTask() = default;

    virtual ~CSEzTask();

    /**
     * @brief FD4::FD4TaskBase execute method that calls @ref eztask_execute.
     *
     * Inside the ELDEN RING task system, the FD4::FD4TaskBase interface
     * is used for executing tasks. This method delegates the execution
     * to @ref eztask_execute.
     *
     * @param data a struct with additional data passed to the task
     */
    void execute(FD4::FD4TaskData* data) final {
        this->eztask_execute(data);
    }

    /**
     * @brief Virtual method that is called when a CS::CSEzTask is executed.
     *
     * Implement this method in a custom task class to provide a
     * callback for when the task is executed.
     *
     * @param data a struct with additional data passed to the task, like delta
     * time and the task group
     */
    virtual void eztask_execute(FD4::FD4TaskData* data) = 0;

    /**
     * @brief Register a task to be called in a specified task group.
     *
     * Call this method with a task instance to register it for execution.
     * ELDEN RING task runners execute task groups in a strict order, going
     * from FrameBegin to FrameEnd. After a task is registered, it will be
     * executed in the next pass of all the task groups the following frame,
     * calling its eztask_execute method.
     *
     * @param task_group a value from the CS::CSTaskGroup enum when the task
     * should be executed
     */
    LIBERAPI virtual void register_task(CSTaskGroup task_group);

    /**
     * @brief Free the task, suspending its execution after it has been
     * registered.
     *
     * Call this method to stop executing a task. It may still execute on the
     * current pass of the task groups, but will not execute on the next.
     * Keep the task lifetime @link CS::CSEzTask disclaimer @endlink in mind
     * when freeing or destroying a task.
     *
     */
    LIBERAPI virtual void free_task();

    /**
     * @brief Get the task group this task is currently registered at.
     *
     * @return a value from the CS::CSTaskGroup enum
     */
    LIBERAPI CSTaskGroup get_task_group() const noexcept;

private:
    /**
     * @brief CS::CSEzTaskProxy that proxies this task. Assigned by ELDEN RING.
     *
     */
    CSEzTaskProxy* proxy = nullptr;
};

/**
 * @brief An internal proxy object for CS::CSEzTask instances inside ELDEN
 * RING's task management system.
 *
 */
class CSEzTaskProxy : public FD4::FD4TaskBase {
public:
    FD4_RUNTIME_CLASS(CSEzTaskProxy);

    /**
     * @brief Executes the proxied task.
     *
     * @param data a struct with additional data passed to the task
     */
    LIBERAPI void execute(FD4::FD4TaskData* data) override;

    /**
     * @brief Get the task group this proxy was registered at.
     *
     * @return a value from the CS::CSTaskGroup enum
     */
    virtual CSTaskGroup get_task_group() const noexcept {
        return this->task_group;
    }

private:
    CSEzTask* owner;
    CSTaskGroup task_group;
};

/**
 * @brief A child task executed by tasks and steppers in ELDEN RING.
 *
 */
class EzChildStepBase {
public:
    LIBER_CLASS(EzChildStepBase);

    virtual ~EzChildStepBase();

private:
    CSEzTask* task = nullptr;
    bool run = false;
    void* liber_unknown;
};

class CSTask;

/**
 * @brief The only way the CS::CSTask singleton can be accessed.
 *
 */
class CSTaskImp {
public:
    FD4_SINGLETON_CLASS(CSTaskImp);

    virtual ~CSTaskImp() LIBER_INTERFACE_ONLY;

    /**
     * @brief Get the associated CSTask instance.
     *
     * If CS::CSTask has not yet been initialized by ELDEN RING
     * returns a std::nullopt.
     *
     * @return liber::optref<CSTask>, may not contain a reference
     */
    liber::optref<CSTask> get() noexcept {
        if (!this->inst)
            return std::nullopt;
        return *this->inst;
    }

private:
    CSTask* inst;
};

/**
 * @brief Base of CS::CSTask.
 *
 */
class CSTaskBase {
    struct cstg_control {
        cstg_control(cstgi id, bool active) : id(id), active(active) {}

        cstgi id;
        wchar_t name[64]{};
        bool active;
    };

public:
    virtual ~CSTaskBase() LIBER_INTERFACE_ONLY;

    from::allocator<void> liber_unknown;

    /**
     * @brief A vector of structures that describe every task group.
     *
     * Immutable, since modifying it unsynchronized would certainly crash the
     * game.
     *
     */
    from::vector<cstg_control> task_groups;

    /**
     * @brief The total count of all task groups.
     *
     */
    cstgi task_group_count;
};

/**
 * @brief The main namespace CS task interface.
 *
 * @see FD4::FD4TaskManager.
 *
 */
class CSTask : private CSTaskBase {
public:
    LIBER_INTERFACE_CLASS(CSTask);

    virtual ~CSTask() LIBER_INTERFACE_ONLY;

    /**
     * @brief Get every task group
     *
     * @return const from::vector<cstg_control>& vector of task group controls
     */
    const auto& get_task_groups() const noexcept {
        return this->task_groups;
    }

private:
    virtual void add_task_group(const wchar_t* name) LIBER_INTERFACE_ONLY;
    virtual bool unk_set_task_group(cstgi) LIBER_INTERFACE_ONLY;
    virtual bool set_task_group_state(cstgi id,
        bool state) LIBER_INTERFACE_ONLY;
    virtual void debug_print() LIBER_INTERFACE_ONLY;
    virtual void queue_tasks(void* unk1, void* unk2) LIBER_INTERFACE_ONLY;

    from::allocator<void> liber_unknown;
    void* liber_unknown[8];
    void* task_seeds_0x30[6];
    void* task_seeds_0x60[6];
    bool liber_unknown;
};

LIBER_ASSERTS_BEGIN(CSTask);
LIBER_ASSERT_SIZE(0xE8);
LIBER_ASSERTS_END;
} // namespace CS
} // namespace from
