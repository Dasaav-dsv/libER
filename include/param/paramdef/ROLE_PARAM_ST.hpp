/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdef {
/**
 * @brief This struct was automatically generated from XML paramdefs.
 * 
 */
struct ROLE_PARAM_ST {
    /**
     * @brief Team type
     */
    unsigned char teamType{ 0 };

    unsigned char pad10[3];

    /**
     * @brief Phantom parameter ID (pledge rank 0)
     *
     * Phantom parameter ID when pledge rank is 0
     */
    int phantomParamId{ -1 };

    /**
     * @brief Resident special effect 0
     */
    int spEffectID0{ -1 };

    /**
     * @brief Resident special effect 1
     */
    int spEffectID1{ -1 };

    /**
     * @brief Resident special effect 2
     */
    int spEffectID2{ -1 };

    /**
     * @brief Resident special effect 3
     */
    int spEffectID3{ -1 };

    /**
     * @brief Resident special effect 4
     */
    int spEffectID4{ -1 };

    /**
     * @brief Resident special effect 5
     */
    int spEffectID5{ -1 };

    /**
     * @brief Resident special effect 6
     */
    int spEffectID6{ -1 };

    /**
     * @brief Resident special effect 7
     */
    int spEffectID7{ -1 };

    /**
     * @brief Resident special effect 8
     */
    int spEffectID8{ -1 };

    /**
     * @brief Resident special effect 9
     */
    int spEffectID9{ -1 };

    /**
     * @brief SOS sign SFX ID
     *
     * SOS sign SFX ID issued by another person
     */
    int sosSignSfxId{ 0 };

    /**
     * @brief SOS sign SFX ID issued by me
     */
    int mySosSignSfxId{ 0 };

    /**
     * @brief Anime ID (player) when summoned
     *
     * Anime ID to play when the player is summoned and the game starts
     */
    int summonStartAnimId{ 0 };

    /**
     * @brief Reward item lottery ID_for map
     *
     * Acquisition reward item lottery parameter ID_for map (not -1)
     */
    int itemlotParamId{ -1 };

    /**
     * @brief Voice chat group
     */
    unsigned char voiceChatGroup{ 0 };

    /**
     * @brief Role name text color
     *
     * The color of the role name text displayed on the FE of the network PC
     */
    unsigned char roleNameColor{ 0 };

    unsigned char pad1[2];

    /**
     * @brief Role name text ID
     *
     * Text ID of the role name to be displayed on the FE of the network PC
     */
    int roleNameId{ 0 };

    /**
     * @brief Threat level
     */
    unsigned int threatLv{ 0 };

    /**
     * @brief Phantom parameter ID (pledge rank 1)
     *
     * Phantom parameter ID when pledge rank is 1
     */
    int phantomParamId_vowRank1{ -1 };

    /**
     * @brief Phantom Parameter ID (Pledge Rank 2)
     *
     * Phantom parameter ID when pledge rank is 2
     */
    int phantomParamId_vowRank2{ -1 };

    /**
     * @brief Phantom Parameter ID (Pledge Rank 3)
     *
     * Phantom parameter ID when pledge rank is 3
     */
    int phantomParamId_vowRank3{ -1 };

    /**
     * @brief Special effect ID for SFX (pledge rank 0)
     *
     * Special effect ID for SFX when pledge rank 0
     */
    int spEffectID_vowRank0{ -1 };

    /**
     * @brief Special effect ID for SFX (pledge rank 1)
     *
     * Special effect ID for SFX when pledge rank 1
     */
    int spEffectID_vowRank1{ -1 };

    /**
     * @brief Special effect ID for SFX (pledge rank 2)
     *
     * Special effect ID for SFX when pledge rank 2
     */
    int spEffectID_vowRank2{ -1 };

    /**
     * @brief Special effect ID for SFX (pledge rank 3)
     *
     * Special effect ID for SFX when pledge rank 3
     */
    int spEffectID_vowRank3{ -1 };

    /**
     * @brief Phantom ID for sign illusion
     *
     * Multiplayer pledge ghost body sign phantom ID designation for illusion
     */
    int signPhantomId{ -1 };

    /**
     * @brief Anime ID when summoned (other than player)
     *
     * Anime ID to play when a player other than the player is summoned and the
     * game starts
     */
    int nonPlayerSummonStartAnimId{ 0 };

    unsigned char pad2[16];
};

}; // namespace paramdef
}; // namespace from

static_assert(sizeof(from::paramdef::ROLE_PARAM_ST) == 128,
    "ROLE_PARAM_ST paramdef size does not match detected size");
