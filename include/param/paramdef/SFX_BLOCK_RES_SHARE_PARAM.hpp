/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdef {
/**
 * @brief This struct was automatically generated from XML paramdefs.
 * 
 */
struct SFX_BLOCK_RES_SHARE_PARAM {
    /**
     * @brief Block Sfx resource reference map number
     *
     * The map number that references the resource. Set the numerical value of
     * the map number. (m12_34_56_78 → 12345678)
     */
    unsigned int shareBlockRsMapUidVal{ 0 };
};

}; // namespace paramdef
}; // namespace from

static_assert(sizeof(from::paramdef::SFX_BLOCK_RES_SHARE_PARAM) == 4,
    "SFX_BLOCK_RES_SHARE_PARAM paramdef size does not match detected size");
