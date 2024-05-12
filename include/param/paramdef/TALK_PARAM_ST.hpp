/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdef {
/**
 * @brief This struct was automatically generated from XML paramdefs.
 * 
 */
struct TALK_PARAM_ST {
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
     * @brief PC Gender is Male: Message ID
     *
     * PC Gender is Male: Specify Message-> Menu
     */
    int msgId{ -1 };

    /**
     * @brief PC Gender is Male: Voice ID
     *
     * PC Gender is Male: Specify Voice-> Sound
     */
    int voiceId{ -1 };

    /**
     * @brief Special effect ID0
     *
     * Specify special effects-> Character
     */
    int spEffectId0{ -1 };

    /**
     * @brief Motion ID 0
     *
     * Specify motion-> Character
     */
    int motionId0{ -1 };

    /**
     * @brief Special effect ID1
     *
     * Specify special effects-> Character
     */
    int spEffectId1{ -1 };

    /**
     * @brief Motion ID 1
     *
     * Specify motion-> Character
     */
    int motionId1{ -1 };

    /**
     * @brief Return position
     *
     * Relative position of returning conversation-> Conversation
     */
    int returnPos{ -1 };

    /**
     * @brief Reaction ID
     *
     * Conversation specification when returning-> Conversation
     */
    int reactionId{ -1 };

    /**
     * @brief Event ID
     *
     * Event ID-> Event
     */
    int eventId{ -1 };

    /**
     * @brief PC Gender is Female: Message
     *
     * PC Gender is Female: Specify Message-> Menu
     */
    int msgId_female{ -1 };

    /**
     * @brief PC Gender is Female: Voice ID
     *
     * PC Gender is Female: Specify Voice-> Sound
     */
    int voiceId_female{ -1 };

    /**
     * @brief Speaker: Lip-sync start time
     *
     * Speaker: Lip-sync start time. -1 with no lip-sync
     */
    short lipSyncStart{ -1 };

    /**
     * @brief Speaker: Lip-sync duration
     *
     * Speaker: Lip-sync duration. Lip-sync at -1 continues forever
     */
    short lipSyncTime{ -1 };

    unsigned char pad2[4];

    /**
     * @brief Voice playback timeout time
     *
     * Voice playback timeout period. In case of -1, time-out processing is
     * performed in "NPC conversation voice playback timeout time" of
     * "Common_Game system parameter".
     */
    float timeout{ -1.f };

    /**
     * @brief Speaker: Subtitled play Anime ID
     *
     * Speaker: Animation ID during conversation
     */
    int talkAnimationId{ -1 };

    /**
     * @brief Whether to forcibly display subtitles
     *
     * Do you want to force the display of subtitles? Display subtitles even
     * when subtitles are turned off as an option
     */
    bool isForceDisp : 1 { false };

    unsigned char pad3 : 7;

    unsigned char pad1[31];
};

}; // namespace paramdef
}; // namespace from

static_assert(sizeof(from::paramdef::TALK_PARAM_ST) == 96,
    "TALK_PARAM_ST paramdef size does not match detected size");
