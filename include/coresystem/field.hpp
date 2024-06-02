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

#include <compare>

namespace from {
namespace CS {
using handle_index = unsigned int;

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
    LIBER_CLASS(FieldInsHandle);

    using handle_uid = unsigned long long;

    handle_index instance_index : 20;
    handle_index instance_holder_index : 8;
    FieldInsType instance_type : 4;
    WorldArea area;

    handle_uid to_handle_uid() const noexcept {
        return *reinterpret_cast<const handle_uid*>(this);
    }

    bool operator==(const FieldInsHandle& rhs) const noexcept {
        return this->to_handle_uid() == rhs.to_handle_uid();
    }

    std::strong_ordering operator<=>(const FieldInsHandle& rhs) const noexcept {
        return this->to_handle_uid() <=> rhs.to_handle_uid();
    }
};

inline FieldInsHandle make_hit_ins_handle(handle_index instance_index,
    handle_index instance_holder_index, WorldArea area = make_any_area()) {
    return { instance_index, instance_holder_index, FieldInsType::HIT, area };
}

inline FieldInsHandle make_chr_ins_handle(handle_index instance_index,
    handle_index instance_holder_index, WorldArea area = make_any_area()) {
    return { instance_index, instance_holder_index, FieldInsType::CHR, area };
}

inline FieldInsHandle make_obj_ins_handle(handle_index instance_index,
    handle_index instance_holder_index, WorldArea area = make_any_area()) {
    return { instance_index, instance_holder_index, FieldInsType::OBJ, area };
}

inline FieldInsHandle make_bullet_ins_handle(handle_index instance_index,
    handle_index instance_holder_index, WorldArea area = make_any_area()) {
    return { instance_index, instance_holder_index, FieldInsType::BULLET,
        area };
}

inline FieldInsHandle make_sfx_ins_handle(handle_index instance_index,
    handle_index instance_holder_index, WorldArea area = make_any_area()) {
    return { instance_index, instance_holder_index, FieldInsType::SFX, area };
}

inline FieldInsHandle make_sound_ins_handle(handle_index instance_index,
    handle_index instance_holder_index, WorldArea area = make_any_area()) {
    return { instance_index, instance_holder_index, FieldInsType::SOUND, area };
}

inline FieldInsHandle make_geom_ins_handle(handle_index instance_index,
    handle_index instance_holder_index, WorldArea area = make_any_area()) {
    return { instance_index, instance_holder_index, FieldInsType::GEOM, area };
}

inline FieldInsHandle make_map_ins_handle(handle_index instance_index,
    handle_index instance_holder_index, WorldArea area = make_any_area()) {
    return { instance_index, instance_holder_index, FieldInsType::MAP, area };
}

inline FieldInsHandle make_geom_hit_ins_handle(handle_index instance_index,
    handle_index instance_holder_index, WorldArea area = make_any_area()) {
    return { instance_index, instance_holder_index, FieldInsType::GEOM_HIT,
        area };
}

class FieldInsBase : public FD4::FD4ComponentBase {
public:
    FD4_RUNTIME_CLASS(FieldInsBase);

    FieldInsHandle get_handle() const noexcept {
        return this->instance_handle;
    }

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
    virtual void get_instance_name(){};
    virtual void liber_unknown(){};

    FieldInsHandle instance_handle;
};

LIBER_ASSERTS_BEGIN(FieldInsHandle);
LIBER_ASSERT_SIZE(0x8);
LIBER_ASSERTS_END;
} // namespace CS
} // namespace from
