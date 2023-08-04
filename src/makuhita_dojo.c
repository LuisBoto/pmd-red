#include "global.h"
#include "constants/colors.h"
#include "constants/input.h"
#include "code_800D090.h"
#include "dungeon.h"
#include "makuhita_dojo.h"
#include "memory.h"
#include "menu_input.h"
#include "pokemon.h"

extern u8 gUnknown_202E5D8[];
extern u8 gUnknown_202E1C8[];
extern struct unkStruct_203B31C *gUnknown_203B31C;
extern struct unkStruct_203B318 *gUnknown_203B318;
extern u8 gAvailablePokemonNames[];
extern u8 gPlayerName[];

extern const u8 *gMakuhitaDialogue[2][10];
extern u8 *gUnknown_80D4934[];
extern u8 *gUnknown_80D4970[];

ALIGNED(4) const u8 gUnknown_80E0744[] = "Dungeons";
ALIGNED(4) const u8 gUnknown_80E0750[] =  {0x83, 0xC2};
ALIGNED(4) const u8 gUnknown_80E0754[] = {0x83, 0xC0};
static const u8 makuhita_dojo_fill1[] = "pksdir0";

const struct UnkTextStruct2 gUnknown_80E0760 = {
    0x00, 0x00, 0x00, 0x00,
    0x03,
    0x00, 0x00,
    0x00, 0x00,
    0x00, 0x00,
    NULL
};

ALIGNED(4) const u8 gMakuhitaDojoBonslyDoll[] = _(
    "{CENTER_ALIGN}{COLOR_1 YELLOW_5}$n0{END_COLOR_TEXT_1} received the {COLOR_1 GREEN_2}Bonsly Doll{END_COLOR_TEXT_1}!\n"
    "{CENTER_ALIGN}It has been placed outside your\n"
    "{CENTER_ALIGN}rescue team base.");

const u8 gMakuhitaDojoGoTrain[] = "Go Train";

static const u8 makuhita_dojo_fill2[] = "pksdir0";

const struct UnkTextStruct2 gUnknown_80E07EC = {
    0x00, 0x00, 0x00, 0x00,
    0x03,
    0x00, 0x00,
    0x00, 0x00,
    0x00, 0x00,
    NULL
};
const struct UnkTextStruct2 gUnknown_80E0804 = {
    0x00, 0x00, 0x00, 0x00,
    0x06,
    0x02, 0x02,
    0x0E, 0x0E,
    0x0E, 0x00,
    NULL
};

const u8 gMakuhitaDojoHeader[] = "Courses";
ALIGNED(4) const u8 gUnknown_80E0824[] = _("{STAR_BULLET}");
ALIGNED(4) const u8 gMakuhitaCoursePlaceholder[] = _("{COLOR_2}%c%s{END_COLOR_TEXT_2}");
static const u8 makuhita_dojo_fill3[] = "pksdir0";

extern void sub_80073B8(u32);
extern void sub_80073E0(u32);
extern void sub_8008C54(u32);
extern u32 sub_80095E4(s16, u32);
extern void sub_80141B4(const u8 *, u32, struct OpenedFile **, u32);
extern void sub_8014248(const u8 *, u32, u32, const struct MenuItem *, void *, u32, u32, struct OpenedFile **, u32);
extern s32 sub_80144A4(s32 *);
extern u32 sub_801B60C(u32, u8, u8);
extern u32 sub_801B6AC(void);
extern void sub_801B72C(void);
extern void sub_803053C(void);
extern bool8 sub_8097504(s16);
extern s16 sub_80A2668(u32 r0);
extern s16 sub_80A26CC(s16 r0);
extern u8 sub_80A2740(s32 r0);

extern struct PokemonStruct *GetPlayerPokemonStruct(void);
extern bool8 IsMazeCompleted(s32);
extern void PlayMenuSoundEffect(u32);
extern void PlaySound(u16);
extern void PrintColoredPokeNameToBuffer(u8 *, struct PokemonStruct *, s32);
extern void PrintYellowDungeonNametoBuffer(u8 *, struct DungeonLocation *);

void MakuhitaDojo_DrawCourseList(void);
void MakuhitaDojo_DrawMainMenu(void);
void MakuhitaDojo_GoToFallbackState(void);
bool8 MakuhitaDojo_ReturnFalse(void);
void MakuhitaDojo_SetState(s32);
void MakuhitaDojo_UpdateDialogue(void);

void sub_802FF1C(void);
void sub_8030208(void);
void sub_8030258(void);
void sub_80302A8(void);
void sub_80304C8(void);
s32 sub_8030668(void);

u32 MakuhitaDojo_New(u32 param_1)
{
    char *monName;
    struct OpenedFile *faceFile;
    u32 initialState;

    ResetUnusedInputStruct();
    sub_800641C(NULL, 1, 1);
    gUnknown_203B318 = MemoryAlloc(sizeof(struct unkStruct_203B318), 8);
    gUnknown_203B318->unk10 = -1;
    gUnknown_203B318->unk0 = param_1;

    switch (param_1) {
        case 0:
            initialState = 0;
            gUnknown_203B318->unk4 = 0;
            break;
        case 1:
            initialState = 7;
            gUnknown_203B318->unk4 = 0;
            break;
        case 2:
            initialState = 6;
            gUnknown_203B318->unk4 = 0;
            break;
        case 3:
            initialState = 8;
            gUnknown_203B318->unk4 = 0;
            break;
        case 4:
            initialState = 0;
            gUnknown_203B318->unk4 = 1;
            break;
        case 5:
            initialState = 7;
            gUnknown_203B318->unk4 = 1;
            break;
        case 6:
            initialState = 6;
            gUnknown_203B318->unk4 = 1;
            break;
        case 7:
        default:
            initialState = 8;
            gUnknown_203B318->unk4 = 1;
            break;
    }

    if (gUnknown_203B318->unk4 == 1)
        gUnknown_203B318->unk68 = NULL;
    else
        gUnknown_203B318->unk68 = &gUnknown_203B318->faceFile;

    CopyYellowMonsterNametoBuffer(gUnknown_202E5D8, MONSTER_MAKUHITA);
    CopyYellowMonsterNametoBuffer(gUnknown_202E1C8, MONSTER_MAKUHITA);
    monName = GetMonSpecies(MONSTER_MAKUHITA);
    strcpy(gUnknown_202E1C8 - 0x50, monName);

    faceFile = GetDialogueSpriteDataPtr(MONSTER_MAKUHITA);
    gUnknown_203B318->faceFile = faceFile;
    gUnknown_203B318->faceData = faceFile->data;
    gUnknown_203B318->unk64 = 0;
    gUnknown_203B318->unk65 = 0;
    gUnknown_203B318->unk66 = 0;
    gUnknown_203B318->unk60 = 2;
    gUnknown_203B318->unk62 = 8;
    MakuhitaDojo_SetState(initialState);
    return 1;
}

u32 sub_802FE58(void)
{
    switch (gUnknown_203B318->state) {
        case 0:
        case 1:
            sub_8030208();
            break;
        case 4:
            sub_8030258();
            break;
        case 11:
            sub_80302A8();
            break;
        case 13:
            return 3;
        default:
            MakuhitaDojo_GoToFallbackState();
            break;
    }
    return 0;
}

s16 sub_802FED0(void)
{
    return gUnknown_203B318->unk10;
}

void MakuhitaDojo_Delete(void)
{
    if (gUnknown_203B318 != NULL) {
        CloseFile(gUnknown_203B318->faceFile);
        MemoryFree(gUnknown_203B318);
        gUnknown_203B318 = NULL;
    }
}

void MakuhitaDojo_SetState(s32 newState)
{
    gUnknown_203B318->state = newState;
    sub_802FF1C();
    MakuhitaDojo_UpdateDialogue();
}

void sub_802FF1C(void)
{
    s32 index;

    sub_8006518(gUnknown_203B318->unk6C);

    switch (gUnknown_203B318->state) {
        case 0:
        case 4:
        case 13:
            for(index = 0; index < 4; index++)
                gUnknown_203B318->unk6C[index] = gUnknown_80E0760;
            break;
        default:
            break;
    }

    ResetUnusedInputStruct();
    sub_800641C(gUnknown_203B318->unk6C, 1, 1);
}

void MakuhitaDojo_UpdateDialogue(void)
{
    struct DungeonLocation dLoc;

    switch (gUnknown_203B318->state) {
        case 0:
            MakuhitaDojo_DrawMainMenu();
            sub_8014248(gMakuhitaDialogue[gUnknown_203B318->unk4][0], 0, gUnknown_203B318->menuAction, gUnknown_203B318->unk18, NULL, 4, 0, gUnknown_203B318->unk68, 12);
            break;
        case 1:
            sub_8014248(gMakuhitaDialogue[gUnknown_203B318->unk4][1], 0, gUnknown_203B318->menuAction, gUnknown_203B318->unk18, NULL, 4, 0, gUnknown_203B318->unk68, 12);
            break;
        case 2:
            gUnknown_203B318->fallbackState = 13;
            sub_80141B4(gMakuhitaDialogue[gUnknown_203B318->unk4][2], 0, gUnknown_203B318->unk68, 0x10D);
            break;
        case 3:
            gUnknown_203B318->fallbackState = 4;
            sub_80141B4(gMakuhitaDialogue[gUnknown_203B318->unk4][3], 0, gUnknown_203B318->unk68, 0x10D);
            break;
        case 4:
            sub_80302E8(3, NULL, 10);
            break;
        case 5:
            gUnknown_203B318->fallbackState = 13;
            dLoc.id = sub_80A2740(gUnknown_203B318->unk10);
            dLoc.floor = 1;
            PrintYellowDungeonNametoBuffer(gAvailablePokemonNames, &dLoc);
            sub_80141B4(gMakuhitaDialogue[gUnknown_203B318->unk4][4], 0, gUnknown_203B318->unk68, 0x10D);
            break;
        case 7:
            gUnknown_203B318->fallbackState = 13;
            sub_80141B4(gMakuhitaDialogue[gUnknown_203B318->unk4][6], 0, gUnknown_203B318->unk68, 0x10D);
            break;
        case 6:
            gUnknown_203B318->fallbackState = 13;
            sub_80141B4(gMakuhitaDialogue[gUnknown_203B318->unk4][5], 0, gUnknown_203B318->unk68, 0x10D);
            break;
        case 8:
            gUnknown_203B318->fallbackState = 9;
            sub_80141B4(gMakuhitaDialogue[gUnknown_203B318->unk4][7], 0, gUnknown_203B318->unk68, 0x10D);
            break;
        case 9:
            PrintColoredPokeNameToBuffer(gPlayerName, GetPlayerPokemonStruct(), COLOR_YELLOW);
            gUnknown_203B318->fallbackState = 11;
            PlaySound(0xCB);
            sub_80141B4(gMakuhitaDojoBonslyDoll, 0, 0, 0x101);
            break;
        case 10:
            gUnknown_203B318->fallbackState = 13;
            sub_80141B4(gMakuhitaDialogue[gUnknown_203B318->unk4][8], 0, gUnknown_203B318->unk68, 0x10D);
            break;
        case 11:
            sub_801B60C(1, ITEM_GINSENG, 1);
            break;
        case 12:
            gUnknown_203B318->fallbackState = 1;
            sub_80141B4(gMakuhitaDialogue[gUnknown_203B318->unk4][9], 0, gUnknown_203B318->unk68, 0x10D);
            break;
        case 13:
            return;
    }
}

void MakuhitaDojo_DrawMainMenu(void)
{
    s32 loopMax;

    gUnknown_203B318->menuAction = 2;
    loopMax = 0;
    gUnknown_203B318->unk18[loopMax].text = gMakuhitaDojoGoTrain;
    gUnknown_203B318->unk18[loopMax].menuAction = 2;

    if (MakuhitaDojo_ReturnFalse()) {
        gUnknown_203B318->unk18[loopMax].menuAction = -1;
        gUnknown_203B318->menuAction = 1;
    }

    loopMax += 1;
    gUnknown_203B318->unk18[loopMax].text = *gUnknown_80D4970;
    gUnknown_203B318->unk18[loopMax].menuAction = 3;
    loopMax += 1;
    gUnknown_203B318->unk18[loopMax].text = *gUnknown_80D4934;
    gUnknown_203B318->unk18[loopMax].menuAction = 1;
    loopMax += 1;
    gUnknown_203B318->unk18[loopMax].text = NULL;
    gUnknown_203B318->unk18[loopMax].menuAction = 1;
}

void sub_8030208(void)
{
    s32 menuAction;
    if (sub_80144A4(&menuAction) == 0) {
        gUnknown_203B318->menuAction = menuAction;

        switch (menuAction) {
            case 2:
                MakuhitaDojo_SetState(3);
                break;
            case 3:
                MakuhitaDojo_SetState(12);
                break;
            case 1:
                MakuhitaDojo_SetState(2);
                break;
        }
    }
}

void sub_8030258(void)
{
    switch (sub_80303AC(TRUE)) {
        case 3:
            gUnknown_203B318->unk10 = sub_8030418();
            sub_8030480();
            MakuhitaDojo_SetState(5);
            break; 
        case 2:
            sub_8030480();
            gUnknown_203B318->unk10 = -1;
            MakuhitaDojo_SetState(1);
            break;
        case 0:
        case 1:
            break;
    }
}

void sub_80302A8(void)
{
    switch (sub_801B6AC()) {
        case 2:
        case 3:
            sub_801B72C();
            MakuhitaDojo_SetState(10);
            break;
        case 0:
        case 1:
            break;
    }
}

void MakuhitaDojo_GoToFallbackState(void)
{
    s32 temp;
    if (sub_80144A4(&temp) == 0)
        MakuhitaDojo_SetState(gUnknown_203B318->fallbackState);
}

bool8 sub_80302E8(s32 param_1, struct UnkTextStruct2_sub *param_2, u32 param_3)
{
    if (MakuhitaDojo_ReturnFalse())
        return FALSE;

    if (gUnknown_203B31C == NULL)
        gUnknown_203B31C = MemoryAlloc(sizeof(struct unkStruct_203B31C), 8);

    gUnknown_203B31C->unk64 = param_1;
    gUnknown_203B31C->unk68 = &gUnknown_203B31C->unk6C[param_1];
    sub_8006518(gUnknown_203B31C->unk6C);
    gUnknown_203B31C->unk6C[gUnknown_203B31C->unk64] = gUnknown_80E0804;
    gUnknown_203B31C->unk68->unk14 = gUnknown_203B31C->unkCC;

    if (param_2 != NULL)
        gUnknown_203B31C->unk6C[gUnknown_203B31C->unk64].unk8 = *param_2;

    sub_8012D08(gUnknown_203B31C->unk68, param_3);
    ResetUnusedInputStruct();
    sub_800641C(gUnknown_203B31C->unk6C, 1, 1);
    sub_8013818(&gUnknown_203B31C->input, sub_8030668(), param_3, param_1);
    sub_80304C8();
    MakuhitaDojo_DrawCourseList();
    return TRUE;
}

u32 sub_80303AC(bool8 param_1)
{
    if (param_1 == FALSE) {
        sub_8013660(&gUnknown_203B31C->input);
        return 0;
    }

    switch (GetKeyPress(&gUnknown_203B31C->input)) {
        case INPUT_B_BUTTON:
            PlayMenuSoundEffect(1);
            return 2;
        case INPUT_A_BUTTON:
            PlayMenuSoundEffect(0);
            return 3;
        default:
            if (sub_80138B8(&gUnknown_203B31C->input, 1)) {
                sub_80304C8();
                MakuhitaDojo_DrawCourseList();
                return 1;
            }
            else
                return 0;
    }
}

s16 sub_8030418(void)
{
    return gUnknown_203B31C->unk0[(gUnknown_203B31C->input.unk1E * gUnknown_203B31C->input.unk1C) + gUnknown_203B31C->input.menuIndex];
}

// Unused?
void sub_8030444(u8 r0)
{
    gUnknown_203B31C->input.unk22 = sub_8030668();
    sub_8013984(&gUnknown_203B31C->input);
    sub_80304C8();
    MakuhitaDojo_DrawCourseList();
    if (r0)
        AddMenuCursorSprite(&gUnknown_203B31C->input);
}

void sub_8030480(void)
{
    if (gUnknown_203B31C != NULL) {
        gUnknown_203B31C->unk6C[gUnknown_203B31C->unk64] = gUnknown_80E07EC;
        ResetUnusedInputStruct();
        sub_800641C(gUnknown_203B31C->unk6C, 1, 1);
        MemoryFree(gUnknown_203B31C);
        gUnknown_203B31C = NULL;
    }
}

#ifdef NONMATCHING
void sub_80304C8(void)
{
    s16 test;
    
    gUnknown_203B31C->unkCC[0] = 1;
    gUnknown_203B31C->unkCC[1] = 0;
    gUnknown_203B31C->unkCC[2] = 8;
    gUnknown_203B31C->unkCC[3] = 0;

    test = sub_80095E4(gUnknown_203B31C->input.unk1A, 12) + 2;
    gUnknown_203B31C->unk6C[gUnknown_203B31C->unk64].unkE = test;
    gUnknown_203B31C->unk6C[gUnknown_203B31C->unk64].unk10 = test + 2;
    ResetUnusedInputStruct();
    sub_800641C(gUnknown_203B31C->unk6C, 1, 1);
}
#else
NAKED
void sub_80304C8(void)
{
    asm_unified(
	"\tpush {r4,lr}\n"
	"\tldr r4, _08030538\n"
	"\tldr r0, [r4]\n"
	"\tadds r0, 0xCC\n"
	"\tmovs r2, 0\n"
	"\tmovs r1, 0x1\n"
	"\tstrb r1, [r0]\n"
	"\tldr r0, [r4]\n"
	"\tadds r0, 0xCD\n"
	"\tstrb r2, [r0]\n"
	"\tldr r0, [r4]\n"
	"\tadds r0, 0xCE\n"
	"\tmovs r1, 0x8\n"
	"\tstrb r1, [r0]\n"
	"\tldr r0, [r4]\n"
	"\tadds r0, 0xCF\n"
	"\tstrb r2, [r0]\n"
	"\tldr r0, [r4]\n"
	"\tadds r0, 0x4A\n"
	"\tmovs r1, 0\n"
	"\tldrsh r0, [r0, r1]\n"
	"\tmovs r1, 0xC\n"
	"\tbl sub_80095E4\n"
	"\tadds r0, 0x2\n"
	"\tlsls r0, 16\n"
	"\tldr r2, [r4]\n"
	"\tldr r3, [r2, 0x64]\n"
	"\tlsls r1, r3, 1\n"
	"\tadds r1, r3\n"
	"\tlsls r1, 3\n"
	"\tadds r1, r2, r1\n"
	"\tadds r1, 0x7A\n"
	"\tasrs r3, r0, 16\n"
	"\tlsrs r0, 16\n"
	"\tstrh r0, [r1]\n"
	"\tldr r1, [r2, 0x64]\n"
	"\tlsls r0, r1, 1\n"
	"\tadds r0, r1\n"
	"\tlsls r0, 3\n"
	"\tadds r2, r0\n"
	"\tadds r3, 0x2\n"
	"\tadds r2, 0x7C\n"
	"\tstrh r3, [r2]\n"
	"\tbl ResetUnusedInputStruct\n"
	"\tldr r0, [r4]\n"
	"\tadds r0, 0x6C\n"
	"\tmovs r1, 0x1\n"
	"\tmovs r2, 0x1\n"
	"\tbl sub_800641C\n"
	"\tpop {r4}\n"
	"\tpop {r0}\n"
	"\tbx r0\n"
	"\t.align 2, 0\n"
"_08030538: .4byte gUnknown_203B31C");
}
#endif // NONMATCHING

void MakuhitaDojo_DrawCourseList(void)
{
    u8 dungeonIndex;
    s32 mazeIndex;
    s32 y;
    s32 iVar6;
    u32 color;
    s32 index;
    u8 buffer[256];

    sub_8008C54(gUnknown_203B31C->unk64);
    sub_80073B8(gUnknown_203B31C->unk64);
    xxx_call_draw_string(10, 0, gMakuhitaDojoHeader, gUnknown_203B31C->unk64, 0); // Courses
    sub_8012BC4((gUnknown_203B31C->unkCC[2] * 8) + 4, 0, gUnknown_203B31C->input.unk1E + 1, 2, 7, gUnknown_203B31C->unk64);

    for (index = 0; index < gUnknown_203B31C->input.unk1A; index++) {
        iVar6 = gUnknown_203B31C->unk0[gUnknown_203B31C->input.unk1E * gUnknown_203B31C->input.unk1C + index];
        dungeonIndex = sub_80A2740(iVar6);

        mazeIndex = sub_80A2668(iVar6);

        y = sub_8013800(&gUnknown_203B31C->input, index);
        color = COLOR_WHITE_2; // COLOR_WHITE again?
        if (IsMazeCompleted(mazeIndex)) {
            xxx_call_draw_string(8, y, gUnknown_80E0824, gUnknown_203B31C->unk64, 0); // Draw Star symbol
            color = COLOR_GREEN;
        }
        sprintfStatic(buffer, gMakuhitaCoursePlaceholder, color, GetDungeonName1(dungeonIndex)); // "#c%c%s#r"
        xxx_call_draw_string(16, y, buffer, gUnknown_203B31C->unk64, 0);
    }
    sub_80073E0(gUnknown_203B31C->unk64);
}

s32 sub_8030668(void)
{
    s32 index;
    s32 counter;

    counter = 0;

    for (index = 0; index < NUM_DUNGEON_MAZE; index++) {
        if (sub_8097504(index)) {
            gUnknown_203B31C->unk0[counter] = sub_80A26CC(index);
            counter++;
        }
    }
    return counter;
}

bool8 MakuhitaDojo_ReturnFalse(void)
{
    return FALSE;
}