/**
 * @file world.hpp
 * @brief ELDEN RING game world
 *
 * Copyright 2024 libER ELDEN RING API library
 *
 */
#pragma once

#include <dantelion2/utility.hpp>
#include <detail/preprocessor.hpp>
#include <fd4/resource.hpp>
#include <memory/from_map.hpp>
#include <memory/from_set.hpp>
#include <param/param.hpp>

#include <compare>
#include <span>

namespace from {
namespace CS {
using area_id = unsigned int;

struct WorldArea {
    LIBER_CLASS(WorldArea);

    static constexpr area_id debug_area = 89;
    static constexpr area_id any_area_id = 0xFFFF'FFFFu;

    area_id to_area_id() const noexcept {
        return *reinterpret_cast<const area_id*>(this);
    }

    bool is_any_area() const noexcept {
        return this->to_area_id() == any_area_id;
    }

    bool is_debug_area() const noexcept {
        return this->area >= debug_area;
    }

    bool operator==(const WorldArea& rhs) const noexcept {
        return this->to_area_id() == rhs.to_area_id();
    }

    std::strong_ordering operator<=>(const WorldArea& rhs) const noexcept {
        return this->to_area_id() <=> rhs.to_area_id();
    }

    area_id index : 4;
    area_id index_hi : 4;
    area_id region : 8;
    area_id block : 8;
    area_id area : 8;
};

inline WorldArea make_world_area(area_id area = 0, area_id block = 0,
    area_id region = 0, area_id index = 0) {
    WorldArea out{ index, index >> 4, region, block, area };
    if (!out.is_debug_area()) {
        area_id tmp = index / 10;
        out.index = index + tmp * 6;
        out.index_hi = tmp % 10;
    }
    return out;
}

inline WorldArea make_any_area() {
    constexpr area_id any_area_id = WorldArea::any_area_id;
    return make_world_area(any_area_id, any_area_id, any_area_id, any_area_id);
}

struct WorldAreaTile {
    WorldArea sub_tile;     // Index 00
    WorldArea quarter_tile; // Index 01
    WorldArea main_tile;    // Index 02
};

class WorldInfoOwner;
class WorldAreaInfo;

class WorldAreaInfoBase : public DLUT::DLNonCopyable {
public:
    LIBER_CLASS(WorldAreaInfoBase);

    LIBERAPI virtual ~WorldAreaInfoBase();

    // TODO: virtual methods

    WorldArea get_area() const noexcept {
        return this->world_area;
    }

    WorldInfoOwner* get_world_owner() const noexcept {
        return this->world_owner;
    }

private:
    WorldArea world_area;
    area_id map_id;
    WorldInfoOwner* world_owner;
    FD4::FD4ResCap* msb_res_cap;
    void* liber_unknown;
    void* liber_unknown; // GXSG trees
    bool liber_unknown;
};

class alignas(16) WorldBlockInfo : public DLUT::DLNonCopyable {
public:
    LIBER_CLASS(WorldBlockInfo);

    LIBERAPI virtual ~WorldBlockInfo();

    WorldArea get_area() const noexcept {
        return this->area;
    }

    WorldInfoOwner* get_world_owner() const noexcept {
        return this->world_owner;
    }

    WorldAreaInfo* get_area_owner() const noexcept {
        return this->area_owner;
    }

    WorldAreaInfo* get_area_info() const noexcept {
        return this->area_info;
    }

    float* get_block_coordinates() noexcept {
        return this->block_coordinates;
    }

    const float* get_block_coordinates() const noexcept {
        return this->block_coordinates;
    }

    auto& get_ceremony_param() noexcept {
        return this->ceremony_param;
    }

    const auto& get_ceremony_param() const noexcept {
        return this->ceremony_param;
    }

private:
    WorldArea area;
    WorldInfoOwner* world_owner;
    WorldAreaInfo* area_owner;
    WorldAreaInfo* area_info;
    void* liber_unknown;
    int liber_unknown;
    WorldArea block_area;
    int liber_unknown;
    int liber_unknown;
    bool is_debug_area;
    bool is_debug_map; // m99 or m09
    long long liber_unknown[5];
    float block_coordinates[4];
    long long liber_unknown[8];
    struct ceremony_param_holder {
        param::row_index_type row_id;
        paramdef::CEREMONY_PARAM_ST* row;
    } ceremony_param;
    int liber_unknown;
    bool liber_unknown;
};

class WorldAreaInfo : public WorldAreaInfoBase {
public:
    LIBER_CLASS(WorldAreaInfo);

    LIBERAPI virtual ~WorldAreaInfo();

    std::span<WorldBlockInfo> get_blocks() const noexcept {
        return std::span(this->blocks, this->block_count);
    }

private:
    int liber_unknown;
    int liber_unknown;
    int block_count;
    WorldBlockInfo* blocks;
};

// TODO: methods
class WorldGridAreaInfo : public WorldAreaInfoBase {
public:
    LIBER_CLASS(WorldGridAreaInfo);

    LIBERAPI virtual ~WorldGridAreaInfo();

private:
    int grid_position[3];
    area_id grid_block;
    area_id grid_region;
    area_id grid_index;
    int liber_unknown[3];
    float liber_unknown[4];
    float grid_coordinates[4];
    WorldBlockInfo* current_block;
    from::map<float, WorldBlockInfo*> liber_unknown;
    from::set<float> liber_unknown;
    int liber_unknown;
    from::set<float> liber_unknown;
    int liber_unknown;
};

class WorldInfo : public DLUT::DLNonCopyable {
public:
    LIBER_INTERFACE_CLASS(WorldInfo);

    LIBERAPI virtual ~WorldInfo();

    std::span<WorldAreaInfo> get_area_info() const noexcept {
        return std::span(this->area_info, this->area_info_count);
    }

    std::span<WorldBlockInfo> get_block_info() const noexcept {
        return std::span(this->block_info, this->block_info_count);
    }

    std::span<WorldGridAreaInfo> get_grid_area_info() const noexcept {
        return std::span(this->grid_area_info, this->grid_area_info_count);
    }

    std::span<WorldAreaInfoBase*> get_area_info_array() const noexcept {
        return std::span(const_cast<WorldInfo*>(this)->area_info_pointer_array,
            this->area_info_pointer_count);
    }

private:
    int area_info_count;
    WorldAreaInfo* area_info = this->area_info_array; // Pointer to +0x160
    int grid_area_info_count;
    WorldGridAreaInfo* grid_area_info =
        this->grid_area_info_array; // Pointer to +0xB220
    int area_info_pointer_count;
    WorldAreaInfoBase*
        area_info_pointer_array[34]; // Map (m10, m19, ..., m60) count times two
    int block_info_count;
    WorldBlockInfo* block_info =
        this->block_info_array; // Pointer to +0xA20
    bool liber_unknown;
    alignas(16) WorldAreaInfo area_info_array[28];
    alignas(16) WorldBlockInfo block_info_array[192];
    alignas(16) WorldGridAreaInfo grid_area_info_array[6];
};

class WorldAreaResBase : public DLUT::DLNonCopyable {
public:
    LIBER_CLASS(WorldAreaResBase);

    LIBERAPI virtual ~WorldAreaResBase();

    WorldAreaInfo* get_area() const noexcept {
        return this->area_info;
    }

    WorldInfoOwner* get_world_owner() const noexcept {
        return this->world_owner;
    }

private:
    WorldAreaInfo* area_info;
    WorldInfoOwner* world_owner;
    long long liber_unknown[406]; // A LOT of resource file capsules
    struct {
        void* vtable;
        WorldAreaResBase* owner;
    } liber_unknown;
};

class WorldAreaRes;

class WorldBlockResBase : public DLUT::DLNonCopyable {
public:
    LIBER_CLASS(WorldBlockResBase);

    LIBERAPI virtual ~WorldBlockResBase();

    WorldBlockInfo* get_block() const noexcept {
        return this->block;
    }

    WorldInfoOwner* get_world_owner() const noexcept {
        return this->world_owner;
    }

    WorldAreaRes* get_area_res() const noexcept {
        return this->area_res;
    }

private:
    WorldBlockInfo* block;
    WorldInfoOwner* world_owner;
    WorldAreaRes* area_res;
    long long liber_unknown[18];
};

class WorldBlockRes : public WorldBlockResBase {
public:
    LIBER_CLASS(WorldBlockRes);

    LIBERAPI virtual ~WorldBlockRes();

private:
    long long liber_unknown[348];
    struct {
        void* vtable;
        WorldBlockRes* owner;
    } liber_unknown;
};

class WorldLodBlockRes : public WorldBlockResBase {
public:
    LIBER_CLASS(WorldLodBlockRes);

    LIBERAPI virtual ~WorldLodBlockRes();

private:
    long long liber_unknown[8];
    struct {
        void* vtable;
        WorldBlockRes* owner;
    } liber_unknown;
    int liber_unknown;
};

class WorldAreaRes : public WorldAreaResBase {
public:
    LIBER_CLASS(WorldAreaRes);

    LIBERAPI virtual ~WorldAreaRes();

    std::span<WorldBlockRes> get_blocks() const noexcept {
        return std::span(this->blocks, this->block_count);
    }

private:
    WorldAreaInfo* area_info;
    int block_count;
    WorldBlockRes* blocks;
};

class WorldGridAreaRes : public WorldAreaResBase {
public:
    LIBER_CLASS(WorldAreaRes);

    LIBERAPI virtual ~WorldGridAreaRes();

    WorldGridAreaInfo* get_grid_area_info() const noexcept {
        this->grid_area_info;
    }

    WorldArea get_area() const noexcept {
        return make_world_area(this->grid_area, this->grid_block,
            this->grid_region, this->grid_index);
    }

    auto& get_lod_blocks() noexcept {
        return this->lod_blocks;
    }

    const auto& get_lod_blocks() const noexcept {
        return this->lod_blocks;
    }

    const WorldAreaTile& get_tile() const noexcept {
        return this->tile;
    }

    float get_player_distance() const noexcept {
        return this->player_distance;
    }

    const float* get_player_coordinates() const noexcept {
        return this->player_coordinates;
    }

    bool get_lod() const noexcept {
        return this->is_lod;
    }

    void set_lod(bool is_lod) noexcept {
        this->is_lod = is_lod;
    }

private:
    WorldGridAreaInfo* grid_area_info;
    area_id grid_area;
    int liber_unknown[8];
    float player_distance;
    from::map<float, WorldLodBlockRes*> lod_blocks;
    WorldAreaTile tile;
    long long liber_unknown[18];
    float player_coordinates[4];
    long long liber_unknown[54];
    bool is_lod;
    area_id grid_block;
    area_id grid_region;
    area_id grid_index;
};

class WorldRes : public WorldInfo {
public:
    LIBER_INTERFACE_CLASS(WorldRes);

    LIBERAPI virtual ~WorldRes();

    std::span<WorldAreaRes> get_area_info() const noexcept {
        return std::span(this->area_res, this->area_res_count);
    }

    std::span<WorldBlockRes> get_block_info() const noexcept {
        return std::span(this->block_res, this->block_res_count);
    }

    std::span<WorldGridAreaRes> get_grid_area_info() const noexcept {
        return std::span(this->grid_area_res, this->grid_area_res_count);
    }

    std::span<WorldAreaResBase*> get_area_info_array() const noexcept {
        return std::span(const_cast<WorldRes*>(this)->area_res_pointer_array,
            34);
    }

private:
    int area_res_count;
    WorldAreaRes* area_res = this->area_res_array;
    float liber_unknown;
    float liber_unknown;
    int grid_area_res_count;
    WorldGridAreaRes* grid_area_res = this->grid_area_res_array;
    int block_res_count;
    WorldBlockRes* block_res = this->block_res_array;
    WorldAreaTile tile;
    short liber_unknown;
    char liber_unknown;
    alignas(16) float liber_unknown[4];
    short liber_unknown;
    int liber_unknown;
    alignas(16) WorldAreaRes area_res_array[28];
    alignas(16) WorldBlockRes block_res_array[192];
    alignas(16) WorldGridAreaRes grid_area_res_array[6];
    WorldAreaResBase* area_res_pointer_array[34];
    int area_res_pointer_count;
    int liber_unknown;
    WorldAreaTile tile_res;
    long long liber_unknown[17];
    float liber_unknown[4];
    from::set<liber::dummy> liber_unknown;
    long long liber_unknown;
};

class WorldInfoOwner : public WorldRes {
public:
    LIBER_INTERFACE_CLASS(WorldInfoOwner);

    LIBERAPI virtual ~WorldInfoOwner();
};

LIBER_ASSERTS_BEGIN(WorldArea);
LIBER_ASSERT_SIZE(0x4);
LIBER_ASSERTS_END;

LIBER_ASSERTS_BEGIN(WorldBlockInfo);
LIBER_ASSERT_SIZE(0xE0);
LIBER_ASSERT_OFFS(0x40, is_debug_area);
LIBER_ASSERT_OFFS(0x70, block_coordinates);
LIBER_ASSERT_OFFS(0xC0, ceremony_param);
LIBER_ASSERTS_END;

LIBER_ASSERTS_BEGIN(WorldAreaInfoBase);
LIBER_ASSERT_SIZE(0x38);
LIBER_ASSERTS_END;

LIBER_ASSERTS_BEGIN(WorldAreaInfo);
LIBER_ASSERT_SIZE(0x50);
LIBER_ASSERTS_END;

LIBER_ASSERTS_BEGIN(WorldGridAreaInfo);
LIBER_ASSERT_SIZE(0xE0);
LIBER_ASSERT_OFFS(0x6C, grid_coordinates);
LIBER_ASSERT_OFFS(0x80, current_block);
LIBER_ASSERTS_END;

LIBER_ASSERTS_BEGIN(WorldInfo);
LIBER_ASSERT_SIZE(0xB760);
LIBER_ASSERT_OFFS(0x30, area_info_pointer_array);
LIBER_ASSERT_OFFS(0x140, block_info_count);
LIBER_ASSERT_OFFS(0x160, area_info_array);
LIBER_ASSERT_OFFS(0xA20, block_info_array);
LIBER_ASSERT_OFFS(0xB220, grid_area_info_array);
LIBER_ASSERTS_END;

LIBER_ASSERTS_BEGIN(WorldAreaResBase);
LIBER_ASSERT_SIZE(0xCD8);
LIBER_ASSERTS_END;

LIBER_ASSERTS_BEGIN(WorldBlockResBase);
LIBER_ASSERT_SIZE(0xB0);
LIBER_ASSERTS_END;

LIBER_ASSERTS_BEGIN(WorldBlockRes);
LIBER_ASSERT_SIZE(0xBA0);
LIBER_ASSERTS_END;

LIBER_ASSERTS_BEGIN(WorldLodBlockRes);
LIBER_ASSERT_SIZE(0x108);
LIBER_ASSERTS_END;

LIBER_ASSERTS_BEGIN(WorldAreaRes);
LIBER_ASSERT_SIZE(0xCF0);
LIBER_ASSERTS_END;

LIBER_ASSERTS_BEGIN(WorldGridAreaRes);
LIBER_ASSERT_SIZE(0xF90);
LIBER_ASSERT_OFFS(0xF80, is_lod);
LIBER_ASSERTS_END;

LIBER_ASSERTS_BEGIN(WorldRes);
LIBER_ASSERT_SIZE(0xB3950);
LIBER_ASSERT_OFFS(0xB798, tile);
LIBER_ASSERT_OFFS(0xB7D0, area_res_array);
LIBER_ASSERT_OFFS(0x22210, block_res_array);
LIBER_ASSERT_OFFS(0xADA10, grid_area_res_array);
LIBER_ASSERT_OFFS(0xB3888, tile_res);
LIBER_ASSERTS_END;
} // namespace CS
} // namespace from
