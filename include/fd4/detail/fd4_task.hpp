/**
 * @file fd4_task.hpp
 * @brief Namespace FD4 task interface
 *
 * Copyright 2024 libER ELDEN RING API library
 *
 */
#pragma once

#include <dantelion2/kernel_runtime.hpp>
#include <detail/preprocessor.hpp>
#include <fd4/component.hpp>
#include <fd4/detail/singleton.hpp>
#include <fd4/time.hpp>
#include <memory/from_allocator.hpp>
#include <memory/from_deque.hpp>
#include <memory/from_map.hpp>
#include <memory/from_set.hpp>
#include <memory/from_string.hpp>
#include <memory/from_vector.hpp>

#include <utility>

/**
 * @brief Convert a task group id into a task group index, or back.
 *
 * The indices used for task groups contain additional bit flags. Some functions
 * may expect the flags to be on. This macro converts a raw index into a task
 * group id, or a task group id into an index.
 *
 */
#define CS_TASK_GROUP_ID(INDEX) \
    (INDEX ^ LIBER_BIT_FLAG(28) ^ LIBER_BIT_FLAG(31))

namespace from {
// Forward declaration
namespace CS {
class CSTask;

// CSTaskGroupId
using cstgi = unsigned int;

// All task groups:
#include <coresystem/taskgroups.inl>
} // namespace CS

namespace FD4 {
/**
 * @brief The data passed to tasks on execution.
 *
 * Contains delta/frametime,
 * the task group id and the taskrunner number (seed).
 *
 */
struct FD4TaskData {
    /**
     * @brief Get the delta time.
     *
     * @return float
     */
    float get_dt() const noexcept {
        return this->delta_time.time;
    }

    /**
     * @brief Get the task group.
     *
     * @return CS::CSTaskGroup
     */
    CS::CSTaskGroup get_task_group() const noexcept {
        return static_cast<CS::CSTaskGroup>(
            CS_TASK_GROUP_ID(this->task_group_id));
    }

    /**
     * @brief Get the seed.
     *
     * The seed is the same as the index of the task runner thread that executed
     * it. As of ER 1.10.1, there are 6 task runners, so the value is between 0
     * and 5.
     *
     * @return int
     */
    int get_seed() const noexcept {
        return this->seed;
    }

private:
    FD4Time delta_time;
    CS::cstgi task_group_id;
    int seed;
};

/**
 * @brief The base task interface.
 *
 * Minimal implementation needed for any task.
 * New tasks should derive from CS::CSEzTask instead,
 * as it implements the necessary task registration methods.
 *
 */
class FD4TaskBase : public FD4::FD4ComponentBase {
public:
    FD4_RUNTIME_CLASS(FD4TaskBase);

    LIBERAPI virtual ~FD4TaskBase();

    /**
     * @brief Virtual method that is called when the task is executed.
     *
     * @param data FD4::FD4TaskData
     */
    virtual void execute(FD4TaskData* data) = 0;

private:
    void* liber_unknown = nullptr;
};

/// @cond DOXYGEN_SKIP

// The base step interface.
// Only its FD4TaskBase instantiation is implemented
template <class Impl>
class FD4StepTemplateInterface;

// TODO: methods
template <>
class FD4StepTemplateInterface<FD4TaskBase> : public FD4TaskBase {
public:
    FD4_RUNTIME_CLASS(FD4StepTemplateInterface);

private:
    virtual void execute_second(FD4TaskData*) LIBER_INTERFACE;
    virtual bool test_int_0x48() LIBER_INTERFACE;
    virtual int get_int_0x48() LIBER_INTERFACE;
    virtual bool unk_tree_op1() LIBER_INTERFACE;
    virtual bool unk_tree_op2() LIBER_INTERFACE;
    virtual bool unk_tree_op3() LIBER_INTERFACE;
    virtual bool unk_tree_op4() LIBER_INTERFACE;
    virtual bool unk_tree_op5() LIBER_INTERFACE;
    virtual bool unk_tree_op6() LIBER_INTERFACE;
    virtual bool unk_tree_op7() LIBER_INTERFACE;
    virtual bool unk_tree_op8() LIBER_INTERFACE;
    virtual bool unk_tree_op9() LIBER_INTERFACE;
    virtual bool unk_tree_op10() LIBER_INTERFACE;
};

// TODO:
// Unnamed (no RTTI) structure
// Has a virtual destructor
struct _unk_tree {
    virtual ~_unk_tree() = default;
    from::set<void*> _tree;
    from::allocator<void> liber_unknown;
    from::allocator<void> liber_unknown;
};

// Base step layout.
// Common base class for all steppers
template <class Impl>
class FD4StepTemplateBase : public FD4StepTemplateInterface<FD4TaskBase> {
public:
    FD4_RUNTIME_CLASS(FD4StepTemplateBase);

private:
    virtual bool unk_tree_op11() LIBER_INTERFACE;
    virtual bool unk_tree_op12() LIBER_INTERFACE;
    virtual bool unk_tree_op13() LIBER_INTERFACE;

    using steps_type = std::pair<void (*)(Impl*), const wchar_t*>;

    steps_type* steps;
    _unk_tree _tree;
    void* liber_unknown = nullptr;
    bool liber_unknown = false;
    from::allocator<void> liber_unknown;
    unsigned int cur_step;
    unsigned int max_step;
    bool liber_unknown = false;
    bool liber_unknown = false;
    from::wstring unk_wstr;
    bool liber_unknown = true;
    const wchar_t* state = L"NotExecuting";
    bool liber_unknown = false;
    int liber_unknown = 0;
};

// Internal FD4TaskManager structures
struct FD4TaskEntryGroup {
    LIBER_CLASS(FD4TaskEntryGroup);

    struct FD4TaskCallbacker {
        virtual ~FD4TaskCallbacker() = default;
        virtual void execute_callback() = 0;

        FD4TaskBase* task;
        void* callback;
    };

    struct FD4TaskEntry {
        virtual ~FD4TaskEntry() = default;

        FD4TaskBase* task;
        FD4TaskCallbacker* callbacker;
        CS::cstgi group_id;
    };

    struct FD4TaskEntryState {
        FD4TaskBase* task;
        FD4TaskCallbacker* callbacker;
        int liber_unknown;
        bool active;
    };

    virtual ~FD4TaskEntryGroup() = default;
    from::vector<FD4TaskEntry> entries;
    from::vector<FD4TaskEntryState> states;
    from::deque<FD4TaskEntryState> queue;
    int flags[2];
    CS::cstgi group_id;
    DLKR::DLPlainAdaptiveMutex mutex;
    void* debug_menu_item; // FD4::FD4DebugMenuItem
    void* liber_unknown;
};

/// @endcond

// TODO: expose more functionality
/**
 * @brief Singleton responsible for managing all tasks
 *
 */
class FD4TaskManager {
public:
    FD4_SINGLETON_CLASS(FD4TaskManager);

    virtual ~FD4TaskManager() LIBER_INTERFACE_ONLY;

private:
    struct FD4TaskQueue {
        virtual ~FD4TaskQueue() LIBER_INTERFACE_ONLY;

        from::allocator<void> allocator;
        from::map<CS::cstgi, FD4TaskEntryGroup*> task_groups;
        from::vector<FD4TaskEntryGroup> task_groups_flat;
    };

    from::allocator<void> liber_unknown;
    struct {
        void* vtable;
        DLKR::DLPlainLightMutex* mutex;
        from::vector<liber::dummy> liber_unknown;
    }* liber_unknown[3];
    struct {
        from::allocator<void> allocator;
        DLKR::DLPlainLightMutex mutex;
        from::vector<std::pair<void*, int>> liber_unknown;
        CS::CSTask* cs_task;
        void* liber_unknown[6];
        void* liber_unknown[6];
    }* liber_unknown;
    void* liber_unknown;
    bool liber_unknown;
    bool liber_unknown;
    CS::CSTask* cs_task;
    FD4TaskQueue* task_queue;
    struct {
        void* vtable;
        from::allocator<void> liber_unknown;
        from::vector<void*> liber_unknown;
        bool liber_unknown;
    }* liber_unknown;
};

LIBER_ASSERTS_TEMPLATE_BEGIN(FD4StepTemplateBase, void);
LIBER_ASSERT_SIZE(0xB0);
LIBER_ASSERT_OFFS(0x10, steps);
LIBER_ASSERT_OFFS(0x18, _tree);
LIBER_ASSERT_OFFS(0x70, unk_wstr);
LIBER_ASSERT_OFFS(0xA0, state);
LIBER_ASSERTS_END;

LIBER_ASSERTS_BEGIN(FD4TaskEntryGroup);
LIBER_ASSERT_SIZE(0xD0);
LIBER_ASSERT_OFFS(0x08, entries);
LIBER_ASSERT_OFFS(0x28, states);
LIBER_ASSERT_OFFS(0x48, queue);
LIBER_ASSERT_OFFS(0x80, group_id);
LIBER_ASSERTS_END;

LIBER_ASSERTS_BEGIN(FD4TaskManager);
LIBER_ASSERT_SIZE(0x58);
LIBER_ASSERT_OFFS(0x40, cs_task);
LIBER_ASSERTS_END;
} // namespace FD4
} // namespace from
