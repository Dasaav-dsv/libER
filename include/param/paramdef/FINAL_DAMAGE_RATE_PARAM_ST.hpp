/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdef {
/**
 * @brief This struct was automatically generated from XML paramdefs.
 * 
 */
struct FINAL_DAMAGE_RATE_PARAM_ST {
    /**
     * @brief The physical damage rate multiplier.
     * 
     */
    float physRate{ 0.f };
    
    /**
     * @brief The magic damage rate multiplier.
     * 
     */
    float magRate{ 0.f };
    
    /**
     * @brief The fire damage rate multiplier.
     * 
     */
    float fireRate{ 0.f };
    
    /**
     * @brief The lightning damage rate multiplier.
     * 
     */
    float thunRate{ 0.f };
    
    /**
     * @brief The holy damage rate multiplier.
     * 
     */
    float darkRate{ 0.f };
    
    /**
     * @brief The stamina damage rate multiplier.
     * 
     */
    float staminaRate{ 0.f };
    
    /**
     * @brief The super armor damage rate multiplier.
     * 
     */
    float saRate{ 0.f };
};

}; // namespace paramdef
}; // namespace from

static_assert(sizeof(from::paramdef::FINAL_DAMAGE_RATE_PARAM_ST) == 28,
    "FINAL_DAMAGE_RATE_PARAM_ST paramdef size does not match detected size");
