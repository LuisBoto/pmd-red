#ifndef GUARD_CONSTANTS_MAIN_MENU_H
#define GUARD_CONSTANTS_MAIN_MENU_H

enum MainMenuScreens
{
    MENU_MAIN_SCREEN = 1,
    //
    MENU_NEW_GAME = 3,
    //
    MENU_AWAITING_RESCUE = 6,
    MENU_CONTINUE, // used by Revive Team/Continue
    MENU_DELETE_SAVE_PROMPT,
    MENU_DELETE_SAVE_CONFIRM,
    MENU_ADVENTURE_LOG,
    MENU_FRIEND_RESCUE,
    MENU_TRADE_ITEMS,
    MENU_WONDER_MAIL,
    MENU_DUAL_SLOT,
    MENU_WIRELESS_COMMS,
    MENU_DEBUG,
    MENU_SEND_ITEMS,
    MENU_RECEIVE_ITEMS,
    MENU_COMMUNICATION_1,
    MENU_COMMUNICATION_2,
    // NOTE: 27 - 34 used by Rescue Password Menu
    MENU_DISPLAY_RESCUE_PASSWORD = 33,
    MENU_RESCUE_PASSWORD_ENTRY,
    //
    MENU_DELETE_SAVE = 46,
    MENU_DEBUG_DUNGEON,
    MENU_DEBUG_FIELD,
    MENU_DEBUG_FIELD_MAP,
    MENU_DEBUG_FIELD_SCRIPT,
    MENU_DEBUG_DEBUG_MENU,
    MENU_DEBUG_UNKNOWN_1,
    //
    MENU_NO_SCREEN_CHANGE = 65500 // (s16)-36
};

#endif // GUARD_CONSTANTS_MAIN_MENU_H