/**
 * @file field.hpp
 * @brief Namespace CS world management
 *
 * Copyright 2024 libER ELDEN RING API library
 *
 */
#pragma once

#include <coresystem/world.hpp>
#include <fd4/component.hpp>

namespace from {
namespace CS {
enum class FieldInsType : int {
    HIT = 0,
    CHR = 1,
    OBJ = 2,
    BULLET = 3,
    SFX = 4,
    SOUND = 5,
    GEOM = 6,
    MAP = 7,
    GEOM_HIT = 8
};

struct FieldInsHandle {
    using handle_index = unsigned int;

    handle_index instance_index : 20;
    handle_index instance_holder_index : 8;
    FieldInsType instance_type : 4;
    WorldArea area;
};

class FieldInsBase : public FD4::FD4ComponentBase {
public:
    FD4_RUNTIME_CLASS(FieldInsBase);

    virtual ~FieldInsBase();

    virtual FieldInsType get_type() = 0;

private:
    virtual int liber_unknown() {
        return 0;
    };

public:
    virtual bool has_behavior_param_ref() {
        return false;
    };

private:
    virtual int liber_unknown() {
        return 0;
    };

    // Debug methods:
    virtual void get_instance_name() {};
    virtual void liber_unknown() {};

    FieldInsHandle instance_handle;
};
} // namespace CS
} // namespace from
