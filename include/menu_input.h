#include "menu.h"

u32 sub_8012A64(struct MenuInputStructSub *r0, u32 r1);
s32 GetKeyPress(struct MenuInputStruct *r0);
s32 sub_8012AE8(void);
void sub_8012BC4(u32 x, u32 y, s32 n, s32 len, u32 color, u32 param_6);
void sub_8012C60(u32 x, u32 y, u32 param_3, u32 color, u32 param_5);
void sub_8012CAC(struct UnkTextStruct2 *param_1, const struct MenuItem *param_2);
void sub_8012D08(struct UnkTextStruct2 *param_1, s32 param_2);
void sub_8012D34(struct UnkTextStruct2 *param_1, s32 param_2);
void sub_8012D60(struct MenuStruct *param_1, const struct MenuItem *menuItems, u32 *colorArray, u16 *param_4, s32 menuAction, s32 index);
void sub_8012E04(struct MenuStruct *param_1, const struct MenuItem *menuItems, u32 *colorArray, u16 *param_4, s32 menuAction, s32 index);
void sub_8012EA4(struct MenuStruct *param_1, bool8 r1);
void sub_8012EBC(struct MenuStruct *param_1);
bool8 sub_8012FD8(struct MenuStruct *param_1);
bool8 sub_80130A8(struct MenuStruct *param_1);
bool8 sub_8013114(struct MenuStruct *param_1, s32 *menuAction);
void sub_801317C(struct MenuInputStructSub *param_1);
void AddMenuCursorSprite(struct MenuInputStruct *param_1);
