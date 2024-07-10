/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdef {

struct MAP_NAME_TEX_PARAM_ST_DLC02 {
    /**
     * @brief NT版出力から外すか
     *
     * ○をつけたパラメータをNT版パッケージでは除外します
     */
    bool disableParam_NT : 1 { false };

    /**
     * @brief パッケージ出力用リザーブ1
     */
    unsigned char disableParamReserve1 : 7;

    /**
     * @brief パッケージ出力用リザーブ2
     */
    unsigned char disableParamReserve2[3];

    /**
     * @brief R
     *
     * 変換前の地図画像のカラー情報（R）。RGB値が一致したピクセルとこのパラメータが紐づく
     */
    unsigned char srcR{ 0 };

    /**
     * @brief G
     *
     * 変換前の地図画像のカラー情報（G）。RGB値が一致したピクセルとこのパラメータが紐づく
     */
    unsigned char srcG{ 0 };

    /**
     * @brief B
     *
     * 変換前の地図画像のカラー情報（B）。RGB値が一致したピクセルとこのパラメータが紐づく
     */
    unsigned char srcB{ 0 };

    unsigned char pad1[1];

    /**
     * @brief マップ名ID_地名表示用
     *
     * 地名表示用のマップ名ID[PlaceName](0:無効値)
     */
    int mapNameId{ 0 };

    int unknown_0xc{ 0 };

    unsigned char unknown_0x10{ 0 };

    unsigned char unknown_0x11{ 0 };

    unsigned char unknown_0x12{ 0 };

    unsigned char unknown_0x13{ 0 };

    int unknown_0x14{ 0 };

    int unknownTextID_1{ 0 };

    int unknownTextID_2{ 0 };

    int unknown_0x20{ 0 };

    int unknown_0x24{ 0 };
};

}; // namespace paramdef
}; // namespace from
