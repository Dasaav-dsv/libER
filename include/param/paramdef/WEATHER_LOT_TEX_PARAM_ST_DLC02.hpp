/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdef {

struct WEATHER_LOT_TEX_PARAM_ST_DLC02 {
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
     * @brief 天候抽選ID
     *
     * 天候抽選ID(-1:設定なし(デフォルト値))
     */
    int weatherLogId{ -1 };

    int unknown_0xc{ 0 };

    int unknown_0x10{ 0 };

    int unknown_0x14{ 0 };

    int unknown_0x18{ 0 };
};

}; // namespace paramdef
}; // namespace from
