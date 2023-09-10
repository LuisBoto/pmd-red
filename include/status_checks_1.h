#ifndef GUARD_STATUS_CHECKS_1_H
#define GUARD_STATUS_CHECKS_1_H

#include "dungeon_entity.h"

bool8 HasNegativeStatus(Entity *pokemon);
bool8 IsSleeping(Entity *pokemon);
bool8 HasLowHealth(Entity *pokemon);
s32 sub_8070828(Entity *pokemon, bool8 displayMessage);

#endif
