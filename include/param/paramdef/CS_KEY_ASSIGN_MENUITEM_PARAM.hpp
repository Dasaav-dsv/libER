/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdef {
/**
 * @brief This struct was automatically generated from XML paramdefs.
 * 
 */
struct CS_KEY_ASSIGN_MENUITEM_PARAM {
    /**
     * @brief text
     *
     * Key specified ⇒ Item name, 1-line help ID. No key specified ⇒ Category
     * name ID. No text specified ⇒ Not displayed in pad / key settings
     * (operation list display only)
     */
    int textID{ 0 };

    /**
     * @brief Key
     *
     * User input key to be assigned. If not specified, it will be treated as a
     * category display item.
     */
    int key{ -1 };

    /**
     * @brief lift
     *
     * Is it possible to unassign (default: possible)
     */
    bool enableUnassign{ true };

    /**
     * @brief pad
     *
     * Is it possible to change the pad operation assignment (default:
     * possible)?
     */
    bool enablePadConfig{ true };

    /**
     * @brief mouse
     *
     * Is it possible to change the mouse operation assignment (default:
     * possible)?
     */
    bool enableMouseConfig{ true };

    /**
     * @brief group
     *
     * Group for determining duplicate assignments. Cannot be duplicated in the
     * same group
     */
    unsigned char group{ 0 };

    /**
     * @brief text
     *
     * Item name to be displayed in the operation list. 0 :: Do not display in
     * the list
     */
    int mappingTextID{ 0 };

    /**
     * @brief pad
     *
     * Whether to display with key config (pad) (default: display)
     */
    bool viewPad{ true };

    /**
     * @brief Mouse / keyboard
     *
     * Whether to display with key config (mouse / keyboard) (default: display)
     */
    bool viewKeyboardMouse{ true };

    unsigned char padding[6];
};

}; // namespace paramdef
}; // namespace from

static_assert(sizeof(from::paramdef::CS_KEY_ASSIGN_MENUITEM_PARAM) == 24,
    "CS_KEY_ASSIGN_MENUITEM_PARAM paramdef size does not match detected size");
