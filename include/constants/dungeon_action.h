#ifndef GUARD_CONSTANTS_DUNGEON_ACTION_H
#define GUARD_CONSTANTS_DUNGEON_ACTION_H

enum Action
{
    ACTION_NOTHING = 0x0,
    ACTION_PASS_TURN = 0x1,
    ACTION_WALK = 0x2,
    // Switching between Pokémon in the moves menu.
    ACTION_NEXT = 0x6,
    ACTION_PREVIOUS = 0x7,
    ACTION_PLACE_ITEM = 0x8,
    // Some actions are different between the leader and AI-controlled Pokémon.
    ACTION_PICK_UP_PLAYER = 0x9, // Picking up an item underfoot.
    ACTION_THROW_ITEM_PLAYER = 0xB,
    ACTION_EAT_BERRY_SEED_DRINK = 0xD,
    ACTION_USE_TM = 0x12,
    ACTION_TALK_FIELD = 0x13, // Talking to another Pokémon by facing them and interacting.
    ACTION_USE_MOVE_PLAYER = 0x14,
    ACTION_USE_MOVE_AI = 0x15,
    ACTION_STRUGGLE = 0x17, // Using the Struggle move.
    ACTION_CHECK_MOVES = 0x19,
    ACTION_CHANGE_TACTICS = 0x1A,
    ACTION_CHECK_SUMMARY = 0x1B,
    ACTION_TALK_MENU = 0x1C, // Talking to another Pokémon via the menu.
    ACTION_SET_MOVE = 0x1E, // Registering a move.
    ACTION_EAT_AI = 0x23,
    ACTION_THROW_ITEM_AI = 0x24,
    ACTION_THROW_STRAIGHT_PLAYER = 0x27,
    ACTION_USE_LINK_BOX = 0x2C,
    ACTION_GIVE_UP = 0x2E,
    ACTION_VIEW_IQ = 0x30,
    ACTION_USE_ORB = 0x31,
    ACTION_REGULAR_ATTACK = 0x32,
    ACTION_UNSET_MOVE = 0x33,
    ACTION_GIVE_ITEM = 0x36,
    ACTION_TAKE_ITEM = 0x37,
    ACTION_SECOND_THOUGHTS = 0x39, // Happens with invalid actions, like attempting to eat a non-consumable item.
    ACTION_SET_ITEM = 0x3C,
    ACTION_UNSET_ITEM = 0x3D,
    ACTION_PICK_UP_AI = 0x3F,
    ACTION_THROW_ARC_PLAYER = 0x41, // Throwing Gravelerocks and Geo Pebbles.
};

#endif
