#ifndef GUARD_SAVE_MENU_H
#define GUARD_SAVE_MENU_H

// size: 0x1B4
typedef struct SaveMenuWork
{
    /* 0x0 */ u32 currMenu;
    u32 unk4;
    MenuStruct unk8[4];
    UnkTextStruct2 unk148[4];
    SpriteOAM unk1A8;
    u32 unk1B0; // Sprite count?
} SaveMenuWork;

void CleanSaveMenu(void);
void CreateSaveMenu(s32 currMenu);
s32 UpdateSaveMenu(void);

#endif // GUARD_SAVE_MENU_H