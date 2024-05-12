/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdef {
/**
 * @brief This struct was automatically generated from XML paramdefs.
 * 
 */
struct ITEMLOT_PARAM_ST {
    /**
     * @brief 1: Item ID
     *
     * Item ID that can be obtained
     */
    int lotItemId01{ 0 };

    /**
     * @brief 2: Item ID
     *
     * Item ID that can be obtained
     */
    int lotItemId02{ 0 };

    /**
     * @brief 3: Item ID
     *
     * Item ID that can be obtained
     */
    int lotItemId03{ 0 };

    /**
     * @brief 4: Item ID
     *
     * Item ID that can be obtained
     */
    int lotItemId04{ 0 };

    /**
     * @brief 5: Item ID
     *
     * Item ID that can be obtained
     */
    int lotItemId05{ 0 };

    /**
     * @brief 6: Item ID
     *
     * Item ID that can be obtained
     */
    int lotItemId06{ 0 };

    /**
     * @brief 7: Item ID
     *
     * Item ID that can be obtained
     */
    int lotItemId07{ 0 };

    /**
     * @brief 8: Item ID
     *
     * Item ID that can be obtained
     */
    int lotItemId08{ 0 };

    /**
     * @brief 1: Item category
     *
     * Category of items that can be obtained
     */
    int lotItemCategory01{ 0 };

    /**
     * @brief 2: Item category
     *
     * Category of items that can be obtained
     */
    int lotItemCategory02{ 0 };

    /**
     * @brief 3: Item category
     *
     * Category of items that can be obtained
     */
    int lotItemCategory03{ 0 };

    /**
     * @brief 4: Item category
     *
     * Category of items that can be obtained
     */
    int lotItemCategory04{ 0 };

    /**
     * @brief 5: Item category
     *
     * Category of items that can be obtained
     */
    int lotItemCategory05{ 0 };

    /**
     * @brief 6: Item category
     *
     * Category of items that can be obtained
     */
    int lotItemCategory06{ 0 };

    /**
     * @brief 7: Item category
     *
     * Category of items that can be obtained
     */
    int lotItemCategory07{ 0 };

    /**
     * @brief 8: Item category
     *
     * Category of items that can be obtained
     */
    int lotItemCategory08{ 0 };

    /**
     * @brief Basic appearance point
     *
     * Appearance point at normal time
     */
    unsigned short lotItemBasePoint01{ 0 };

    /**
     * @brief Basic appearance point
     *
     * Appearance point at normal time
     */
    unsigned short lotItemBasePoint02{ 0 };

    /**
     * @brief Basic appearance point
     *
     * Appearance point at normal time
     */
    unsigned short lotItemBasePoint03{ 0 };

    /**
     * @brief Basic appearance point
     *
     * Appearance point at normal time
     */
    unsigned short lotItemBasePoint04{ 0 };

    /**
     * @brief Basic appearance point
     *
     * Appearance point at normal time
     */
    unsigned short lotItemBasePoint05{ 0 };

    /**
     * @brief Basic appearance point
     *
     * Appearance point at normal time
     */
    unsigned short lotItemBasePoint06{ 0 };

    /**
     * @brief Basic appearance point
     *
     * Appearance point at normal time
     */
    unsigned short lotItemBasePoint07{ 0 };

    /**
     * @brief Basic appearance point
     *
     * Appearance point at normal time
     */
    unsigned short lotItemBasePoint08{ 0 };

    /**
     * @brief Appearance points after accumulation
     *
     * Appearance point at maximum cumulative
     */
    unsigned short cumulateLotPoint01{ 0 };

    /**
     * @brief Appearance points after accumulation
     *
     * Appearance point at maximum cumulative
     */
    unsigned short cumulateLotPoint02{ 0 };

    /**
     * @brief Cumulative post-appearance points
     *
     * Appearance point at maximum cumulative
     */
    unsigned short cumulateLotPoint03{ 0 };

    /**
     * @brief Appearance points after accumulation
     *
     * Appearance point at maximum cumulative
     */
    unsigned short cumulateLotPoint04{ 0 };

    /**
     * @brief Appearance points after accumulation
     *
     * Appearance point at maximum cumulative
     */
    unsigned short cumulateLotPoint05{ 0 };

    /**
     * @brief Appearance points after accumulation
     *
     * Appearance point at maximum cumulative
     */
    unsigned short cumulateLotPoint06{ 0 };

    /**
     * @brief Cumulative post-appearance points
     *
     * Appearance point at maximum cumulative
     */
    unsigned short cumulateLotPoint07{ 0 };

    /**
     * @brief Cumulative post-appearance points
     *
     * Appearance point at maximum cumulative
     */
    unsigned short cumulateLotPoint08{ 0 };

    /**
     * @brief Another crunchy flag ID
     *
     * Combined use of acquired flag and crunchy frame (0: common use)
     */
    unsigned int getItemFlagId01{ 0 };

    /**
     * @brief Another crunchy flag ID
     *
     * Combined use of acquired flag and crunchy frame (0: common use)
     */
    unsigned int getItemFlagId02{ 0 };

    /**
     * @brief Another crunchy flag ID
     *
     * Combined use of acquired flag and crunchy frame (0: common use)
     */
    unsigned int getItemFlagId03{ 0 };

    /**
     * @brief Another crunchy flag ID
     *
     * Combined use of acquired flag and crunchy frame (0: common use)
     */
    unsigned int getItemFlagId04{ 0 };

    /**
     * @brief Another crunchy flag ID
     *
     * Combined use of acquired flag and crunchy frame (0: common use)
     */
    unsigned int getItemFlagId05{ 0 };

    /**
     * @brief Another crunchy flag ID
     *
     * Combined use of acquired flag and crunchy frame (0: common use)
     */
    unsigned int getItemFlagId06{ 0 };

    /**
     * @brief Another crunchy flag ID
     *
     * Combined use of acquired flag and crunchy frame (0: common use)
     */
    unsigned int getItemFlagId07{ 0 };

    /**
     * @brief Another crunchy flag ID
     *
     * Combined use of acquired flag and crunchy frame (0: common use)
     */
    unsigned int getItemFlagId08{ 0 };

    /**
     * @brief Crunchy flag ID
     *
     * Combined use of acquired flag and crunchy frame (0: flag invalid)
     */
    unsigned int getItemFlagId{ 0 };

    /**
     * @brief Lottery cumulative save flag ID
     *
     * For saving the number of lottery (* 8 flag serial number used)
     */
    unsigned int cumulateNumFlagId{ 0 };

    /**
     * @brief Maximum number of lottery cumulative
     *
     * Maximum number of lottery cumulative (0: no cumulative)
     */
    unsigned char cumulateNumMax{ 0 };

    /**
     * @brief Rarity overwrite
     *
     * Specify how valuable items are in the treasure chest. When -1, use the
     * rarity of the equipment para without overwriting
     */
    signed char lotItem_Rarity{ -1 };

    /**
     * @brief Quantity
     *
     * Number of items that can be acquired
     */
    unsigned char lotItemNum01{ 0 };

    /**
     * @brief Quantity
     *
     * Number of items that can be acquired
     */
    unsigned char lotItemNum02{ 0 };

    /**
     * @brief Quantity
     *
     * Number of items that can be acquired
     */
    unsigned char lotItemNum03{ 0 };

    /**
     * @brief Quantity
     *
     * Number of items that can be acquired
     */
    unsigned char lotItemNum04{ 0 };

    /**
     * @brief Quantity
     *
     * Number of items that can be acquired
     */
    unsigned char lotItemNum05{ 0 };

    /**
     * @brief Quantity
     *
     * Number of items that can be acquired
     */
    unsigned char lotItemNum06{ 0 };

    /**
     * @brief Quantity
     *
     * Number of items that can be acquired
     */
    unsigned char lotItemNum07{ 0 };

    /**
     * @brief Quantity
     *
     * Number of items that can be acquired
     */
    unsigned char lotItemNum08{ 0 };

    /**
     * @brief Luck parameter valid
     *
     * Whether the probability of lottery reflects the player's luck
     */
    bool enableLuck01 : 1 { false };

    /**
     * @brief Luck parameter valid
     *
     * Whether the probability of lottery reflects the player's luck
     */
    bool enableLuck02 : 1 { false };

    /**
     * @brief Luck parameter valid
     *
     * Whether the probability of lottery reflects the player's luck
     */
    bool enableLuck03 : 1 { false };

    /**
     * @brief Luck parameter valid
     *
     * Whether the probability of lottery reflects the player's luck
     */
    bool enableLuck04 : 1 { false };

    /**
     * @brief Luck parameter valid
     *
     * Whether the probability of lottery reflects the player's luck
     */
    bool enableLuck05 : 1 { false };

    /**
     * @brief Luck parameter valid
     *
     * Whether the probability of lottery reflects the player's luck
     */
    bool enableLuck06 : 1 { false };

    /**
     * @brief Luck parameter valid
     *
     * Whether the probability of lottery reflects the player's luck
     */
    bool enableLuck07 : 1 { false };

    /**
     * @brief Luck parameter valid
     *
     * Whether the probability of lottery reflects the player's luck
     */
    bool enableLuck08 : 1 { false };

    /**
     * @brief Cumulative reset
     *
     * Whether to reset cumulatively
     */
    bool cumulateReset01 : 1 { false };

    /**
     * @brief Cumulative reset
     *
     * Whether to reset cumulatively
     */
    bool cumulateReset02 : 1 { false };

    /**
     * @brief Cumulative reset
     *
     * Whether to reset cumulatively
     */
    bool cumulateReset03 : 1 { false };

    /**
     * @brief Cumulative reset
     *
     * Whether to reset cumulatively
     */
    bool cumulateReset04 : 1 { false };

    /**
     * @brief Cumulative reset
     *
     * Whether to reset cumulatively
     */
    bool cumulateReset05 : 1 { false };

    /**
     * @brief Cumulative reset
     *
     * Whether to reset cumulatively
     */
    bool cumulateReset06 : 1 { false };

    /**
     * @brief Cumulative reset
     *
     * Whether to reset cumulatively
     */
    bool cumulateReset07 : 1 { false };

    /**
     * @brief Cumulative reset
     *
     * Whether to reset cumulatively
     */
    bool cumulateReset08 : 1 { false };

    /**
     * @brief Offset after X week
     *
     * Offset during lap play
     */
    signed char GameClearOffset{ -1 };

    /**
     * @brief Do you draw lots even with cooperating spirits?
     *
     * Do you draw lots even when you are a cooperating spirit?
     */
    bool canExecByFriendlyGhost : 1 { false };

    /**
     * @brief Do you draw even hostile spirits?
     *
     * Do you draw lots even when you are a hostile spirit?
     */
    bool canExecByHostileGhost : 1 { false };

    /**
     * @brief PAD1
     */
    unsigned char PAD1 : 6 { 0 };

    /**
     * @brief PAD2
     */
    unsigned short PAD2{ 0 };
};

}; // namespace paramdef
}; // namespace from

static_assert(sizeof(from::paramdef::ITEMLOT_PARAM_ST) == 152,
    "ITEMLOT_PARAM_ST paramdef size does not match detected size");
