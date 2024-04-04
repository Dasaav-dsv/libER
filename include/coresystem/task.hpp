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

// TODO: annotate

namespace from {
namespace CS {
// All task groups:
#include "taskgroups.inl"

// CSTaskGroupId
using cstgi = unsigned int;

// Forward declaration
class CSEzTaskProxy;

class CSEzTask : public FD4::FD4TaskBase {
public:
    FD4_RUNTIME_CLASS(CSEzTask);

    CSEzTask() = default;

    virtual ~CSEzTask() {
        this->free_task();
    }

    void execute(FD4::FD4TaskData* data) override {
        this->eztask_execute(data);
    }

    virtual void eztask_execute(FD4::FD4TaskData* data) = 0;
    LIBERAPI virtual void register_task(CSTaskGroup task_group);
    LIBERAPI virtual void free_task();

    CSTaskGroup get_task_group() const noexcept;

private:
    CSEzTaskProxy* proxy = nullptr;
};

class CSEzTaskProxy : public FD4::FD4TaskBase {
public:
    FD4_RUNTIME_CLASS(CSEzTaskProxy);

    LIBERAPI void execute(FD4::FD4TaskData* data) override;

    virtual CSTaskGroup get_task_group() const noexcept {
        return this->task_group;
    }

private:
    CSEzTask* owner;
    CSTaskGroup task_group;
};

class EzChildStepBase {
public:
    LIBER_CLASS(EzChildStepBase);

    virtual ~EzChildStepBase() = default;

private:
    CSEzTask* task = nullptr;
    bool run = false;
    void* liber_unknown;
};

class CSTask;

class CSTaskImp {
public:
    FD4_SINGLETON_CLASS(CSTaskImp);

    virtual ~CSTaskImp() LIBER_INTERFACE_ONLY;

    // Get the associated CSTask instance (may be null)
    liber::optref<CSTask> get() noexcept {
        if (!this->inst) return std::nullopt;
        return *this->inst;
    }

private:
    CSTask* inst;
};

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
    from::vector<cstg_control> task_groups;
    cstgi task_group_count;
};

// Not constructible, exposition only
class CSTask : private CSTaskBase {
public:
    LIBER_INTERFACE_CLASS(CSTask);

    virtual ~CSTask() LIBER_INTERFACE_ONLY;
    virtual void add_task_group(const wchar_t* name) LIBER_INTERFACE_ONLY;
    virtual bool unk_set_task_group(cstgi) LIBER_INTERFACE_ONLY;
    virtual bool set_task_group_state(
        cstgi id, bool state) LIBER_INTERFACE_ONLY;
    virtual void debug_print() LIBER_INTERFACE_ONLY;
    virtual void queue_tasks(void* unk1, void* unk2) LIBER_INTERFACE_ONLY;

private:
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