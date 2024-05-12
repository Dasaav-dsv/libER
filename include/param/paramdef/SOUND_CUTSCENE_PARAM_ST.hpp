/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdef {
/**
 * @brief This struct was automatically generated from XML paramdefs.
 * 
 */
struct SOUND_CUTSCENE_PARAM_ST {
    /**
     * @brief Do you remove it from the NT version output?
     *
     * Parameters marked with ○ are excluded in the NT version package.
     */
    bool disableParam_NT : 1 { false };

    /**
     * @brief Reserve for package output 1
     */
    unsigned char disableParamReserve1 : 7;

    /**
     * @brief Reserve for package output 2
     */
    unsigned char disableParamReserve2[3];

    /**
     * @brief Reverb type in cutscenes
     *
     * Specifies the reverb type to apply during the cutscene
     */
    unsigned char ReverbType{ 0 };

    unsigned char pad0[3];

    /**
     * @brief Normal BGM behavior at the start of cutscenes
     *
     * Specifies normal BGM behavior at the start of cutscenes
     */
    short BgmBehaviorTypeOnStart{ 0 };

    /**
     * @brief One-shot BGM behavior at the start of the cutscene
     *
     * Specifies the one-shot BGM behavior at the start of the cutscene
     */
    short OneShotBgmBehaviorOnStart{ 0 };

    /**
     * @brief SEID (category: p) specification to post at the end of the
     * cutscene (-1: do not post)
     */
    int PostPlaySeId{ -1 };

    /**
     * @brief Post at the end of the cutscene SEID_Skip (category: p) specified
     * (-1: do not post)
     *
     * SEID_ for skipping to post at the end of the cutscene (category: p)
     * specified (-1: not posted)
     */
    int PostPlaySeIdForSkip{ -1 };

    /**
     * @brief Cutscene drawing time to unmute immediately after entering
     * [seconds] (less than 0: not canceled in drawing time)
     */
    float EnterMapMuteStopTimeOnDrawCutscene{ -1.f };

    unsigned char reserved[12];
};

}; // namespace paramdef
}; // namespace from

static_assert(sizeof(from::paramdef::SOUND_CUTSCENE_PARAM_ST) == 36,
    "SOUND_CUTSCENE_PARAM_ST paramdef size does not match detected size");
