/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdef {
/**
 * @brief This struct was automatically generated from XML paramdefs.
 * 
 */
struct ACTIONBUTTON_PARAM_ST {
    /**
     * @brief Range type
     *
     * Range shape (cylinder, prism, capsule)
     */
    unsigned char regionType{ 0 };

    /**
     * @brief category
     *
     * category. The number on the left side of the name is the priority when
     * multiple action buttons overlap (the closer it is to 0, the higher the
     * priority is displayed).
     */
    unsigned char category{ 0 };

    unsigned char padding1[2];

    /**
     * @brief Damipoli 1
     *
     * Specify the Damipoli ID that is the center of the bottom of the range. If
     * there is no Damipoly or -1 is entered, the center coordinates will be the
     * reference.
     */
    int dummyPoly1{ -1 };

    /**
     * @brief Damipoli 2
     *
     * Used only when the range type is a capsule. Additional Damipoly (capsule)
     * that creates a line segment with two Damipoly
     */
    int dummyPoly2{ -1 };

    /**
     * @brief radius
     *
     * Radius (cylinder / capsule)
     */
    float radius{ 0.f };

    /**
     * @brief angle
     *
     * Angle (cylinder)
     */
    int angle{ 180 };

    /**
     * @brief depth
     *
     * Depth (prism)
     */
    float depth{ 0.f };

    /**
     * @brief width
     *
     * Width (prism)
     */
    float width{ 0.f };

    /**
     * @brief height
     *
     * Height (cylinder / prism)
     */
    float height{ 0.f };

    /**
     * @brief Bottom height offset
     *
     * How much to raise or lower the Y coordinate of the bottom (cylinder /
     * prism)
     */
    float baseHeightOffset{ 0.f };

    /**
     * @brief Angle difference judgment type
     *
     * Angle difference judgment type (cylinder / prism)
     */
    unsigned char angleCheckType{ 0 };

    unsigned char padding2[3];

    /**
     * @brief Allowable angle difference
     *
     * Allowable angle difference (cylinder / prism)
     */
    int allowAngle{ 180 };

    /**
     * @brief Action spot Damipoli
     *
     * If there is no Damipoli that specifies the Damipoli ID that will be the
     * position of the action spot, or if -1 is entered, the center coordinates
     * will be the reference.
     */
    int spotDummyPoly{ -1 };

    /**
     * @brief Text box type
     */
    unsigned char textBoxType{ 0 };

    unsigned char padding3[2];

    unsigned char padding5 : 1;

    /**
     * @brief Is it invalid when riding?
     *
     * If this item is YES, the action button will not appear when riding and no
     * judgment will be made.
     */
    bool isInvalidForRide : 1 { false };

    /**
     * @brief Is it gray out when riding?
     *
     * If this item is YES, the action button will be grayed out when riding and
     * no judgment will be made.
     */
    bool isGrayoutForRide : 1 { false };

    /**
     * @brief Is it invalid when crouching?
     *
     * If this item is YES, the action button will not appear when crouching,
     * and no judgment will be made.
     */
    bool isInvalidForCrouching : 1 { false };

    /**
     * @brief Is it gray out when crouching?
     *
     * If this item is YES, the action button will be grayed out when crouching
     * and no judgment will be made.
     */
    bool isGrayoutForCrouching : 1 { false };

    unsigned char padding4 : 3;

    /**
     * @brief Text ID
     *
     * Text ID to display
     */
    int textId{ -1 };

    /**
     * @brief Invalid flag
     *
     * If this flag is ON, the action button will not appear and no judgment
     * will be made.
     */
    unsigned int invalidFlag{ 0 };

    /**
     * @brief Gray out flag
     *
     * If this flag is ON, the action button will be grayed out and no judgment
     * will be made.
     */
    unsigned int grayoutFlag{ 0 };

    /**
     * @brief Replacement action button ID when riding
     *
     * Replace with this action button ID parameter while riding (-1: No
     * replacement)
     */
    int overrideActionButtonIdForRide{ -1 };

    /**
     * @brief Invalid time after execution
     *
     * Invalid time after execution (-infinite by value)
     */
    float execInvalidTime{ 0.f };

    unsigned char padding6[28];
};

}; // namespace paramdef
}; // namespace from

static_assert(sizeof(from::paramdef::ACTIONBUTTON_PARAM_ST) == 100,
    "ACTIONBUTTON_PARAM_ST paramdef size does not match detected size");
