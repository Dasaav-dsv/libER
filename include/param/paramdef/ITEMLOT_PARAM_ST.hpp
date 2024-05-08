/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdefs {

struct ITEMLOT_PARAM_ST {
    int lotItemId01{ 0 };
    int lotItemId02{ 0 };
    int lotItemId03{ 0 };
    int lotItemId04{ 0 };
    int lotItemId05{ 0 };
    int lotItemId06{ 0 };
    int lotItemId07{ 0 };
    int lotItemId08{ 0 };
    int lotItemCategory01{ 0 };
    int lotItemCategory02{ 0 };
    int lotItemCategory03{ 0 };
    int lotItemCategory04{ 0 };
    int lotItemCategory05{ 0 };
    int lotItemCategory06{ 0 };
    int lotItemCategory07{ 0 };
    int lotItemCategory08{ 0 };
    unsigned short lotItemBasePoint01{ 0 };
    unsigned short lotItemBasePoint02{ 0 };
    unsigned short lotItemBasePoint03{ 0 };
    unsigned short lotItemBasePoint04{ 0 };
    unsigned short lotItemBasePoint05{ 0 };
    unsigned short lotItemBasePoint06{ 0 };
    unsigned short lotItemBasePoint07{ 0 };
    unsigned short lotItemBasePoint08{ 0 };
    unsigned short cumulateLotPoint01{ 0 };
    unsigned short cumulateLotPoint02{ 0 };
    unsigned short cumulateLotPoint03{ 0 };
    unsigned short cumulateLotPoint04{ 0 };
    unsigned short cumulateLotPoint05{ 0 };
    unsigned short cumulateLotPoint06{ 0 };
    unsigned short cumulateLotPoint07{ 0 };
    unsigned short cumulateLotPoint08{ 0 };
    unsigned int getItemFlagId01{ 0 };
    unsigned int getItemFlagId02{ 0 };
    unsigned int getItemFlagId03{ 0 };
    unsigned int getItemFlagId04{ 0 };
    unsigned int getItemFlagId05{ 0 };
    unsigned int getItemFlagId06{ 0 };
    unsigned int getItemFlagId07{ 0 };
    unsigned int getItemFlagId08{ 0 };
    unsigned int getItemFlagId{ 0 };
    unsigned int cumulateNumFlagId{ 0 };
    unsigned char cumulateNumMax{ 0 };
    signed char lotItem_Rarity{ -1 };
    unsigned char lotItemNum01{ 0 };
    unsigned char lotItemNum02{ 0 };
    unsigned char lotItemNum03{ 0 };
    unsigned char lotItemNum04{ 0 };
    unsigned char lotItemNum05{ 0 };
    unsigned char lotItemNum06{ 0 };
    unsigned char lotItemNum07{ 0 };
    unsigned char lotItemNum08{ 0 };
    bool enableLuck01 : 1 { false };
    bool enableLuck02 : 1 { false };
    bool enableLuck03 : 1 { false };
    bool enableLuck04 : 1 { false };
    bool enableLuck05 : 1 { false };
    bool enableLuck06 : 1 { false };
    bool enableLuck07 : 1 { false };
    bool enableLuck08 : 1 { false };
    bool cumulateReset01 : 1 { false };
    bool cumulateReset02 : 1 { false };
    bool cumulateReset03 : 1 { false };
    bool cumulateReset04 : 1 { false };
    bool cumulateReset05 : 1 { false };
    bool cumulateReset06 : 1 { false };
    bool cumulateReset07 : 1 { false };
    bool cumulateReset08 : 1 { false };
    signed char GameClearOffset{ -1 };
    bool canExecByFriendlyGhost : 1 { false };
    bool canExecByHostileGhost : 1 { false };
    unsigned char PAD1 : 6 { 0 };
    unsigned short PAD2{ 0 };
};

}; // namespace paramdefs
}; // namespace from

static_assert(sizeof(from::paramdefs::ITEMLOT_PARAM_ST) == 152,
    "ITEMLOT_PARAM_ST paramdef size does not match detected size");
