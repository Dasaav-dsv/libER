/**
 * @file world_character.hpp
 * @brief ELDEN RING world character management
 *
 * Copyright 2024 libER ELDEN RING API library
 *
 */
#pragma once

#include <coresystem/world.hpp>
#include <detail/preprocessor.hpp>
#include <fd4/detail/singleton.hpp>

namespace from {
namespace CS {
class WorldAreaChrBase {
public:
    virtual ~WorldAreaChrBase();

    WorldAreaInfo* get_area_info() noexcept {
        return this->area_info;
    }

    const WorldAreaInfo* get_area_info() const noexcept {
        return this->area_info;
    }

private:
    WorldAreaInfo* area_info;
};

class WorldAreaChr : public WorldAreaChrBase {
public:
    LIBER_CLASS(WorldAreaChr);

    virtual ~WorldAreaChr();

private:
};

class WorldBlockChr {
public:
    virtual ~WorldBlockChr();
};

class WorldGridAreaChr {
public:
    virtual ~WorldGridAreaChr();
};

class WorldChrManImp {
public:
    FD4_SINGLETON_CLASS(WorldChrManImp);

    virtual ~WorldChrManImp();

private:
    alignas(16) WorldAreaChr chr_areas[28];
    alignas(16) WorldBlockChr chr_blocks[192];
    alignas(16) WorldGridAreaChr chr_grid_areas[6];
};

LIBER_ASSERTS_BEGIN(WorldAreaChr);
LIBER_ASSERT_SIZE(0x28);
LIBER_ASSERTS_END;

LIBER_ASSERTS_BEGIN(WorldChrManImp);
LIBER_ASSERT_SIZE(0x1F3E0);
LIBER_ASSERT_OFFS(0x10, chr_areas);
LIBER_ASSERT_OFFS(0x470, chr_blocks);
LIBER_ASSERT_OFFS(0x10C70, chr_grid_areas);
LIBER_ASSERTS_END;
} // namespace CS
} // namespace from
