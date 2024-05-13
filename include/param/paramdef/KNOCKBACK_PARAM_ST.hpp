/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdef {
/**
 * @brief This struct was automatically generated from XML paramdefs.
 * 
 */
struct KNOCKBACK_PARAM_ST {
    /**
     * @brief Minimal damage_speed maintenance time [s]
     *
     * Set the maintenance time used for tiny damage animation
     */
    float damage_Min_ContTime{ 0.f };

    /**
     * @brief Small damage_speed maintenance time [s]
     *
     * Set the maintenance time used for small damage animation
     */
    float damage_S_ContTime{ 0.f };

    /**
     * @brief Medium damage_speed maintenance time [s]
     *
     * Set the maintenance time used for medium damage animation
     */
    float damage_M_ContTime{ 0.f };

    /**
     * @brief Large damage_speed maintenance time [s]
     *
     * Set the maintenance time used for heavy damage animation
     */
    float damage_L_ContTime{ 0.f };

    /**
     * @brief Small blow-off_speed maintenance time [s]
     *
     * Set the maintenance time used for small blow-off damage animation
     */
    float damage_BlowS_ContTime{ 0.f };

    /**
     * @brief Large blow-off_speed maintenance time [s]
     *
     * Set the maintenance time used during the big blow damage animation
     */
    float damage_BlowM_ContTime{ 0.f };

    /**
     * @brief Slamming_speed maintenance time [s]
     *
     * Set the maintenance time used for slamming damage animation
     */
    float damage_Strike_ContTime{ 0.f };

    /**
     * @brief Launch_speed maintenance time [s]
     *
     * Set the maintenance time used for launch damage animation
     */
    float damage_Uppercut_ContTime{ 0.f };

    /**
     * @brief Push_speed maintenance time [s]
     *
     * Set the maintenance time used for push damage animation
     */
    float damage_Push_ContTime{ 0.f };

    /**
     * @brief Breath_speed maintenance time [s]
     *
     * Set the maintenance time used for breath damage animation
     */
    float damage_Breath_ContTime{ 0.f };

    /**
     * @brief Headshot_speed maintenance time [s]
     *
     * Headshot damage Set the maintenance time used during animation
     */
    float damage_HeadShot_ContTime{ 0.f };

    /**
     * @brief Guard reception small_speed maintenance time [s]
     *
     * Set the maintenance time used for guard receiving small animation
     */
    float guard_S_ContTime{ 0.f };

    /**
     * @brief Large guard reception_speed maintenance time [s]
     *
     * Set the maintenance time used at the time of guard receiving large
     * animation
     */
    float guard_L_ContTime{ 0.f };

    /**
     * @brief Guard reception oversized_speed maintenance time [s]
     *
     * Set the maintenance time used for guard receiving oversized animation
     */
    float guard_LL_ContTime{ 0.f };

    /**
     * @brief Guard smashed_speed maintenance time [s]
     *
     * Set the maintenance time specified at the time of guard scraping
     * animation
     */
    float guardBrake_ContTime{ 0.f };

    /**
     * @brief Minimal damage_Deceleration time [s]
     *
     * Set the deceleration time used for minimal damage animation
     */
    float damage_Min_DecTime{ 0.f };

    /**
     * @brief Small damage_deceleration time [s]
     *
     * Set the deceleration time used for small damage animation
     */
    float damage_S_DecTime{ 0.f };

    /**
     * @brief Medium damage_deceleration time [s]
     *
     * Set the deceleration time used for medium damage animation
     */
    float damage_M_DecTime{ 0.f };

    /**
     * @brief Large damage_deceleration time [s]
     *
     * Set the deceleration time used for heavy damage animation
     */
    float damage_L_DecTime{ 0.f };

    /**
     * @brief Small blow-off_deceleration time [s]
     *
     * Set the deceleration time used for small blow-off damage animation
     */
    float damage_BlowS_DecTime{ 0.f };

    /**
     * @brief Large blow-off_deceleration time [s]
     *
     * Large blow-off damage Set the deceleration time used during animation
     */
    float damage_BlowM_DecTime{ 0.f };

    /**
     * @brief Slamming_deceleration time [s]
     *
     * Set the deceleration time used during slamming damage animation
     */
    float damage_Strike_DecTime{ 0.f };

    /**
     * @brief Launch_Deceleration time [s]
     *
     * Set the deceleration time used during launch damage animation
     */
    float damage_Uppercut_DecTime{ 0.f };

    /**
     * @brief Push_deceleration time [s]
     *
     * Set the deceleration time used during push damage animation
     */
    float damage_Push_DecTime{ 0.f };

    /**
     * @brief Breath_deceleration time [s]
     *
     * Set the deceleration time used during breath damage animation
     */
    float damage_Breath_DecTime{ 0.f };

    /**
     * @brief Headshot_Deceleration time [s]
     *
     * Headshot damage Set the deceleration time used during animation
     */
    float damage_HeadShot_DecTime{ 0.f };

    /**
     * @brief Guard reception small_Deceleration time [s]
     *
     * Set the deceleration time used for guard receiving small animation
     */
    float guard_S_DecTime{ 0.f };

    /**
     * @brief Large guard reception_Deceleration time [s]
     *
     * Set the deceleration time used for guard receiving large animation
     */
    float guard_L_DecTime{ 0.f };

    /**
     * @brief Oversized guard reception_Deceleration time [s]
     *
     * Set the deceleration time used for guard receiving oversized animation
     */
    float guard_LL_DecTime{ 0.f };

    /**
     * @brief Guard smashed_Deceleration time [s]
     *
     * Set the deceleration time specified at the time of guard breaking
     * animation
     */
    float guardBrake_DecTime{ 0.f };

    unsigned char pad[8];
};

}; // namespace paramdef
}; // namespace from

static_assert(sizeof(from::paramdef::KNOCKBACK_PARAM_ST) == 128,
    "KNOCKBACK_PARAM_ST paramdef size does not match detected size");
