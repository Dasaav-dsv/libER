/**
 * @file param.hpp
 * @brief Namespace CS param interface
 *
 * Copyright 2024 libER ELDEN RING API library
 *
 */
#pragma once

#include <detail/optref.hpp>
#include <detail/param_row_container.hpp>
#include <detail/preprocessor.hpp>
#include <fd4/detail/fd4_param.hpp>
#include <fd4/detail/singleton.hpp>
#include <fd4/resource.hpp>
#include <memory/from_allocator.hpp>
#include <memory/from_set.hpp>
#include <memory/from_string.hpp>
#include <memory/from_vector.hpp>
#include <paramdefs/paramdefs.hpp>


#include <algorithm>

#define LIBER_PARAM_COUNT 186

namespace from {
namespace CS {
/**
 * @brief The container for a single param table, consisting of a sequence of
 * IDs and data
 */
template <typename T>
class ParamResCap : public FD4::FD4ResCap {
public:
    using row_data_type = T;
    using row_container_type = liber::param_row_container<row_data_type>;

    FD4_RUNTIME_CLASS(ParamResCap);

    ParamResCap() = default;

    /**
     * @return A sequence of all rows in this param
     */
    row_container_type get_rows() {
        FD4::param_file* info_list = this->underlying->get_param_file();
        return row_container_type(
            reinterpret_cast<row_container_type::base_address_type>(info_list),
            info_list->row_info_arr, info_list->row_count);
    }

    /**
     * @return A row in this param with the given ID, if at least one exists
     */
    liber::optref<row_data_type> get_row_by_id(unsigned long long id) {
        auto rows = get_rows();
        auto result =
            std::lower_bound<row_container_type::iterator, unsigned long long>(
                rows.begin(), rows.end(), id,
                [](auto& a, auto b) { return a.first < b; });
        if (result == rows.end())
            return std::nullopt;
        return result->second;
    }

private:
    long long liber_unknown;
    FD4::FD4ParamResCap* underlying;
};

/**
 * @brief The interface to access and modify param data
 */
class SoloParamRepositoryImp : public FD4::FD4ResCap {
public:
    FD4_SINGLETON_CLASS(SoloParamRepositoryImp);

    virtual ~SoloParamRepositoryImp() LIBER_INTERFACE_ONLY;

    /**
     * @brief Lock until the param repository is loaded or the time runs out.
     *
     * @warning **POTENTIAL DEADLOCK**
     *
     * @warning **DO NOT** call this function from a thread
     * that the game's main thread may wait on.
     *
     * @warning **DO NOT CALL THIS FUNCTION FROM DLLMAIN.**
     *
     * @param timeout time in ms before abandoning the wait
     * @return true wait succeeded
     * @return false wait timed out
     */
    LIBERAPI static bool wait_for_params(int timeout);

    /** @brief Get the EquipParamWeapon param table */
    ParamResCap<paramdefs::EQUIP_PARAM_WEAPON_ST>* get_equip_param_weapon() {
        return get_param_res_cap<paramdefs::EQUIP_PARAM_WEAPON_ST>(0);
    }

    /** @brief Get the EquipParamProtector param table */
    ParamResCap<paramdefs::EQUIP_PARAM_PROTECTOR_ST>*
    get_equip_param_protector() {
        return get_param_res_cap<paramdefs::EQUIP_PARAM_PROTECTOR_ST>(1);
    }

    /** @brief Get the EquipParamAccessory param table */
    ParamResCap<paramdefs::EQUIP_PARAM_ACCESSORY_ST>*
    get_equip_param_accessory() {
        return get_param_res_cap<paramdefs::EQUIP_PARAM_ACCESSORY_ST>(2);
    }

    /** @brief Get the EquipParamGoods param table */
    ParamResCap<paramdefs::EQUIP_PARAM_GOODS_ST>* get_equip_param_goods() {
        return get_param_res_cap<paramdefs::EQUIP_PARAM_GOODS_ST>(3);
    }

    /** @brief Get the ReinforceParamWeapon param table */
    ParamResCap<paramdefs::REINFORCE_PARAM_WEAPON_ST>*
    get_reinforce_param_weapon() {
        return get_param_res_cap<paramdefs::REINFORCE_PARAM_WEAPON_ST>(4);
    }

    /** @brief Get the ReinforceParamProtector param table */
    ParamResCap<paramdefs::REINFORCE_PARAM_PROTECTOR_ST>*
    get_reinforce_param_protector() {
        return get_param_res_cap<paramdefs::REINFORCE_PARAM_PROTECTOR_ST>(5);
    }

    /** @brief Get the NpcParam param table */
    ParamResCap<paramdefs::NPC_PARAM_ST>* get_npc_param() {
        return get_param_res_cap<paramdefs::NPC_PARAM_ST>(6);
    }

    /** @brief Get the AtkParam_Npc param table */
    ParamResCap<paramdefs::ATK_PARAM_ST>* get_atk_param_npc() {
        return get_param_res_cap<paramdefs::ATK_PARAM_ST>(7);
    }

    /** @brief Get the AtkParam_Pc param table */
    ParamResCap<paramdefs::ATK_PARAM_ST>* get_atk_param_pc() {
        return get_param_res_cap<paramdefs::ATK_PARAM_ST>(8);
    }

    /** @brief Get the NpcThinkParam param table */
    ParamResCap<paramdefs::NPC_THINK_PARAM_ST>* get_npc_think_param() {
        return get_param_res_cap<paramdefs::NPC_THINK_PARAM_ST>(9);
    }

    /** @brief Get the Bullet param table */
    ParamResCap<paramdefs::BULLET_PARAM_ST>* get_bullet() {
        return get_param_res_cap<paramdefs::BULLET_PARAM_ST>(10);
    }

    /** @brief Get the BulletCreateLimitParam param table */
    ParamResCap<paramdefs::BULLET_CREATE_LIMIT_PARAM_ST>*
    get_bullet_create_limit_param() {
        return get_param_res_cap<paramdefs::BULLET_CREATE_LIMIT_PARAM_ST>(11);
    }

    /** @brief Get the BehaviorParam param table */
    ParamResCap<paramdefs::BEHAVIOR_PARAM_ST>* get_behavior_param() {
        return get_param_res_cap<paramdefs::BEHAVIOR_PARAM_ST>(12);
    }

    /** @brief Get the BehaviorParam_PC param table */
    ParamResCap<paramdefs::BEHAVIOR_PARAM_ST>* get_behavior_param_pc() {
        return get_param_res_cap<paramdefs::BEHAVIOR_PARAM_ST>(13);
    }

    /** @brief Get the Magic param table */
    ParamResCap<paramdefs::MAGIC_PARAM_ST>* get_magic() {
        return get_param_res_cap<paramdefs::MAGIC_PARAM_ST>(14);
    }

    /** @brief Get the SpEffectParam param table */
    ParamResCap<paramdefs::SP_EFFECT_PARAM_ST>* get_sp_effect_param() {
        return get_param_res_cap<paramdefs::SP_EFFECT_PARAM_ST>(15);
    }

    /** @brief Get the SpEffectVfxParam param table */
    ParamResCap<paramdefs::SP_EFFECT_VFX_PARAM_ST>* get_sp_effect_vfx_param() {
        return get_param_res_cap<paramdefs::SP_EFFECT_VFX_PARAM_ST>(16);
    }

    /** @brief Get the SpEffectSetParam param table */
    ParamResCap<paramdefs::SP_EFFECT_SET_PARAM_ST>* get_sp_effect_set_param() {
        return get_param_res_cap<paramdefs::SP_EFFECT_SET_PARAM_ST>(17);
    }

    /** @brief Get the TalkParam param table */
    ParamResCap<paramdefs::TALK_PARAM_ST>* get_talk_param() {
        return get_param_res_cap<paramdefs::TALK_PARAM_ST>(18);
    }

    /** @brief Get the MenuColorTableParam param table */
    ParamResCap<paramdefs::MENU_PARAM_COLOR_TABLE_ST>*
    get_menu_color_table_param() {
        return get_param_res_cap<paramdefs::MENU_PARAM_COLOR_TABLE_ST>(19);
    }

    /** @brief Get the ItemLotParam_enemy param table */
    ParamResCap<paramdefs::ITEMLOT_PARAM_ST>* get_item_lot_param_enemy() {
        return get_param_res_cap<paramdefs::ITEMLOT_PARAM_ST>(20);
    }

    /** @brief Get the ItemLotParam_map param table */
    ParamResCap<paramdefs::ITEMLOT_PARAM_ST>* get_item_lot_param_map() {
        return get_param_res_cap<paramdefs::ITEMLOT_PARAM_ST>(21);
    }

    /** @brief Get the MoveParam param table */
    ParamResCap<paramdefs::MOVE_PARAM_ST>* get_move_param() {
        return get_param_res_cap<paramdefs::MOVE_PARAM_ST>(22);
    }

    /** @brief Get the CharaInitParam param table */
    ParamResCap<paramdefs::CHARACTER_INIT_PARAM>* get_chara_init_param() {
        return get_param_res_cap<paramdefs::CHARACTER_INIT_PARAM>(23);
    }

    /** @brief Get the EquipMtrlSetParam param table */
    ParamResCap<paramdefs::EQUIP_MTRL_SET_PARAM_ST>*
    get_equip_mtrl_set_param() {
        return get_param_res_cap<paramdefs::EQUIP_MTRL_SET_PARAM_ST>(24);
    }

    /** @brief Get the FaceParam param table */
    ParamResCap<paramdefs::FACE_PARAM_ST>* get_face_param() {
        return get_param_res_cap<paramdefs::FACE_PARAM_ST>(25);
    }

    /** @brief Get the FaceRangeParam param table */
    ParamResCap<paramdefs::FACE_RANGE_PARAM_ST>* get_face_range_param() {
        return get_param_res_cap<paramdefs::FACE_RANGE_PARAM_ST>(26);
    }

    /** @brief Get the ShopLineupParam param table */
    ParamResCap<paramdefs::SHOP_LINEUP_PARAM>* get_shop_lineup_param() {
        return get_param_res_cap<paramdefs::SHOP_LINEUP_PARAM>(27);
    }

    /** @brief Get the ShopLineupParam_Recipe param table */
    ParamResCap<paramdefs::SHOP_LINEUP_PARAM>* get_shop_lineup_param_recipe() {
        return get_param_res_cap<paramdefs::SHOP_LINEUP_PARAM>(28);
    }

    /** @brief Get the GameAreaParam param table */
    ParamResCap<paramdefs::GAME_AREA_PARAM_ST>* get_game_area_param() {
        return get_param_res_cap<paramdefs::GAME_AREA_PARAM_ST>(29);
    }

    /** @brief Get the CalcCorrectGraph param table */
    ParamResCap<paramdefs::CACL_CORRECT_GRAPH_ST>* get_calc_correct_graph() {
        return get_param_res_cap<paramdefs::CACL_CORRECT_GRAPH_ST>(30);
    }

    /** @brief Get the LockCamParam param table */
    ParamResCap<paramdefs::LOCK_CAM_PARAM_ST>* get_lock_cam_param() {
        return get_param_res_cap<paramdefs::LOCK_CAM_PARAM_ST>(31);
    }

    /** @brief Get the ObjActParam param table */
    ParamResCap<paramdefs::OBJ_ACT_PARAM_ST>* get_obj_act_param() {
        return get_param_res_cap<paramdefs::OBJ_ACT_PARAM_ST>(32);
    }

    /** @brief Get the HitMtrlParam param table */
    ParamResCap<paramdefs::HIT_MTRL_PARAM_ST>* get_hit_mtrl_param() {
        return get_param_res_cap<paramdefs::HIT_MTRL_PARAM_ST>(33);
    }

    /** @brief Get the KnockBackParam param table */
    ParamResCap<paramdefs::KNOCKBACK_PARAM_ST>* get_knock_back_param() {
        return get_param_res_cap<paramdefs::KNOCKBACK_PARAM_ST>(34);
    }

    /** @brief Get the DecalParam param table */
    ParamResCap<paramdefs::DECAL_PARAM_ST>* get_decal_param() {
        return get_param_res_cap<paramdefs::DECAL_PARAM_ST>(35);
    }

    /** @brief Get the ActionButtonParam param table */
    ParamResCap<paramdefs::ACTIONBUTTON_PARAM_ST>* get_action_button_param() {
        return get_param_res_cap<paramdefs::ACTIONBUTTON_PARAM_ST>(36);
    }

    /** @brief Get the AiSoundParam param table */
    ParamResCap<paramdefs::AI_SOUND_PARAM_ST>* get_ai_sound_param() {
        return get_param_res_cap<paramdefs::AI_SOUND_PARAM_ST>(37);
    }

    /** @brief Get the PlayRegionParam param table */
    ParamResCap<paramdefs::PLAY_REGION_PARAM_ST>* get_play_region_param() {
        return get_param_res_cap<paramdefs::PLAY_REGION_PARAM_ST>(38);
    }

    /** @brief Get the NetworkAreaParam param table */
    ParamResCap<paramdefs::NETWORK_AREA_PARAM_ST>* get_network_area_param() {
        return get_param_res_cap<paramdefs::NETWORK_AREA_PARAM_ST>(39);
    }

    /** @brief Get the NetworkParam param table */
    ParamResCap<paramdefs::NETWORK_PARAM_ST>* get_network_param() {
        return get_param_res_cap<paramdefs::NETWORK_PARAM_ST>(40);
    }

    /** @brief Get the NetworkMsgParam param table */
    ParamResCap<paramdefs::NETWORK_MSG_PARAM_ST>* get_network_msg_param() {
        return get_param_res_cap<paramdefs::NETWORK_MSG_PARAM_ST>(41);
    }

    /** @brief Get the BudgetParam param table */
    ParamResCap<paramdefs::BUDGET_PARAM_ST>* get_budget_param() {
        return get_param_res_cap<paramdefs::BUDGET_PARAM_ST>(42);
    }

    /** @brief Get the BonfireWarpParam param table */
    ParamResCap<paramdefs::BONFIRE_WARP_PARAM_ST>* get_bonfire_warp_param() {
        return get_param_res_cap<paramdefs::BONFIRE_WARP_PARAM_ST>(43);
    }

    /** @brief Get the BonfireWarpTabParam param table */
    ParamResCap<paramdefs::BONFIRE_WARP_TAB_PARAM_ST>*
    get_bonfire_warp_tab_param() {
        return get_param_res_cap<paramdefs::BONFIRE_WARP_TAB_PARAM_ST>(44);
    }

    /** @brief Get the BonfireWarpSubCategoryParam param table */
    ParamResCap<paramdefs::BONFIRE_WARP_SUB_CATEGORY_PARAM_ST>*
    get_bonfire_warp_sub_category_param() {
        return get_param_res_cap<paramdefs::BONFIRE_WARP_SUB_CATEGORY_PARAM_ST>(
            45);
    }

    /** @brief Get the MenuPropertySpecParam param table */
    ParamResCap<paramdefs::MENUPROPERTY_SPEC>* get_menu_property_spec_param() {
        return get_param_res_cap<paramdefs::MENUPROPERTY_SPEC>(46);
    }

    /** @brief Get the MenuPropertyLayoutParam param table */
    ParamResCap<paramdefs::MENUPROPERTY_LAYOUT>*
    get_menu_property_layout_param() {
        return get_param_res_cap<paramdefs::MENUPROPERTY_LAYOUT>(47);
    }

    /** @brief Get the MenuValueTableParam param table */
    ParamResCap<paramdefs::MENU_VALUE_TABLE_SPEC>*
    get_menu_value_table_param() {
        return get_param_res_cap<paramdefs::MENU_VALUE_TABLE_SPEC>(48);
    }

    /** @brief Get the Ceremony param table */
    ParamResCap<paramdefs::CEREMONY_PARAM_ST>* get_ceremony() {
        return get_param_res_cap<paramdefs::CEREMONY_PARAM_ST>(49);
    }

    /** @brief Get the PhantomParam param table */
    ParamResCap<paramdefs::PHANTOM_PARAM_ST>* get_phantom_param() {
        return get_param_res_cap<paramdefs::PHANTOM_PARAM_ST>(50);
    }

    /** @brief Get the CharMakeMenuTopParam param table */
    ParamResCap<paramdefs::CHARMAKEMENUTOP_PARAM_ST>*
    get_char_make_menu_top_param() {
        return get_param_res_cap<paramdefs::CHARMAKEMENUTOP_PARAM_ST>(51);
    }

    /** @brief Get the CharMakeMenuListItemParam param table */
    ParamResCap<paramdefs::CHARMAKEMENU_LISTITEM_PARAM_ST>*
    get_char_make_menu_list_item_param() {
        return get_param_res_cap<paramdefs::CHARMAKEMENU_LISTITEM_PARAM_ST>(52);
    }

    /** @brief Get the HitEffectSfxConceptParam param table */
    ParamResCap<paramdefs::HIT_EFFECT_SFX_CONCEPT_PARAM_ST>*
    get_hit_effect_sfx_concept_param() {
        return get_param_res_cap<paramdefs::HIT_EFFECT_SFX_CONCEPT_PARAM_ST>(
            53);
    }

    /** @brief Get the HitEffectSfxParam param table */
    ParamResCap<paramdefs::HIT_EFFECT_SFX_PARAM_ST>*
    get_hit_effect_sfx_param() {
        return get_param_res_cap<paramdefs::HIT_EFFECT_SFX_PARAM_ST>(54);
    }

    /** @brief Get the WepAbsorpPosParam param table */
    ParamResCap<paramdefs::WEP_ABSORP_POS_PARAM_ST>*
    get_wep_absorp_pos_param() {
        return get_param_res_cap<paramdefs::WEP_ABSORP_POS_PARAM_ST>(55);
    }

    /** @brief Get the ToughnessParam param table */
    ParamResCap<paramdefs::TOUGHNESS_PARAM_ST>* get_toughness_param() {
        return get_param_res_cap<paramdefs::TOUGHNESS_PARAM_ST>(56);
    }

    /** @brief Get the SeMaterialConvertParam param table */
    ParamResCap<paramdefs::SE_MATERIAL_CONVERT_PARAM_ST>*
    get_se_material_convert_param() {
        return get_param_res_cap<paramdefs::SE_MATERIAL_CONVERT_PARAM_ST>(57);
    }

    /** @brief Get the ThrowDirectionSfxParam param table */
    ParamResCap<paramdefs::THROW_DIRECTION_SFX_PARAM_ST>*
    get_throw_direction_sfx_param() {
        return get_param_res_cap<paramdefs::THROW_DIRECTION_SFX_PARAM_ST>(58);
    }

    /** @brief Get the DirectionCameraParam param table */
    ParamResCap<paramdefs::DIRECTION_CAMERA_PARAM_ST>*
    get_direction_camera_param() {
        return get_param_res_cap<paramdefs::DIRECTION_CAMERA_PARAM_ST>(59);
    }

    /** @brief Get the RoleParam param table */
    ParamResCap<paramdefs::ROLE_PARAM_ST>* get_role_param() {
        return get_param_res_cap<paramdefs::ROLE_PARAM_ST>(60);
    }

    /** @brief Get the WaypointParam param table */
    ParamResCap<paramdefs::WAYPOINT_PARAM_ST>* get_waypoint_param() {
        return get_param_res_cap<paramdefs::WAYPOINT_PARAM_ST>(61);
    }

    /** @brief Get the ThrowParam param table */
    ParamResCap<paramdefs::THROW_PARAM_ST>* get_throw_param() {
        return get_param_res_cap<paramdefs::THROW_PARAM_ST>(62);
    }

    /** @brief Get the GrassTypeParam param table */
    ParamResCap<paramdefs::GRASS_TYPE_PARAM_ST>* get_grass_type_param() {
        return get_param_res_cap<paramdefs::GRASS_TYPE_PARAM_ST>(63);
    }

    /** @brief Get the GrassTypeParam_Lv1 param table */
    ParamResCap<paramdefs::GRASS_TYPE_PARAM_ST>* get_grass_type_param_lv1() {
        return get_param_res_cap<paramdefs::GRASS_TYPE_PARAM_ST>(64);
    }

    /** @brief Get the GrassTypeParam_Lv2 param table */
    ParamResCap<paramdefs::GRASS_TYPE_PARAM_ST>* get_grass_type_param_lv2() {
        return get_param_res_cap<paramdefs::GRASS_TYPE_PARAM_ST>(65);
    }

    /** @brief Get the GrassLodRangeParam param table */
    ParamResCap<paramdefs::GRASS_LOD_RANGE_PARAM_ST>*
    get_grass_lod_range_param() {
        return get_param_res_cap<paramdefs::GRASS_LOD_RANGE_PARAM_ST>(66);
    }

    /** @brief Get the NpcAiActionParam param table */
    ParamResCap<paramdefs::NPC_AI_ACTION_PARAM_ST>* get_npc_ai_action_param() {
        return get_param_res_cap<paramdefs::NPC_AI_ACTION_PARAM_ST>(67);
    }

    /** @brief Get the PartsDrawParam param table */
    ParamResCap<paramdefs::PARTS_DRAW_PARAM_ST>* get_parts_draw_param() {
        return get_param_res_cap<paramdefs::PARTS_DRAW_PARAM_ST>(68);
    }

    /** @brief Get the AssetEnvironmentGeometryParam param table */
    ParamResCap<paramdefs::ASSET_GEOMETORY_PARAM_ST>*
    get_asset_environment_geometry_param() {
        return get_param_res_cap<paramdefs::ASSET_GEOMETORY_PARAM_ST>(69);
    }

    /** @brief Get the AssetModelSfxParam param table */
    ParamResCap<paramdefs::ASSET_MODEL_SFX_PARAM_ST>*
    get_asset_model_sfx_param() {
        return get_param_res_cap<paramdefs::ASSET_MODEL_SFX_PARAM_ST>(70);
    }

    /** @brief Get the AssetMaterialSfxParam param table */
    ParamResCap<paramdefs::ASSET_MATERIAL_SFX_PARAM_ST>*
    get_asset_material_sfx_param() {
        return get_param_res_cap<paramdefs::ASSET_MATERIAL_SFX_PARAM_ST>(71);
    }

    /** @brief Get the AttackElementCorrectParam param table */
    ParamResCap<paramdefs::ATTACK_ELEMENT_CORRECT_PARAM_ST>*
    get_attack_element_correct_param() {
        return get_param_res_cap<paramdefs::ATTACK_ELEMENT_CORRECT_PARAM_ST>(
            72);
    }

    /** @brief Get the FootSfxParam param table */
    ParamResCap<paramdefs::FOOT_SFX_PARAM_ST>* get_foot_sfx_param() {
        return get_param_res_cap<paramdefs::FOOT_SFX_PARAM_ST>(73);
    }

    /** @brief Get the MaterialExParam param table */
    ParamResCap<paramdefs::MATERIAL_EX_PARAM_ST>* get_material_ex_param() {
        return get_param_res_cap<paramdefs::MATERIAL_EX_PARAM_ST>(74);
    }

    /** @brief Get the HPEstusFlaskRecoveryParam param table */
    ParamResCap<paramdefs::ESTUS_FLASK_RECOVERY_PARAM_ST>*
    get_h_pestus_flask_recovery_param() {
        return get_param_res_cap<paramdefs::ESTUS_FLASK_RECOVERY_PARAM_ST>(75);
    }

    /** @brief Get the MPEstusFlaskRecoveryParam param table */
    ParamResCap<paramdefs::ESTUS_FLASK_RECOVERY_PARAM_ST>*
    get_m_pestus_flask_recovery_param() {
        return get_param_res_cap<paramdefs::ESTUS_FLASK_RECOVERY_PARAM_ST>(76);
    }

    /** @brief Get the MultiPlayCorrectionParam param table */
    ParamResCap<paramdefs::MULTI_PLAY_CORRECTION_PARAM_ST>*
    get_multi_play_correction_param() {
        return get_param_res_cap<paramdefs::MULTI_PLAY_CORRECTION_PARAM_ST>(77);
    }

    /** @brief Get the MenuOffscrRendParam param table */
    ParamResCap<paramdefs::MENU_OFFSCR_REND_PARAM_ST>*
    get_menu_offscr_rend_param() {
        return get_param_res_cap<paramdefs::MENU_OFFSCR_REND_PARAM_ST>(78);
    }

    /** @brief Get the ClearCountCorrectParam param table */
    ParamResCap<paramdefs::CLEAR_COUNT_CORRECT_PARAM_ST>*
    get_clear_count_correct_param() {
        return get_param_res_cap<paramdefs::CLEAR_COUNT_CORRECT_PARAM_ST>(79);
    }

    /** @brief Get the MapMimicryEstablishmentParam param table */
    ParamResCap<paramdefs::MAP_MIMICRY_ESTABLISHMENT_PARAM_ST>*
    get_map_mimicry_establishment_param() {
        return get_param_res_cap<paramdefs::MAP_MIMICRY_ESTABLISHMENT_PARAM_ST>(
            80);
    }

    /** @brief Get the WetAspectParam param table */
    ParamResCap<paramdefs::WET_ASPECT_PARAM_ST>* get_wet_aspect_param() {
        return get_param_res_cap<paramdefs::WET_ASPECT_PARAM_ST>(81);
    }

    /** @brief Get the SwordArtsParam param table */
    ParamResCap<paramdefs::SWORD_ARTS_PARAM_ST>* get_sword_arts_param() {
        return get_param_res_cap<paramdefs::SWORD_ARTS_PARAM_ST>(82);
    }

    /** @brief Get the KnowledgeLoadScreenItemParam param table */
    ParamResCap<paramdefs::KNOWLEDGE_LOADSCREEN_ITEM_PARAM_ST>*
    get_knowledge_load_screen_item_param() {
        return get_param_res_cap<paramdefs::KNOWLEDGE_LOADSCREEN_ITEM_PARAM_ST>(
            83);
    }

    /** @brief Get the MultiHPEstusFlaskBonusParam param table */
    ParamResCap<paramdefs::MULTI_ESTUS_FLASK_BONUS_PARAM_ST>*
    get_multi_hp_estus_flask_bonus_param() {
        return get_param_res_cap<paramdefs::MULTI_ESTUS_FLASK_BONUS_PARAM_ST>(
            84);
    }

    /** @brief Get the MultiMPEstusFlaskBonusParam param table */
    ParamResCap<paramdefs::MULTI_ESTUS_FLASK_BONUS_PARAM_ST>*
    get_multi_mp_estus_flask_bonus_param() {
        return get_param_res_cap<paramdefs::MULTI_ESTUS_FLASK_BONUS_PARAM_ST>(
            85);
    }

    /** @brief Get the MultiSoulBonusRateParam param table */
    ParamResCap<paramdefs::MULTI_SOUL_BONUS_RATE_PARAM_ST>*
    get_multi_soul_bonus_rate_param() {
        return get_param_res_cap<paramdefs::MULTI_SOUL_BONUS_RATE_PARAM_ST>(86);
    }

    /** @brief Get the WorldMapPointParam param table */
    ParamResCap<paramdefs::WORLD_MAP_POINT_PARAM_ST>*
    get_world_map_point_param() {
        return get_param_res_cap<paramdefs::WORLD_MAP_POINT_PARAM_ST>(87);
    }

    /** @brief Get the WorldMapPieceParam param table */
    ParamResCap<paramdefs::WORLD_MAP_PIECE_PARAM_ST>*
    get_world_map_piece_param() {
        return get_param_res_cap<paramdefs::WORLD_MAP_PIECE_PARAM_ST>(88);
    }

    /** @brief Get the WorldMapLegacyConvParam param table */
    ParamResCap<paramdefs::WORLD_MAP_LEGACY_CONV_PARAM_ST>*
    get_world_map_legacy_conv_param() {
        return get_param_res_cap<paramdefs::WORLD_MAP_LEGACY_CONV_PARAM_ST>(89);
    }

    /** @brief Get the WorldMapPlaceNameParam param table */
    ParamResCap<paramdefs::WORLD_MAP_PLACE_NAME_PARAM_ST>*
    get_world_map_place_name_param() {
        return get_param_res_cap<paramdefs::WORLD_MAP_PLACE_NAME_PARAM_ST>(90);
    }

    /** @brief Get the ChrModelParam param table */
    ParamResCap<paramdefs::CHR_MODEL_PARAM_ST>* get_chr_model_param() {
        return get_param_res_cap<paramdefs::CHR_MODEL_PARAM_ST>(91);
    }

    /** @brief Get the LoadBalancerParam param table */
    ParamResCap<paramdefs::LOAD_BALANCER_PARAM_ST>* get_load_balancer_param() {
        return get_param_res_cap<paramdefs::LOAD_BALANCER_PARAM_ST>(92);
    }

    /** @brief Get the LoadBalancerDrawDistScaleParam param table */
    ParamResCap<paramdefs::LOAD_BALANCER_DRAW_DIST_SCALE_PARAM_ST>*
    get_load_balancer_draw_dist_scale_param() {
        return get_param_res_cap<
            paramdefs::LOAD_BALANCER_DRAW_DIST_SCALE_PARAM_ST>(93);
    }

    /** @brief Get the LoadBalancerDrawDistScaleParam_ps4 param table */
    ParamResCap<paramdefs::LOAD_BALANCER_DRAW_DIST_SCALE_PARAM_ST>*
    get_load_balancer_draw_dist_scale_param_ps4() {
        return get_param_res_cap<
            paramdefs::LOAD_BALANCER_DRAW_DIST_SCALE_PARAM_ST>(94);
    }

    /** @brief Get the LoadBalancerDrawDistScaleParam_ps5 param table */
    ParamResCap<paramdefs::LOAD_BALANCER_DRAW_DIST_SCALE_PARAM_ST>*
    get_load_balancer_draw_dist_scale_param_ps5() {
        return get_param_res_cap<
            paramdefs::LOAD_BALANCER_DRAW_DIST_SCALE_PARAM_ST>(95);
    }

    /** @brief Get the LoadBalancerDrawDistScaleParam_xb1 param table */
    ParamResCap<paramdefs::LOAD_BALANCER_DRAW_DIST_SCALE_PARAM_ST>*
    get_load_balancer_draw_dist_scale_param_xb1() {
        return get_param_res_cap<
            paramdefs::LOAD_BALANCER_DRAW_DIST_SCALE_PARAM_ST>(96);
    }

    /** @brief Get the LoadBalancerDrawDistScaleParam_xb1x param table */
    ParamResCap<paramdefs::LOAD_BALANCER_DRAW_DIST_SCALE_PARAM_ST>*
    get_load_balancer_draw_dist_scale_param_xb1x() {
        return get_param_res_cap<
            paramdefs::LOAD_BALANCER_DRAW_DIST_SCALE_PARAM_ST>(97);
    }

    /** @brief Get the LoadBalancerDrawDistScaleParam_xss param table */
    ParamResCap<paramdefs::LOAD_BALANCER_DRAW_DIST_SCALE_PARAM_ST>*
    get_load_balancer_draw_dist_scale_param_xss() {
        return get_param_res_cap<
            paramdefs::LOAD_BALANCER_DRAW_DIST_SCALE_PARAM_ST>(98);
    }

    /** @brief Get the LoadBalancerDrawDistScaleParam_xsx param table */
    ParamResCap<paramdefs::LOAD_BALANCER_DRAW_DIST_SCALE_PARAM_ST>*
    get_load_balancer_draw_dist_scale_param_xsx() {
        return get_param_res_cap<
            paramdefs::LOAD_BALANCER_DRAW_DIST_SCALE_PARAM_ST>(99);
    }

    /** @brief Get the LoadBalancerNewDrawDistScaleParam_win64 param table */
    ParamResCap<paramdefs::LOAD_BALANCER_NEW_DRAW_DIST_SCALE_PARAM_ST>*
    get_load_balancer_new_draw_dist_scale_param_win64() {
        return get_param_res_cap<
            paramdefs::LOAD_BALANCER_NEW_DRAW_DIST_SCALE_PARAM_ST>(100);
    }

    /** @brief Get the LoadBalancerNewDrawDistScaleParam_ps4 param table */
    ParamResCap<paramdefs::LOAD_BALANCER_NEW_DRAW_DIST_SCALE_PARAM_ST>*
    get_load_balancer_new_draw_dist_scale_param_ps4() {
        return get_param_res_cap<
            paramdefs::LOAD_BALANCER_NEW_DRAW_DIST_SCALE_PARAM_ST>(101);
    }

    /** @brief Get the LoadBalancerNewDrawDistScaleParam_ps5 param table */
    ParamResCap<paramdefs::LOAD_BALANCER_NEW_DRAW_DIST_SCALE_PARAM_ST>*
    get_load_balancer_new_draw_dist_scale_param_ps5() {
        return get_param_res_cap<
            paramdefs::LOAD_BALANCER_NEW_DRAW_DIST_SCALE_PARAM_ST>(102);
    }

    /** @brief Get the LoadBalancerNewDrawDistScaleParam_xb1 param table */
    ParamResCap<paramdefs::LOAD_BALANCER_NEW_DRAW_DIST_SCALE_PARAM_ST>*
    get_load_balancer_new_draw_dist_scale_param_xb1() {
        return get_param_res_cap<
            paramdefs::LOAD_BALANCER_NEW_DRAW_DIST_SCALE_PARAM_ST>(103);
    }

    /** @brief Get the LoadBalancerNewDrawDistScaleParam_xb1x param table */
    ParamResCap<paramdefs::LOAD_BALANCER_NEW_DRAW_DIST_SCALE_PARAM_ST>*
    get_load_balancer_new_draw_dist_scale_param_xb1x() {
        return get_param_res_cap<
            paramdefs::LOAD_BALANCER_NEW_DRAW_DIST_SCALE_PARAM_ST>(104);
    }

    /** @brief Get the LoadBalancerNewDrawDistScaleParam_xss param table */
    ParamResCap<paramdefs::LOAD_BALANCER_NEW_DRAW_DIST_SCALE_PARAM_ST>*
    get_load_balancer_new_draw_dist_scale_param_xss() {
        return get_param_res_cap<
            paramdefs::LOAD_BALANCER_NEW_DRAW_DIST_SCALE_PARAM_ST>(105);
    }

    /** @brief Get the LoadBalancerNewDrawDistScaleParam_xsx param table */
    ParamResCap<paramdefs::LOAD_BALANCER_NEW_DRAW_DIST_SCALE_PARAM_ST>*
    get_load_balancer_new_draw_dist_scale_param_xsx() {
        return get_param_res_cap<
            paramdefs::LOAD_BALANCER_NEW_DRAW_DIST_SCALE_PARAM_ST>(106);
    }

    /** @brief Get the WwiseValueToStrParam_Switch_AttackType param table */
    ParamResCap<paramdefs::WWISE_VALUE_TO_STR_CONVERT_PARAM_ST>*
    get_wwise_value_to_str_param_switch_attack_type() {
        return get_param_res_cap<
            paramdefs::WWISE_VALUE_TO_STR_CONVERT_PARAM_ST>(107);
    }

    /** @brief Get the WwiseValueToStrParam_Switch_DamageAmount param table */
    ParamResCap<paramdefs::WWISE_VALUE_TO_STR_CONVERT_PARAM_ST>*
    get_wwise_value_to_str_param_switch_damage_amount() {
        return get_param_res_cap<
            paramdefs::WWISE_VALUE_TO_STR_CONVERT_PARAM_ST>(108);
    }

    /** @brief Get the WwiseValueToStrParam_Switch_DeffensiveMaterial param
     * table */
    ParamResCap<paramdefs::WWISE_VALUE_TO_STR_CONVERT_PARAM_ST>*
    get_wwise_value_to_str_param_switch_deffensive_material() {
        return get_param_res_cap<
            paramdefs::WWISE_VALUE_TO_STR_CONVERT_PARAM_ST>(109);
    }

    /** @brief Get the WwiseValueToStrParam_Switch_HitStop param table */
    ParamResCap<paramdefs::WWISE_VALUE_TO_STR_CONVERT_PARAM_ST>*
    get_wwise_value_to_str_param_switch_hit_stop() {
        return get_param_res_cap<
            paramdefs::WWISE_VALUE_TO_STR_CONVERT_PARAM_ST>(110);
    }

    /** @brief Get the WwiseValueToStrParam_Switch_OffensiveMaterial param table
     */
    ParamResCap<paramdefs::WWISE_VALUE_TO_STR_CONVERT_PARAM_ST>*
    get_wwise_value_to_str_param_switch_offensive_material() {
        return get_param_res_cap<
            paramdefs::WWISE_VALUE_TO_STR_CONVERT_PARAM_ST>(111);
    }

    /** @brief Get the WwiseValueToStrParam_Switch_GrassHitType param table */
    ParamResCap<paramdefs::WWISE_VALUE_TO_STR_CONVERT_PARAM_ST>*
    get_wwise_value_to_str_param_switch_grass_hit_type() {
        return get_param_res_cap<
            paramdefs::WWISE_VALUE_TO_STR_CONVERT_PARAM_ST>(112);
    }

    /** @brief Get the WwiseValueToStrParam_Switch_PlayerShoes param table */
    ParamResCap<paramdefs::WWISE_VALUE_TO_STR_CONVERT_PARAM_ST>*
    get_wwise_value_to_str_param_switch_player_shoes() {
        return get_param_res_cap<
            paramdefs::WWISE_VALUE_TO_STR_CONVERT_PARAM_ST>(113);
    }

    /** @brief Get the WwiseValueToStrParam_Switch_PlayerEquipmentTops param
     * table */
    ParamResCap<paramdefs::WWISE_VALUE_TO_STR_CONVERT_PARAM_ST>*
    get_wwise_value_to_str_param_switch_player_equipment_tops() {
        return get_param_res_cap<
            paramdefs::WWISE_VALUE_TO_STR_CONVERT_PARAM_ST>(114);
    }

    /** @brief Get the WwiseValueToStrParam_Switch_PlayerEquipmentBottoms param
     * table */
    ParamResCap<paramdefs::WWISE_VALUE_TO_STR_CONVERT_PARAM_ST>*
    get_wwise_value_to_str_param_switch_player_equipment_bottoms() {
        return get_param_res_cap<
            paramdefs::WWISE_VALUE_TO_STR_CONVERT_PARAM_ST>(115);
    }

    /** @brief Get the WwiseValueToStrParam_Switch_PlayerVoiceType param table
     */
    ParamResCap<paramdefs::WWISE_VALUE_TO_STR_CONVERT_PARAM_ST>*
    get_wwise_value_to_str_param_switch_player_voice_type() {
        return get_param_res_cap<
            paramdefs::WWISE_VALUE_TO_STR_CONVERT_PARAM_ST>(116);
    }

    /** @brief Get the WwiseValueToStrParam_Switch_AttackStrength param table */
    ParamResCap<paramdefs::WWISE_VALUE_TO_STR_CONVERT_PARAM_ST>*
    get_wwise_value_to_str_param_switch_attack_strength() {
        return get_param_res_cap<
            paramdefs::WWISE_VALUE_TO_STR_CONVERT_PARAM_ST>(117);
    }

    /** @brief Get the WwiseValueToStrParam_EnvPlaceType param table */
    ParamResCap<paramdefs::WWISE_VALUE_TO_STR_CONVERT_PARAM_ST>*
    get_wwise_value_to_str_param_env_place_type() {
        return get_param_res_cap<
            paramdefs::WWISE_VALUE_TO_STR_CONVERT_PARAM_ST>(118);
    }

    /** @brief Get the WeatherParam param table */
    ParamResCap<paramdefs::WEATHER_PARAM_ST>* get_weather_param() {
        return get_param_res_cap<paramdefs::WEATHER_PARAM_ST>(119);
    }

    /** @brief Get the WeatherLotParam param table */
    ParamResCap<paramdefs::WEATHER_LOT_PARAM_ST>* get_weather_lot_param() {
        return get_param_res_cap<paramdefs::WEATHER_LOT_PARAM_ST>(120);
    }

    /** @brief Get the WeatherAssetCreateParam param table */
    ParamResCap<paramdefs::WEATHER_ASSET_CREATE_PARAM_ST>*
    get_weather_asset_create_param() {
        return get_param_res_cap<paramdefs::WEATHER_ASSET_CREATE_PARAM_ST>(121);
    }

    /** @brief Get the WeatherAssetReplaceParam param table */
    ParamResCap<paramdefs::WEATHER_ASSET_REPLACE_PARAM_ST>*
    get_weather_asset_replace_param() {
        return get_param_res_cap<paramdefs::WEATHER_ASSET_REPLACE_PARAM_ST>(
            122);
    }

    /** @brief Get the SpeedtreeParam param table */
    ParamResCap<paramdefs::SPEEDTREE_MODEL_PARAM_ST>* get_speedtree_param() {
        return get_param_res_cap<paramdefs::SPEEDTREE_MODEL_PARAM_ST>(123);
    }

    /** @brief Get the RideParam param table */
    ParamResCap<paramdefs::RIDE_PARAM_ST>* get_ride_param() {
        return get_param_res_cap<paramdefs::RIDE_PARAM_ST>(124);
    }

    /** @brief Get the SeActivationRangeParam param table */
    ParamResCap<paramdefs::SE_ACTIVATION_RANGE_PARAM_ST>*
    get_se_activation_range_param() {
        return get_param_res_cap<paramdefs::SE_ACTIVATION_RANGE_PARAM_ST>(125);
    }

    /** @brief Get the RollingObjLotParam param table */
    ParamResCap<paramdefs::ROLLING_OBJ_LOT_PARAM_ST>*
    get_rolling_obj_lot_param() {
        return get_param_res_cap<paramdefs::ROLLING_OBJ_LOT_PARAM_ST>(126);
    }

    /** @brief Get the NpcAiBehaviorProbability param table */
    ParamResCap<paramdefs::NPC_AI_BEHAVIOR_PROBABILITY_PARAM_ST>*
    get_npc_ai_behavior_probability() {
        return get_param_res_cap<
            paramdefs::NPC_AI_BEHAVIOR_PROBABILITY_PARAM_ST>(127);
    }

    /** @brief Get the BuddyParam param table */
    ParamResCap<paramdefs::BUDDY_PARAM_ST>* get_buddy_param() {
        return get_param_res_cap<paramdefs::BUDDY_PARAM_ST>(128);
    }

    /** @brief Get the GparamRefSettings param table */
    ParamResCap<paramdefs::GPARAM_REF_SETTINGS_PARAM_ST>*
    get_gparam_ref_settings() {
        return get_param_res_cap<paramdefs::GPARAM_REF_SETTINGS_PARAM_ST>(129);
    }

    /** @brief Get the RandomAppearParam param table */
    ParamResCap<paramdefs::RANDOM_APPEAR_PARAM_ST>* get_random_appear_param() {
        return get_param_res_cap<paramdefs::RANDOM_APPEAR_PARAM_ST>(130);
    }

    /** @brief Get the MapGridCreateHeightLimitInfoParam param table */
    ParamResCap<paramdefs::MAP_GRID_CREATE_HEIGHT_LIMIT_INFO_PARAM_ST>*
    get_map_grid_create_height_limit_info_param() {
        return get_param_res_cap<
            paramdefs::MAP_GRID_CREATE_HEIGHT_LIMIT_INFO_PARAM_ST>(131);
    }

    /** @brief Get the EnvObjLotParam param table */
    ParamResCap<paramdefs::ENV_OBJ_LOT_PARAM_ST>* get_env_obj_lot_param() {
        return get_param_res_cap<paramdefs::ENV_OBJ_LOT_PARAM_ST>(132);
    }

    /** @brief Get the MapDefaultInfoParam param table */
    ParamResCap<paramdefs::MAP_DEFAULT_INFO_PARAM_ST>*
    get_map_default_info_param() {
        return get_param_res_cap<paramdefs::MAP_DEFAULT_INFO_PARAM_ST>(133);
    }

    /** @brief Get the BuddyStoneParam param table */
    ParamResCap<paramdefs::BUDDY_STONE_PARAM_ST>* get_buddy_stone_param() {
        return get_param_res_cap<paramdefs::BUDDY_STONE_PARAM_ST>(134);
    }

    /** @brief Get the LegacyDistantViewPartsReplaceParam param table */
    ParamResCap<paramdefs::LEGACY_DISTANT_VIEW_PARTS_REPLACE_PARAM>*
    get_legacy_distant_view_parts_replace_param() {
        return get_param_res_cap<
            paramdefs::LEGACY_DISTANT_VIEW_PARTS_REPLACE_PARAM>(135);
    }

    /** @brief Get the SoundCommonIngameParam param table */
    ParamResCap<paramdefs::SOUND_COMMON_INGAME_PARAM_ST>*
    get_sound_common_ingame_param() {
        return get_param_res_cap<paramdefs::SOUND_COMMON_INGAME_PARAM_ST>(136);
    }

    /** @brief Get the SoundAutoEnvSoundGroupParam param table */
    ParamResCap<paramdefs::SOUND_AUTO_ENV_SOUND_GROUP_PARAM_ST>*
    get_sound_auto_env_sound_group_param() {
        return get_param_res_cap<
            paramdefs::SOUND_AUTO_ENV_SOUND_GROUP_PARAM_ST>(137);
    }

    /** @brief Get the SoundAutoReverbEvaluationDistParam param table */
    ParamResCap<paramdefs::SOUND_AUTO_REVERB_EVALUATION_DIST_PARAM_ST>*
    get_sound_auto_reverb_evaluation_dist_param() {
        return get_param_res_cap<
            paramdefs::SOUND_AUTO_REVERB_EVALUATION_DIST_PARAM_ST>(138);
    }

    /** @brief Get the SoundAutoReverbSelectParam param table */
    ParamResCap<paramdefs::SOUND_AUTO_REVERB_SELECT_PARAM_ST>*
    get_sound_auto_reverb_select_param() {
        return get_param_res_cap<paramdefs::SOUND_AUTO_REVERB_SELECT_PARAM_ST>(
            139);
    }

    /** @brief Get the EnemyCommonParam param table */
    ParamResCap<paramdefs::ENEMY_COMMON_PARAM_ST>* get_enemy_common_param() {
        return get_param_res_cap<paramdefs::ENEMY_COMMON_PARAM_ST>(140);
    }

    /** @brief Get the GameSystemCommonParam param table */
    ParamResCap<paramdefs::GAME_SYSTEM_COMMON_PARAM_ST>*
    get_game_system_common_param() {
        return get_param_res_cap<paramdefs::GAME_SYSTEM_COMMON_PARAM_ST>(141);
    }

    /** @brief Get the GraphicsCommonParam param table */
    ParamResCap<paramdefs::GRAPHICS_COMMON_PARAM_ST>*
    get_graphics_common_param() {
        return get_param_res_cap<paramdefs::GRAPHICS_COMMON_PARAM_ST>(142);
    }

    /** @brief Get the MenuCommonParam param table */
    ParamResCap<paramdefs::MENU_COMMON_PARAM_ST>* get_menu_common_param() {
        return get_param_res_cap<paramdefs::MENU_COMMON_PARAM_ST>(143);
    }

    /** @brief Get the PlayerCommonParam param table */
    ParamResCap<paramdefs::PLAYER_COMMON_PARAM_ST>* get_player_common_param() {
        return get_param_res_cap<paramdefs::PLAYER_COMMON_PARAM_ST>(144);
    }

    /** @brief Get the CutsceneGparamWeatherParam param table */
    ParamResCap<paramdefs::CUTSCENE_GPARAM_WEATHER_PARAM_ST>*
    get_cutscene_gparam_weather_param() {
        return get_param_res_cap<paramdefs::CUTSCENE_GPARAM_WEATHER_PARAM_ST>(
            145);
    }

    /** @brief Get the CutsceneGparamTimeParam param table */
    ParamResCap<paramdefs::CUTSCENE_GPARAM_TIME_PARAM_ST>*
    get_cutscene_gparam_time_param() {
        return get_param_res_cap<paramdefs::CUTSCENE_GPARAM_TIME_PARAM_ST>(146);
    }

    /** @brief Get the CutsceneTimezoneConvertParam param table */
    ParamResCap<paramdefs::CUTSCENE_TIMEZONE_CONVERT_PARAM_ST>*
    get_cutscene_timezone_convert_param() {
        return get_param_res_cap<paramdefs::CUTSCENE_TIMEZONE_CONVERT_PARAM_ST>(
            147);
    }

    /** @brief Get the CutsceneWeatherOverrideGparamConvertParam param table */
    ParamResCap<
        paramdefs::CUTSCENE_WEATHER_OVERRIDE_GPARAM_ID_CONVERT_PARAM_ST>*
    get_cutscene_weather_override_gparam_convert_param() {
        return get_param_res_cap<
            paramdefs::CUTSCENE_WEATHER_OVERRIDE_GPARAM_ID_CONVERT_PARAM_ST>(
            148);
    }

    /** @brief Get the SoundCutsceneParam param table */
    ParamResCap<paramdefs::SOUND_CUTSCENE_PARAM_ST>*
    get_sound_cutscene_param() {
        return get_param_res_cap<paramdefs::SOUND_CUTSCENE_PARAM_ST>(149);
    }

    /** @brief Get the ChrActivateConditionParam param table */
    ParamResCap<paramdefs::CHR_ACTIVATE_CONDITION_PARAM_ST>*
    get_chr_activate_condition_param() {
        return get_param_res_cap<paramdefs::CHR_ACTIVATE_CONDITION_PARAM_ST>(
            150);
    }

    /** @brief Get the CutsceneMapIdParam param table */
    ParamResCap<paramdefs::CUTSCENE_MAP_ID_PARAM_ST>*
    get_cutscene_map_id_param() {
        return get_param_res_cap<paramdefs::CUTSCENE_MAP_ID_PARAM_ST>(151);
    }

    /** @brief Get the CutSceneTextureLoadParam param table */
    ParamResCap<paramdefs::CUTSCENE_TEXTURE_LOAD_PARAM_ST>*
    get_cut_scene_texture_load_param() {
        return get_param_res_cap<paramdefs::CUTSCENE_TEXTURE_LOAD_PARAM_ST>(
            152);
    }

    /** @brief Get the GestureParam param table */
    ParamResCap<paramdefs::GESTURE_PARAM_ST>* get_gesture_param() {
        return get_param_res_cap<paramdefs::GESTURE_PARAM_ST>(153);
    }

    /** @brief Get the EquipParamGem param table */
    ParamResCap<paramdefs::EQUIP_PARAM_GEM_ST>* get_equip_param_gem() {
        return get_param_res_cap<paramdefs::EQUIP_PARAM_GEM_ST>(154);
    }

    /** @brief Get the EquipParamCustomWeapon param table */
    ParamResCap<paramdefs::EQUIP_PARAM_CUSTOM_WEAPON_ST>*
    get_equip_param_custom_weapon() {
        return get_param_res_cap<paramdefs::EQUIP_PARAM_CUSTOM_WEAPON_ST>(155);
    }

    /** @brief Get the GraphicsConfig param table */
    ParamResCap<paramdefs::CS_GRAPHICS_CONFIG_PARAM_ST>* get_graphics_config() {
        return get_param_res_cap<paramdefs::CS_GRAPHICS_CONFIG_PARAM_ST>(156);
    }

    /** @brief Get the SoundChrPhysicsSeParam param table */
    ParamResCap<paramdefs::SOUND_CHR_PHYSICS_SE_PARAM_ST>*
    get_sound_chr_physics_se_param() {
        return get_param_res_cap<paramdefs::SOUND_CHR_PHYSICS_SE_PARAM_ST>(157);
    }

    /** @brief Get the FeTextEffectParam param table */
    ParamResCap<paramdefs::FE_TEXT_EFFECT_PARAM_ST>*
    get_fe_text_effect_param() {
        return get_param_res_cap<paramdefs::FE_TEXT_EFFECT_PARAM_ST>(158);
    }

    /** @brief Get the CoolTimeParam param table */
    ParamResCap<paramdefs::COOL_TIME_PARAM_ST>* get_cool_time_param() {
        return get_param_res_cap<paramdefs::COOL_TIME_PARAM_ST>(159);
    }

    /** @brief Get the WhiteSignCoolTimeParam param table */
    ParamResCap<paramdefs::WHITE_SIGN_COOL_TIME_PARAM_ST>*
    get_white_sign_cool_time_param() {
        return get_param_res_cap<paramdefs::WHITE_SIGN_COOL_TIME_PARAM_ST>(160);
    }

    /** @brief Get the MapPieceTexParam param table */
    ParamResCap<paramdefs::MAP_PIECE_TEX_PARAM_ST>* get_map_piece_tex_param() {
        return get_param_res_cap<paramdefs::MAP_PIECE_TEX_PARAM_ST>(161);
    }

    /** @brief Get the MapNameTexParam param table */
    ParamResCap<paramdefs::MAP_NAME_TEX_PARAM_ST>* get_map_name_tex_param() {
        return get_param_res_cap<paramdefs::MAP_NAME_TEX_PARAM_ST>(162);
    }

    /** @brief Get the WeatherLotTexParam param table */
    ParamResCap<paramdefs::WEATHER_LOT_TEX_PARAM_ST>*
    get_weather_lot_tex_param() {
        return get_param_res_cap<paramdefs::WEATHER_LOT_TEX_PARAM_ST>(163);
    }

    /** @brief Get the KeyAssignParam_TypeA param table */
    ParamResCap<paramdefs::KEY_ASSIGN_PARAM_ST>* get_key_assign_param_type_a() {
        return get_param_res_cap<paramdefs::KEY_ASSIGN_PARAM_ST>(164);
    }

    /** @brief Get the KeyAssignParam_TypeB param table */
    ParamResCap<paramdefs::KEY_ASSIGN_PARAM_ST>* get_key_assign_param_type_b() {
        return get_param_res_cap<paramdefs::KEY_ASSIGN_PARAM_ST>(165);
    }

    /** @brief Get the KeyAssignParam_TypeC param table */
    ParamResCap<paramdefs::KEY_ASSIGN_PARAM_ST>* get_key_assign_param_type_c() {
        return get_param_res_cap<paramdefs::KEY_ASSIGN_PARAM_ST>(166);
    }

    /** @brief Get the MapGdRegionInfoParam param table */
    ParamResCap<paramdefs::MAP_GD_REGION_ID_PARAM_ST>*
    get_map_gd_region_info_param() {
        return get_param_res_cap<paramdefs::MAP_GD_REGION_ID_PARAM_ST>(167);
    }

    /** @brief Get the MapGdRegionDrawParam param table */
    ParamResCap<paramdefs::MAP_GD_REGION_DRAW_PARAM>*
    get_map_gd_region_draw_param() {
        return get_param_res_cap<paramdefs::MAP_GD_REGION_DRAW_PARAM>(168);
    }

    /** @brief Get the KeyAssignMenuItemParam param table */
    ParamResCap<paramdefs::CS_KEY_ASSIGN_MENUITEM_PARAM>*
    get_key_assign_menu_item_param() {
        return get_param_res_cap<paramdefs::CS_KEY_ASSIGN_MENUITEM_PARAM>(169);
    }

    /** @brief Get the SoundAssetSoundObjEnableDistParam param table */
    ParamResCap<paramdefs::SOUND_ASSET_SOUND_OBJ_ENABLE_DIST_PARAM_ST>*
    get_sound_asset_sound_obj_enable_dist_param() {
        return get_param_res_cap<
            paramdefs::SOUND_ASSET_SOUND_OBJ_ENABLE_DIST_PARAM_ST>(170);
    }

    /** @brief Get the SignPuddleParam param table */
    ParamResCap<paramdefs::SIGN_PUDDLE_PARAM_ST>* get_sign_puddle_param() {
        return get_param_res_cap<paramdefs::SIGN_PUDDLE_PARAM_ST>(171);
    }

    /** @brief Get the AutoCreateEnvSoundParam param table */
    ParamResCap<paramdefs::AUTO_CREATE_ENV_SOUND_PARAM_ST>*
    get_auto_create_env_sound_param() {
        return get_param_res_cap<paramdefs::AUTO_CREATE_ENV_SOUND_PARAM_ST>(
            172);
    }

    /** @brief Get the WwiseValueToStrParam_BgmBossChrIdConv param table */
    ParamResCap<paramdefs::WWISE_VALUE_TO_STR_CONVERT_PARAM_ST>*
    get_wwise_value_to_str_param_bgm_boss_chr_id_conv() {
        return get_param_res_cap<
            paramdefs::WWISE_VALUE_TO_STR_CONVERT_PARAM_ST>(173);
    }

    /** @brief Get the ResistCorrectParam param table */
    ParamResCap<paramdefs::RESIST_CORRECT_PARAM_ST>*
    get_resist_correct_param() {
        return get_param_res_cap<paramdefs::RESIST_CORRECT_PARAM_ST>(174);
    }

    /** @brief Get the PostureControlParam_WepRight param table */
    ParamResCap<paramdefs::POSTURE_CONTROL_PARAM_WEP_RIGHT_ST>*
    get_posture_control_param_wep_right() {
        return get_param_res_cap<paramdefs::POSTURE_CONTROL_PARAM_WEP_RIGHT_ST>(
            175);
    }

    /** @brief Get the PostureControlParam_WepLeft param table */
    ParamResCap<paramdefs::POSTURE_CONTROL_PARAM_WEP_LEFT_ST>*
    get_posture_control_param_wep_left() {
        return get_param_res_cap<paramdefs::POSTURE_CONTROL_PARAM_WEP_LEFT_ST>(
            176);
    }

    /** @brief Get the PostureControlParam_Gender param table */
    ParamResCap<paramdefs::POSTURE_CONTROL_PARAM_GENDER_ST>*
    get_posture_control_param_gender() {
        return get_param_res_cap<paramdefs::POSTURE_CONTROL_PARAM_GENDER_ST>(
            177);
    }

    /** @brief Get the PostureControlParam_Pro param table */
    ParamResCap<paramdefs::POSTURE_CONTROL_PARAM_PRO_ST>*
    get_posture_control_param_pro() {
        return get_param_res_cap<paramdefs::POSTURE_CONTROL_PARAM_PRO_ST>(178);
    }

    /** @brief Get the RuntimeBoneControlParam param table */
    ParamResCap<paramdefs::RUNTIME_BONE_CONTROL_PARAM_ST>*
    get_runtime_bone_control_param() {
        return get_param_res_cap<paramdefs::RUNTIME_BONE_CONTROL_PARAM_ST>(179);
    }

    /** @brief Get the TutorialParam param table */
    ParamResCap<paramdefs::TUTORIAL_PARAM_ST>* get_tutorial_param() {
        return get_param_res_cap<paramdefs::TUTORIAL_PARAM_ST>(180);
    }

    /** @brief Get the BaseChrSelectMenuParam param table */
    ParamResCap<paramdefs::BASECHR_SELECT_MENU_PARAM_ST>*
    get_base_chr_select_menu_param() {
        return get_param_res_cap<paramdefs::BASECHR_SELECT_MENU_PARAM_ST>(181);
    }

    /** @brief Get the MimicryEstablishmentTexParam param table */
    ParamResCap<paramdefs::MIMICRY_ESTABLISHMENT_TEX_PARAM_ST>*
    get_mimicry_establishment_tex_param() {
        return get_param_res_cap<paramdefs::MIMICRY_ESTABLISHMENT_TEX_PARAM_ST>(
            182);
    }

    /** @brief Get the SfxBlockResShareParam param table */
    ParamResCap<paramdefs::SFX_BLOCK_RES_SHARE_PARAM>*
    get_sfx_block_res_share_param() {
        return get_param_res_cap<paramdefs::SFX_BLOCK_RES_SHARE_PARAM>(183);
    }

    /** @brief Get the FinalDamageRateParam param table */
    ParamResCap<paramdefs::FINAL_DAMAGE_RATE_PARAM_ST>*
    get_final_damage_rate_param() {
        return get_param_res_cap<paramdefs::FINAL_DAMAGE_RATE_PARAM_ST>(184);
    }

    /** @brief Get the HitEffectSeParam param table */
    ParamResCap<paramdefs::HIT_EFFECT_SE_PARAM_ST>* get_hit_effect_se_param() {
        return get_param_res_cap<paramdefs::HIT_EFFECT_SE_PARAM_ST>(185);
    }

private:
    /** @brief Get a param table by index, without type safety */
    template <typename T>
    ParamResCap<T>* get_param_res_cap(size_t pos) {
        return reinterpret_cast<ParamResCap<T>*>(
            get_param_res_cap_address(pos));
    }

    void* get_param_res_cap_address(size_t pos);

    void* liber_unknown;
    struct {
        void* liber_unknown;
        int res_cap_count;
        ParamResCap* res_cap[7];
    } param_entries[LIBER_PARAM_COUNT];
    struct CSWepReinforceTree {
        virtual ~CSWepReinforceTree() = default;
        from::allocator<void*> allocator;
        void* liber_unknown;
    } wep_reinforce_tree;
    from::vector<std::pair<int, int>> liber_unknown;
    from::vector<std::pair<int, int>> liber_unknown;
    from::set<int> liber_unknown;
    from::set<int> liber_unknown;
};

LIBER_ASSERTS_BEGIN(SoloParamRepositoryImp);
LIBER_ASSERT_SIZE(0x3558);
LIBER_ASSERTS_END;

}; // namespace CS
}; // namespace from
