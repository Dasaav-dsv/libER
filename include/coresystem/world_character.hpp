/**
 * @file world_character.hpp
 * @brief ELDEN RING world character management
 *
 * Copyright 2024 libER ELDEN RING API library
 *
 */
#pragma once

#include <coresystem/world.hpp>
#include <dantelion2/text.hpp>
#include <detail/preprocessor.hpp>
#include <fd4/detail/singleton.hpp>
#include <fd4/resource.hpp>
#include <memory/from_list.hpp>
#include <memory/from_map.hpp>

#include <cstddef>
#include <cstdint>
#include <span>
#include <utility>

namespace from {
namespace CS {
class ChrIns;
class PlayerIns;

class ChrSet {
public:
    LIBER_CLASS(ChrSet);
    // TODO: flag type instead of int
    using ChrEntry = std::pair<ChrIns*, int>;

    virtual int get_capacity() const;

    std::span<ChrEntry> get_entries() const noexcept {
        return std::span(this->set, this->capacity);
    }

    WorldArea get_area() const noexcept {
        return this->area;
    }

    int get_set_index() const noexcept {
        return this->set_index;
    }

    auto& get_entity_id_map() noexcept {
        return this->entity_id_map;
    }

    const auto& get_entity_id_map() const noexcept {
        return this->entity_id_map;
    }

    auto& get_entity_group_id_map() noexcept {
        return this->entity_group_id_map;
    }

    const auto& get_entity_group_id_map() const noexcept {
        return this->entity_group_id_map;
    }

private:
    int set_index;
    WorldArea area;
    int capacity;
    ChrEntry* set;
    int liber_unknown;
    from::map<int, ChrEntry*> entity_id_map;
    from::map<int, ChrEntry*> entity_group_id_map;
};

class WorldAreaChrBase {
public:
    virtual ~WorldAreaChrBase();

    const WorldAreaInfo* get_area_info() const noexcept {
        return this->area_info;
    }

private:
    WorldAreaInfo* area_info;
};

// TODO: FieldIns handle, methods, how does the second array work?
class OpenFieldChrSet : public ChrSet {
public:
    LIBER_CLASS(OpenFieldChrSet);

private:
    from::list<WorldArea> areas;
    float liber_unknown;
    struct {
        long long handle;
        ChrIns* chr;
    } chr_array[1500];
    long long liber_unknown;
    int chr_count;
    struct {
        long long handle;
        int liber_unknown;
    } chr_search_array[1500];
    long long liber_unknown;
    int chr_search_count;
};

class WorldBlockChr {
public:
    LIBER_CLASS(WorldBlockChr);

    virtual ~WorldBlockChr();

    WorldArea get_area() const noexcept {
        return this->area;
    }

    const WorldBlockInfo* get_block_info() const noexcept {
        return this->block_info;
    }

    ChrSet& get_chr_set() noexcept {
        return this->chr_set;
    }

    const ChrSet& get_chr_set() const noexcept {
        return this->chr_set;
    }

    FD4::FD4ResCap* get_msb_res_cap() const noexcept {
        return this->msb_res_cap;
    }

    bool get_can_interact() const noexcept {
        return this->can_interact;
    }

    void set_can_interact(bool can_interact) noexcept {
        this->can_interact = can_interact;
    }

private:
    WorldBlockInfo* block_info;
    WorldArea area = block_info->get_area();
    float liber_unknown[24];
    ChrSet chr_set;
    int liber_unknown;
    long long liber_unknown;
    FD4::FD4ResCap* msb_res_cap;
    long long liber_unknown[3];
    bool can_interact;
    void* liber_unknown;
    struct block_debug {
        WorldBlockInfo* block_info;
        ChrSet* chr_set;
        DLTX::DLString liber_unknown;
        int liber_unknown;
    } liber_unknown;
    float liber_unknown;
};

class WorldAreaChr : public WorldAreaChrBase {
public:
    LIBER_CLASS(WorldAreaChr);

    virtual ~WorldAreaChr();

    const WorldAreaInfo* get_area_info() const noexcept {
        return this->area_info;
    }

    std::span<WorldBlockChr> get_blocks() const noexcept {
        return std::span(this->blocks, this->block_count);
    }

private:
    WorldAreaInfo* area_info;
    int block_count;
    WorldBlockChr* blocks;
};

class WorldGridAreaChr {
public:
    virtual ~WorldGridAreaChr();

    const WorldGridAreaInfo* get_grid_area_info() const noexcept {
        return this->grid_area_info;
    }

    auto& get_area_chr_map() noexcept {
        return this->area_chr_map;
    }

    const auto& get_area_chr_map() const noexcept {
        return this->area_chr_map;
    }

private:
    WorldGridAreaInfo* grid_area_info;
    WorldGridAreaInfo* liber_unknown;
    from::map<WorldArea, WorldBlockChr*> area_chr_map;
};

class WorldChrManImp {
public:
    FD4_SINGLETON_CLASS(WorldChrManImp);

    virtual ~WorldChrManImp();

private:
    alignas(16) WorldAreaChr area_chr_array[28];
    alignas(16) WorldBlockChr block_chr_array[192];
    alignas(16) WorldGridAreaChr grid_area_chr_array[6];
    WorldInfoOwner* world_owner;
    int area_chr_count;
    WorldAreaChr* area_chr = this->area_chr_array;
    int block_chr_count;
    WorldBlockChr* block_chr = this->block_chr_array;
    int grid_area_chr_count;
    WorldGridAreaChr* grid_area_chr = this->grid_area_chr_array;
    WorldAreaChrBase* area_chr_pointer_array[34];
    int area_chr_pointer_array_count;
    ChrSet player_chr_set;
    ChrSet chr_set2;
    ChrSet chr_set3;
    ChrSet chr_set4;
    OpenFieldChrSet open_field_chr_set;
    int chr_set_holder_count;
    struct chr_set_holder {
        ChrSet* set;
        int set_index;
        WorldBlockChr* block;
    } chr_set_holder_array[197];
    ChrSet* chr_set_array[197];
    WorldGridAreaChr* player_grid_area_chr;
    PlayerIns* player;
    void* liber_unknown;
    WorldArea player_area;
    bool liber_unknown;
    unsigned int frame_counter;
    int world_update_state;
    int world_update_flag1;
    int world_update_flag2;
    bool is_world_update_flag1;
    bool is_world_update_flag2;
    void* liber_unknown; // TODO: +1E538
    void* liber_unknown;
    struct {
        int liber_unknown;
        int liber_unknown;
        int liber_unknown;
        int frame_countdown;
    }* liber_unknown;
    void* liber_unknown;                   // GXSG flat tree
    bool player_has_sleep_collection_item; // EquipParamGoods + 0x65 bit 5
    float player_threat[32];
    void* net_chr_sync; // TODO:
    void* net_speffect_sync;
    void* net_damage_sync;
};

LIBER_ASSERTS_BEGIN(ChrSet);
LIBER_ASSERT_SIZE(0x58);
LIBER_ASSERTS_END;

LIBER_ASSERTS_BEGIN(OpenFieldChrSet);
LIBER_ASSERT_SIZE(0xBC18);
LIBER_ASSERT_OFFS(0x78, chr_array);
LIBER_ASSERT_OFFS(0x5E48, chr_search_array);
LIBER_ASSERTS_END;

LIBER_ASSERTS_BEGIN(WorldAreaChr);
LIBER_ASSERT_SIZE(0x28);
LIBER_ASSERTS_END;

LIBER_ASSERTS_BEGIN(WorldBlockChr);
LIBER_ASSERT_SIZE(0x160);
LIBER_ASSERT_OFFS(0x78, chr_set);
LIBER_ASSERT_OFFS(0xE0, msb_res_cap);
LIBER_ASSERT_OFFS(0x100, can_interact);
LIBER_ASSERTS_END;

LIBER_ASSERTS_BEGIN(WorldChrManImp);
LIBER_ASSERT_SIZE(0x1F3E0);
LIBER_ASSERT_OFFS(0x10, area_chr_array);
LIBER_ASSERT_OFFS(0x470, block_chr_array);
LIBER_ASSERT_OFFS(0x10C70, grid_area_chr_array);
LIBER_ASSERT_OFFS(0x1E500, player_grid_area_chr);
LIBER_ASSERTS_END;
} // namespace CS
} // namespace from
