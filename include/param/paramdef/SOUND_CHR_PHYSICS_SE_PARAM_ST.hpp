/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdef {
/**
 * @brief This struct was automatically generated from XML paramdefs.
 * 
 */
struct SOUND_CHR_PHYSICS_SE_PARAM_ST {
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
     * @brief Ground contact SEID
     *
     * SEID pronounced when contacting the ground after death. (-1: Invalid).
     * SEID category is fixed to c
     */
    int ContactLandSeId{ -1 };

    /**
     * @brief Ground contact additional SEID (for material)
     *
     * Additional SEID (for material) that sounds when it comes into contact
     * with the ground after death. (-1: Invalid). SEID category is fixed to c
     */
    int ContactLandAddSeId{ -1 };

    /**
     * @brief Number of ground contact pronunciations
     *
     * Number of pronunciations when touching the ground after death
     */
    int ContactLandPlayNum{ 1 };

    /**
     * @brief Do you count the number of ground contact sounds in rigid body
     * units?
     *
     * Do you count the number of pronunciations of surface contact after death
     * in rigid body units? (○: Rigid body unit, ×: Character unit)
     */
    bool IsEnablePlayCountPerRigid{ false };

    unsigned char pad[3];

    /**
     * @brief Ground contact minimum impulse value
     *
     * Minimum impulse value required for ground contact determination after
     * death
     */
    float ContactLandMinImpuse{ 20.f };

    /**
     * @brief Ground contact minimum velocity value
     *
     * Minimum speed value required for ground contact determination after death
     */
    float ContactLandMinSpeed{ 0.f };

    /**
     * @brief Player contact SEID
     *
     * SEID that sounds when you come into contact with Player after death. (-1:
     * Invalid). SEID category is fixed to c
     */
    int ContactPlayerSeId{ -1 };

    /**
     * @brief Player minimum contact impulse value
     *
     * Minimum impulse value required for Player contact judgment after death
     */
    float ContactPlayerMinImpuse{ 20.f };

    /**
     * @brief Player minimum contact speed value
     *
     * Minimum speed value required for Player contact judgment after death
     */
    float ContactPlayerMinSpeed{ 0.f };

    /**
     * @brief Contact judgment rigid body IDX0
     *
     * Specify the INDEX of the rigid body for contact judgment. Specify only
     * the rigid body to which you want to attach SE
     */
    signed char ContactCheckRigidIdx0{ -1 };

    /**
     * @brief Contact judgment rigid body IDX1
     *
     * Specify the INDEX of the rigid body for contact judgment. Specify only
     * the rigid body to which you want to attach SE
     */
    signed char ContactCheckRigidIdx1{ -1 };

    /**
     * @brief Contact judgment rigid body IDX2
     *
     * Specify the INDEX of the rigid body for contact judgment. Specify only
     * the rigid body to which you want to attach SE
     */
    signed char ContactCheckRigidIdx2{ -1 };

    /**
     * @brief Contact judgment rigid body IDX3
     *
     * Specify the INDEX of the rigid body for contact judgment. Specify only
     * the rigid body to which you want to attach SE
     */
    signed char ContactCheckRigidIdx3{ -1 };

    /**
     * @brief Contact judgment rigid body IDX4
     *
     * Specify the INDEX of the rigid body for contact judgment. Specify only
     * the rigid body to which you want to attach SE
     */
    signed char ContactCheckRigidIdx4{ -1 };

    /**
     * @brief Contact judgment rigid body IDX5
     *
     * Specify the INDEX of the rigid body for contact judgment. Specify only
     * the rigid body to which you want to attach SE
     */
    signed char ContactCheckRigidIdx5{ -1 };

    /**
     * @brief Contact judgment rigid body IDX6
     *
     * Specify the INDEX of the rigid body for contact judgment. Specify only
     * the rigid body to which you want to attach SE
     */
    signed char ContactCheckRigidIdx6{ -1 };

    /**
     * @brief Contact judgment rigid body IDX7
     *
     * Specify the INDEX of the rigid body for contact judgment. Specify only
     * the rigid body to which you want to attach SE
     */
    signed char ContactCheckRigidIdx7{ -1 };

    /**
     * @brief Contact judgment rigid body IDX8
     *
     * Specify the INDEX of the rigid body for contact judgment. Specify only
     * the rigid body to which you want to attach SE
     */
    signed char ContactCheckRigidIdx8{ -1 };

    /**
     * @brief Contact judgment rigid body IDX9
     *
     * Specify the INDEX of the rigid body for contact judgment. Specify only
     * the rigid body to which you want to attach SE
     */
    signed char ContactCheckRigidIdx9{ -1 };

    /**
     * @brief Contact judgment rigid body IDX10
     *
     * Specify the INDEX of the rigid body for contact judgment. Specify only
     * the rigid body to which you want to attach SE
     */
    signed char ContactCheckRigidIdx10{ -1 };

    /**
     * @brief Contact judgment rigid body IDX11
     *
     * Specify the INDEX of the rigid body for contact judgment. Specify only
     * the rigid body to which you want to attach SE
     */
    signed char ContactCheckRigidIdx11{ -1 };

    /**
     * @brief Contact judgment rigid body IDX12
     *
     * Specify the INDEX of the rigid body for contact judgment. Specify only
     * the rigid body to which you want to attach SE
     */
    signed char ContactCheckRigidIdx12{ -1 };

    /**
     * @brief Contact judgment rigid body IDX13
     *
     * Specify the INDEX of the rigid body for contact judgment. Specify only
     * the rigid body to which you want to attach SE
     */
    signed char ContactCheckRigidIdx13{ -1 };

    /**
     * @brief Contact judgment rigid body IDX14
     *
     * Specify the INDEX of the rigid body for contact judgment. Specify only
     * the rigid body to which you want to attach SE
     */
    signed char ContactCheckRigidIdx14{ -1 };

    /**
     * @brief Contact judgment rigid body IDX15
     *
     * Specify the INDEX of the rigid body for contact judgment. Specify only
     * the rigid body to which you want to attach SE
     */
    signed char ContactCheckRigidIdx15{ -1 };
};

}; // namespace paramdef
}; // namespace from

static_assert(sizeof(from::paramdef::SOUND_CHR_PHYSICS_SE_PARAM_ST) == 56,
    "SOUND_CHR_PHYSICS_SE_PARAM_ST paramdef size does not match detected size");
