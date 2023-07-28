#include "global.h"
#include "constants/communication_error_codes.h"
#include "input.h"
#include "main_menu.h"
#include "item.h"
#include "team_inventory.h"
#include "menu.h"
#include "memory.h"
#include "text.h"
#include "menu_input.h"

struct unkStruct_203B35C
{
    // size: 0x504
    u32 unk0;
    u32 linkStatus;
    u32 state;
    u8 fillC[0x1C - 0xC];
    struct MenuStruct unk1C[4];
    struct UnkTextStruct2 unk15C[4];
    u8 unk1BC[4];
    u32 unk1C0[9];
};
extern struct unkStruct_203B35C *gUnknown_203B35C;

const struct UnkTextStruct2 gUnknown_80E653C = {
   0x00, 0x00, 0x00, 0x00,
   0x03,
   0x00, 0x00,
   0x00, 0x00,
   0x00, 0x00,
   NULL
};
const struct UnkTextStruct2 gUnknown_80E6554 = {
   0x00, 0x00, 0x00, 0x00,
   0x03,
   0x03, 0x08,
   0x18, 0x05,
   0x05, 0x00,
   NULL
};

const u8 sUnknown_80E65C4[];
const u8 sUnknown_80E65AC[];
const u8 sUnknown_80E658C[];
const struct MenuItem gUnknown_80E656C[4] = {
    {sUnknown_80E65C4, 0x5},
    {sUnknown_80E65AC, 0x5},
    {sUnknown_80E658C, 0x5},
    {NULL, 0x3},

};
ALIGNED(4) const u8 sUnknown_80E658C[] = _("{CENTER_ALIGN}Don{APOSTROPHE}t turn the power off!");
ALIGNED(4) const u8 sUnknown_80E65AC[] = _("{CENTER_ALIGN}Item transmitting!");
ALIGNED(4) const u8 sUnknown_80E65C4[] = _("{CENTER_ALIGN}{COLOR_1 RED}Caution!{END_COLOR_TEXT_1} ");

const u8 sUnknown_80E65F8[];
const struct MenuItem gUnknown_80E65D8[4] = {
    {sUnknown_80E65C4, 0x5},
    {sUnknown_80E65F8, 0x5},
    {sUnknown_80E658C, 0x5},
    {NULL, 0x3},

};
ALIGNED(4) const u8 sUnknown_80E65F8[] = _("{CENTER_ALIGN}Thank-You Mail in transmission!");

const u8 sUnknown_80E663C[];
const struct MenuItem gUnknown_80E661C[4] = {
    {sUnknown_80E65C4, 0x5},
    {sUnknown_80E663C, 0x5},
    {sUnknown_80E658C, 0x5},
    {NULL, 0x3},

};
ALIGNED(4) const u8 sUnknown_80E663C[] = _("{CENTER_ALIGN}A-OK Mail in transmission!");

const struct MenuItem gUnknown_80E665C[4] = {
    {sUnknown_80E65C4, 0x5},
    {sUnknown_80E65F8, 0x5},
    {sUnknown_80E658C, 0x5},
    {NULL, 0x3},

};

const u8 sUnknown_80E669C[];
const struct MenuItem gUnknown_80E667C[4] = {
    {sUnknown_80E65C4, 0x5},
    {sUnknown_80E669C, 0x5},
    {sUnknown_80E658C, 0x5},
    {NULL, 0x3},

};
ALIGNED(4) const u8 sUnknown_80E669C[] = _("{CENTER_ALIGN}Wonder Mail in transmission!");

const struct UnkTextStruct2 gUnknown_80E66BC = {
   0x00, 0x00, 0x00, 0x00,
   0x03,
   0x03, 0x08,
   0x18, 0x05,
   0x05, 0x00,
   NULL
};

const u8 sUnknown_80E6734[];
const u8 sUnknown_80E6710[];
const u8 sUnknown_80E66F4[];
const struct MenuItem gUnknown_80E66D4[4] = {
    {sUnknown_80E6734, 0x5},
    {sUnknown_80E6710, 0x5},
    {sUnknown_80E66F4, 0x5},
    {NULL, 0x3},

};
ALIGNED(4) const u8 sUnknown_80E66F4[] = _("{CENTER_ALIGN}Please press any button.");
ALIGNED(4) const u8 sUnknown_80E6710[] = _("{CENTER_ALIGN}Your adventure will be continued.");
ALIGNED(4) const u8 sUnknown_80E6734[] = _("{CENTER_ALIGN}{COLOR_1 LIGHT_BLUE}Success!{END_COLOR_TEXT_1} ");

const struct UnkTextStruct2 gUnknown_80E6748 = {
   0x00, 0x00, 0x00, 0x00,
   0x03,
   0x03, 0x08,
   0x18, 0x05,
   0x05, 0x00,
   NULL
};

const u8 sUnknown_80E6780[];
const u8 sUnknown_80E6794[];
const u8 sUnknown_80E67B4[];
const struct MenuItem gUnknown_80E6760[4] = {
    {sUnknown_80E67B4, 0x5},
    {sUnknown_80E6794, 0x5},
    {sUnknown_80E6780, 0x5},
    {NULL, 0x3},

};
ALIGNED(4) const u8 sUnknown_80E6780[] = _("{CENTER_ALIGN}please try again.");
ALIGNED(4) const u8 sUnknown_80E6794[] = _("{CENTER_ALIGN}Check the Game Link cable and");
ALIGNED(4) const u8 sUnknown_80E67B4[] = _("{CENTER_ALIGN}#C2Communication error!{END_COLOR_TEXT_1} ");

const struct UnkTextStruct2 gUnknown_80E67D4 = {
   0x00, 0x00, 0x00, 0x00,
   0x03,
   0x03, 0x08,
   0x18, 0x05,
   0x05, 0x00,
   NULL
};

const u8 sUnknown_80E680C[];
const struct MenuItem gUnknown_80E67EC[4] = {
    {sUnknown_80E67B4, 0x5},
    {sUnknown_80E680C, 0x5},
    {sUnknown_80E6780, 0x5},
    {NULL, 0x3},
};
ALIGNED(4) const u8 sUnknown_80E680C[] = _("{CENTER_ALIGN}Check your communication mode and");

const struct UnkTextStruct2 gUnknown_80E6830 = {
   0x00, 0x00, 0x00, 0x00,
   0x03,
   0x03, 0x08,
   0x18, 0x05,
   0x05, 0x00,
   NULL
};

const u8 sUnknown_80E6888[];
const u8 sUnknown_80E6868[];
const struct MenuItem gUnknown_80E6848[4] = {
    {sUnknown_80E67B4, 0x5},
    {sUnknown_80E6888, 0x5},
    {sUnknown_80E6868, 0x5},
    {NULL, 0x3},
};
ALIGNED(4) const u8 sUnknown_80E6868[] = _("{CENTER_ALIGN}Please inform the programmer.");
ALIGNED(4) const u8 sUnknown_80E6888[] = _("{CENTER_ALIGN}Check sum error.");

const struct UnkTextStruct2 gUnknown_80E689C = {
   0x00, 0x00, 0x00, 0x00,
   0x03,
   0x03, 0x08,
   0x18, 0x05,
   0x05, 0x00,
   NULL
};

const u8 sUnknown_80E6928[];
const u8 sUnknown_80E68FC[];
const u8 sUnknown_80E68D4[];
const struct MenuItem gUnknown_80E68B4[4] = {
    {sUnknown_80E6928, 0x5},
    {sUnknown_80E68FC, 0x5},
    {sUnknown_80E68D4, 0x5},
    {NULL, 0x3},
};
ALIGNED(4) const u8 sUnknown_80E68D4[] = _("{CENTER_ALIGN}someone{APOSTROPHE}s storage space was full.");
ALIGNED(4) const u8 sUnknown_80E68FC[] = _("{CENTER_ALIGN}An item could not be transferred because");
ALIGNED(4) const u8 sUnknown_80E6928[] = _("{CENTER_ALIGN}#C2Error!{END_COLOR_TEXT_1} ");

const struct UnkTextStruct2 gUnknown_80E6938 = {
   0x00, 0x00, 0x00, 0x00,
   0x03,
   0x03, 0x08,
   0x18, 0x05,
   0x05, 0x00,
   NULL
};

const u8 sUnknown_80E6988[];
const u8 sUnknown_80E6970[];
const struct MenuItem gUnknown_80E6950[4] = {
    {sUnknown_80E6928, 0x5},
    {sUnknown_80E6988, 0x5},
    {sUnknown_80E6970, 0x5},
    {NULL, 0x3},
};
ALIGNED(4) const u8 sUnknown_80E6970[] = _("{CENTER_ALIGN}Please check again.");
ALIGNED(4) const u8 sUnknown_80E6988[] = _("{CENTER_ALIGN}This {COLOR_1 LIGHT_BLUE}SOS Mail{END_COLOR_TEXT_1} can{APOSTROPHE}t be used.");

const struct UnkTextStruct2 gUnknown_80E69B0 = {
   0x00, 0x00, 0x00, 0x00,
   0x03,
   0x03, 0x08,
   0x18, 0x05,
   0x05, 0x00,
   NULL
};

const u8 sUnknown_80E69E8[];
const struct MenuItem gUnknown_80E69C8[4] = {
    {sUnknown_80E6928, 0x5},
    {sUnknown_80E69E8, 0x5},
    {sUnknown_80E6970, 0x5},
    {NULL, 0x3},
};
ALIGNED(4) const u8 sUnknown_80E69E8[] = _("{CENTER_ALIGN}This {COLOR_1 LIGHT_BLUE}A-OK Mail{END_COLOR_TEXT_1} can{APOSTROPHE}t be used.");

const struct UnkTextStruct2 gUnknown_80E6A10 = {
   0x00, 0x00, 0x00, 0x00,
   0x03,
   0x03, 0x08,
   0x18, 0x05,
   0x05, 0x00,
   NULL
};

const u8 sUnknown_80E6A48[];
const struct MenuItem gUnknown_80E6A28[4] = {
    {sUnknown_80E6928, 0x5},
    {sUnknown_80E6A48, 0x5},
    {sUnknown_80E6970, 0x5},
    {NULL, 0x3},
};
ALIGNED(4) const u8 sUnknown_80E6A48[] = _("{CENTER_ALIGN}This {COLOR_1 LIGHT_BLUE}Thank-You Mail{END_COLOR_TEXT_1} can{APOSTROPHE}t be used.");

const struct UnkTextStruct2 gUnknown_80E6A74 = {
   0x00, 0x00, 0x00, 0x00,
   0x03,
   0x03, 0x08,
   0x18, 0x05,
   0x05, 0x00,
   NULL
};

const u8 sUnknown_80E6AC8[];
const u8 sUnknown_80E6AAC[];
const struct MenuItem gUnknown_80E6A8C[4] = {
    {sUnknown_80E6928, 0x5},
    {sUnknown_80E6AC8, 0x5},
    {sUnknown_80E6AAC, 0x5},
    {NULL, 0x3},
};
ALIGNED(4) const u8 sUnknown_80E6AAC[] = _("{CENTER_ALIGN}It can{APOSTROPHE}t be received.");
ALIGNED(4) const u8 sUnknown_80E6AC8[] = _("{CENTER_ALIGN}There is no space for new mail.");

const struct UnkTextStruct2 gUnknown_80E6AEC = {
   0x00, 0x00, 0x00, 0x00,
   0x03,
   0x03, 0x08,
   0x18, 0x05,
   0x05, 0x00,
   NULL
};

const u8 sUnknown_80E6B4C[];
const u8 sUnknown_80E6B24[];
const struct MenuItem gUnknown_80E6B04[4] = {
    {sUnknown_80E6928, 0x5},
    {sUnknown_80E6B4C, 0x5},
    {sUnknown_80E6B24, 0x5},
    {NULL, 0x3},
};
ALIGNED(4) const u8 sUnknown_80E6B24[] = _("{CENTER_ALIGN}You need to go further in the story.");
ALIGNED(4) const u8 sUnknown_80E6B4C[] = _("{CENTER_ALIGN}You may not go to that {COLOR_1 LIGHT_BLUE}dungeon{END_COLOR_TEXT_1} yet.");

const struct UnkTextStruct2 gUnknown_80E6B78 = {
   0x00, 0x00, 0x00, 0x00,
   0x03,
   0x03, 0x08,
   0x18, 0x05,
   0x05, 0x00,
   NULL
};

const u8 sUnknown_80E6BC4[];
const u8 sUnknown_80E6BB0[];
const struct MenuItem gUnknown_80E6B90[4] = {
    {sUnknown_80E6928, 0x5},
    {sUnknown_80E6BC4, 0x5},
    {sUnknown_80E6BB0, 0x5},
    {NULL, 0x3},
};
ALIGNED(4) const u8 sUnknown_80E6BB0[] = _("{CENTER_ALIGN}Please try again.");
ALIGNED(4) const u8 sUnknown_80E6BC4[] = _("{CENTER_ALIGN}There was a problem on your friend{APOSTROPHE}s end.");

const struct UnkTextStruct2 gUnknown_80E6BF4 = {
   0x00, 0x00, 0x00, 0x00,
   0x03,
   0x03, 0x08,
   0x18, 0x05,
   0x05, 0x00,
   NULL
};

const u8 sUnknown_80E6C2C[];
const struct MenuItem gUnknown_80E6C0C[4] = {
    {sUnknown_80E6928, 0x5},
    {sUnknown_80E6C2C, 0x5},
    {sUnknown_80E6BB0, 0x5},
    {NULL, 0x3},
};
ALIGNED(4) const u8 sUnknown_80E6C2C[] = _("{CENTER_ALIGN}Your friend is not responding.");

const struct UnkTextStruct2 gUnknown_80E6C50 = {
   0x00, 0x00, 0x00, 0x00,
   0x03,
   0x03, 0x08,
   0x18, 0x05,
   0x05, 0x00,
   NULL
};

const u8 sUnknown_80E6CA8[];
const u8 sUnknown_80E6C88[];
const struct MenuItem gUnknown_80E6C68[4] = {
    {sUnknown_80E6734, 0x5},
    {sUnknown_80E6CA8, 0x5},
    {sUnknown_80E6C88, 0x5},
    {NULL, 0x3},
};
ALIGNED(4) const u8 sUnknown_80E6C88[] = _("{CENTER_ALIGN}went through successfully.");
ALIGNED(4) const u8 sUnknown_80E6CA8[] = _("{CENTER_ALIGN}The item exchange with your friend");


const struct UnkTextStruct2 gUnknown_80E6CD0 = {
   0x00, 0x00, 0x00, 0x00,
   0x03,
   0x03, 0x08,
   0x18, 0x05,
   0x05, 0x00,
   NULL
};

const u8 sUnknown_80E6D2C[];
const u8 sUnknown_80E6D08[];
const struct MenuItem gUnknown_80E6CE8[4] = {
    {sUnknown_80E65C4, 0x5},
    {sUnknown_80E6D2C, 0x5},
    {sUnknown_80E6D08, 0x5},
    {NULL, 0x3},
};
ALIGNED(4) const u8 sUnknown_80E6D08[] = _("{CENTER_ALIGN}you and your friend are ready.");
ALIGNED(4) const u8 sUnknown_80E6D2C[] = _("{CENTER_ALIGN}Please communicate only after both");

const struct UnkTextStruct2 gUnknown_80E6D54 = {
   0x00, 0x00, 0x00, 0x00,
   0x03,
   0x03, 0x08,
   0x18, 0x05,
   0x05, 0x00,
   NULL
};

const u8 sUnknown_80E6DB0[];
const u8 sUnknown_80E6D8C[];
const struct MenuItem gUnknown_80E6D6C[4] = {
    {sUnknown_80E6928, 0x5},
    {sUnknown_80E6DB0, 0x5},
    {sUnknown_80E6D8C, 0x5},
    {NULL, 0x3},
};
ALIGNED(4) const u8 sUnknown_80E6D8C[] = _("{CENTER_ALIGN}connected. Please check again.");
ALIGNED(4) const u8 sUnknown_80E6DB0[] = _("{CENTER_ALIGN}An incorrect number of GBA systems are");

const struct UnkTextStruct2 gUnknown_80E6DDC = {
   0x00, 0x00, 0x00, 0x00,
   0x03,
   0x03, 0x08,
   0x18, 0x05,
   0x05, 0x00,
   NULL
};

const u8 sUnknown_80E6E30[];
const u8 sUnknown_80E6E14[];
const struct MenuItem gUnknown_80E6DF4[4] = {
    {sUnknown_80E6928, 0x5},
    {sUnknown_80E6E30, 0x5},
    {sUnknown_80E6E14, 0x5},
    {NULL, 0x3},
};
ALIGNED(4) const u8 sUnknown_80E6E14[] = _("{CENTER_ALIGN}Please check it again.");
ALIGNED(4) const u8 sUnknown_80E6E30[] = _("{CENTER_ALIGN}Communication failed.");

static const u8 fill0[] = "pksdir0";
ALIGNED(4) const u8 gUnknown_80E6E50[] = "CHUNSOFT";
static const u8 fill1[] = "pksdir0";
static const u8 fill2[] = "pksdir0";
static const u8 fill3[] = "pksdir0";
static const u8 fill4[] = "pksdir0";

extern void sub_8037400(void);
extern void ResetSprites(u32);
extern void sub_8035CF4(struct MenuStruct *,u32, u32);
extern void sub_80376CC();
extern void sub_8035CC0(struct UnkTextStruct2 *, u32);

extern u32 sub_8037C10(u32);
extern void sub_8037748(void);
extern void sub_80371B8(void);
extern void sub_8037900(void);
extern void PlayMenuSoundEffect(u32);
extern u32 sub_8037798(void);
extern void SetMenuItems(struct MenuStruct *, void *, u32, const struct UnkTextStruct2 *, const struct MenuItem *, u32, u32, u32);
extern void sub_8005838(u32, u32);
extern void sub_80060EC();
extern void sub_800CB20();
extern void TransferBGPaletteBuffer();
extern void xxx_call_update_bg_vram();
extern void sub_8009908();
extern void xxx_call_update_bg_sound_input();


#ifdef NONMATCHING
void sub_8036FDC(s32 param_1)
{
  int iVar3;
  int iVar4;
  
  ResetUnusedInputStruct();
  sub_800641C(0,1,1);
  ResetSprites(0);
  if (gUnknown_203B35C == NULL) {
    gUnknown_203B35C = MemoryAlloc(0x504,8);
    MemoryFill8((u8 *)gUnknown_203B35C,0,0x504);
  }

  gUnknown_203B35C->unk0 = param_1;
  gUnknown_203B35C->linkStatus = 0;
  gUnknown_203B35C->state = 0;
  iVar3 = 0;
  do {
    gUnknown_203B35C->unk1C0[iVar3 * 2] = 0;
    // Add statements of index flip but ends in same result
    gUnknown_203B35C->unk1BC[iVar3 * 8] = 0;
    iVar3 = iVar3 + 1;
  } while (iVar3 < 2);
  for(iVar4 = 0; iVar4 < 4; iVar4++){
    gUnknown_203B35C->unk15C[iVar4] = gUnknown_80E653C;
  }
  ResetUnusedInputStruct();
  sub_800641C(gUnknown_203B35C->unk15C,1,1);
  SetMenuItems(gUnknown_203B35C->unk1C,gUnknown_203B35C->unk15C,0,&gUnknown_80E6CD0,gUnknown_80E6CE8,0,
               6,0);
  sub_8035CF4(gUnknown_203B35C->unk1C,0,1);
  sub_80376CC();
}
#else
NAKED
void sub_8036FDC(s32 param_1)
{
	asm_unified("\tpush {r4-r7,lr}\n"
	"\tmov r7, r8\n"
	"\tpush {r7}\n"
	"\tsub sp, 0x10\n"
	"\tadds r6, r0, 0\n"
	"\tbl ResetUnusedInputStruct\n"
	"\tmovs r0, 0\n"
	"\tmovs r1, 0x1\n"
	"\tmovs r2, 0x1\n"
	"\tbl sub_800641C\n"
	"\tmovs r0, 0\n"
	"\tbl ResetSprites\n"
	"\tldr r5, _080370C0\n"
	"\tldr r0, [r5]\n"
	"\tcmp r0, 0\n"
	"\tbne _08037016\n"
	"\tldr r4, _080370C4\n"
	"\tadds r0, r4, 0\n"
	"\tmovs r1, 0x8\n"
	"\tbl MemoryAlloc\n"
	"\tstr r0, [r5]\n"
	"\tmovs r1, 0\n"
	"\tadds r2, r4, 0\n"
	"\tbl MemoryFill8\n"
"_08037016:\n"
	"\tldr r0, [r5]\n"
	"\tstr r6, [r0]\n"
	"\tmovs r1, 0\n"
	"\tstr r1, [r0, 0x4]\n"
	"\tstr r1, [r0, 0x8]\n"
	"\tmovs r3, 0\n"
	"\tadds r7, r5, 0\n"
	"\tmovs r6, 0xE0\n"
	"\tlsls r6, 1\n"
	"\tmovs r4, 0\n"
	"\tmovs r5, 0xDE\n"
	"\tlsls r5, 1\n"
"_0803702E:\n"
	"\tldr r0, [r7]\n"
	"\tlsls r2, r3, 3\n"
	"\tadds r1, r0, r6\n"
	"\tadds r1, r2\n"
	"\tstr r4, [r1]\n"
	"\tadds r0, r2\n"
	"\tadds r0, r5\n"
	"\tstrb r4, [r0]\n"
	"\tadds r3, 0x1\n"
	"\tcmp r3, 0x1\n"
	"\tble _0803702E\n"
	"\tldr r0, _080370C0\n"
	"\tmov r12, r0\n"
	"\tmovs r5, 0xAE\n"
	"\tlsls r5, 1\n"
	"\tmov r8, r5\n"
	"\tldr r4, _080370C8\n"
	"\tmovs r3, 0\n"
	"\tmovs r2, 0x3\n"
"_08037054:\n"
	"\tmov r6, r12\n"
	"\tldr r1, [r6]\n"
	"\tadds r1, r3\n"
	"\tadd r1, r8\n"
	"\tadds r0, r4, 0\n"
	"\tldm r0!, {r5-r7}\n"
	"\tstm r1!, {r5-r7}\n"
	"\tldm r0!, {r5-r7}\n"
	"\tstm r1!, {r5-r7}\n"
	"\tadds r3, 0x18\n"
	"\tsubs r2, 0x1\n"
	"\tcmp r2, 0\n"
	"\tbge _08037054\n"
	"\tmovs r6, 0\n"
	"\tbl ResetUnusedInputStruct\n"
	"\tldr r5, _080370C0\n"
	"\tldr r0, [r5]\n"
	"\tmovs r4, 0xAE\n"
	"\tlsls r4, 1\n"
	"\tadds r0, r4\n"
	"\tmovs r1, 0x1\n"
	"\tmovs r2, 0x1\n"
	"\tbl sub_800641C\n"
	"\tldr r1, [r5]\n"
	"\tadds r0, r1, 0\n"
	"\tadds r0, 0x1C\n"
	"\tadds r1, r4\n"
	"\tldr r3, _080370CC\n"
	"\tldr r2, _080370D0\n"
	"\tstr r2, [sp]\n"
	"\tstr r6, [sp, 0x4]\n"
	"\tmovs r2, 0x6\n"
	"\tstr r2, [sp, 0x8]\n"
	"\tstr r6, [sp, 0xC]\n"
	"\tmovs r2, 0\n"
	"\tbl SetMenuItems\n"
	"\tldr r0, [r5]\n"
	"\tadds r0, 0x1C\n"
	"\tmovs r1, 0\n"
	"\tmovs r2, 0x1\n"
	"\tbl sub_8035CF4\n"
	"\tbl sub_80376CC\n"
	"\tadd sp, 0x10\n"
	"\tpop {r3}\n"
	"\tmov r8, r3\n"
	"\tpop {r4-r7}\n"
	"\tpop {r0}\n"
	"\tbx r0\n"
	"\t.align 2, 0\n"
"_080370C0: .4byte gUnknown_203B35C\n"
"_080370C4: .4byte 0x00000504\n"
"_080370C8: .4byte gUnknown_80E653C\n"
"_080370CC: .4byte gUnknown_80E6CD0\n"
"_080370D0: .4byte gUnknown_80E6CE8");
}
#endif

void sub_80370D4(void)
{
    if(gUnknown_203B35C != NULL)
    {
        MemoryFree(gUnknown_203B35C);
        gUnknown_203B35C = NULL;
    }
}

// Unused
u32 sub_80370F0(void)
{
  u32 nextMenu;
  int local_10;

  local_10 = 4;
  nextMenu = MENU_NO_SCREEN_CHANGE;
  switch(gUnknown_203B35C->state){
      case 0:
        if (sub_80130A8(&gUnknown_203B35C->unk1C[0]) == '\0') {
            sub_8013114(&gUnknown_203B35C->unk1C[0],&local_10);
        }
        if (local_10 == 4) {
            sub_8037748();
        }
        else {
            gUnknown_203B35C->state = 1;
            sub_8037900();
        }
        break;
      case 1:
        sub_80376CC();
        gUnknown_203B35C->state = 2;
        sub_80371B8();
        break;
      case 2:
        if (((gUnknown_203B35C->unk0 < 2) && (gUnknown_203B35C->linkStatus == COMMS_GOOD)) && (sub_8037C10(0) == 0) ) {
          return 0x29; // TODO: what screen is this?
        }
        else {
          if (sub_80130A8(&gUnknown_203B35C->unk1C[0]) == '\0') {
            sub_8013114(&gUnknown_203B35C->unk1C[0],&local_10);
          }
          if (local_10 != 4) {
            PlayMenuSoundEffect(3);
            nextMenu = sub_8037798();
            gUnknown_203B35C->state = 4;
          }
          sub_8037748();
        }
        break;
  }
  return nextMenu;
}

void sub_80371B8(void)
{
  struct unkStruct_8035D94 *item;
  const struct MenuItem *MenuItems;
  const struct UnkTextStruct2 *puVar5;
  
  puVar5 = NULL;
  MenuItems = NULL;
  sub_8037400();
  if ((gUnknown_203B35C->unk0 < 2) &&(gUnknown_203B35C->linkStatus == COMMS_GOOD)) {
    if (sub_8037C10(0) != 0) {
      sub_80376CC();
      sub_8035CC0(gUnknown_203B35C->unk15C,0);
      // Success!
      // The item exchange with your friend
      // went through successfully
      SetMenuItems(gUnknown_203B35C->unk1C, gUnknown_203B35C->unk15C, 0, &gUnknown_80E6C50, gUnknown_80E6C68, 0, 6, 0);
      sub_8035CF4(gUnknown_203B35C->unk1C, 0, 1);
    }
  }
  else {
    sub_80376CC();
    sub_8035CC0(gUnknown_203B35C->unk15C, 0);
    switch(gUnknown_203B35C->linkStatus) {
        case 0:
          puVar5 = &gUnknown_80E66BC;
          MenuItems = gUnknown_80E66D4;
          break;
        case 3:
          puVar5 = &gUnknown_80E6D54;
          MenuItems = gUnknown_80E6D6C;
          break;
        case 2:
          puVar5 = &gUnknown_80E6DDC;
          MenuItems = gUnknown_80E6DF4;
          break;
        case 4:
          puVar5 = &gUnknown_80E67D4;
          MenuItems = gUnknown_80E67EC;
          break;
        case 1:
        case 5:
          puVar5 = &gUnknown_80E6748;
          MenuItems = gUnknown_80E6760;
          break;
        case 6:
          puVar5 = &gUnknown_80E689C;
          MenuItems = gUnknown_80E68B4;
          break;
        case 7:
          puVar5 = &gUnknown_80E6938;
          MenuItems = gUnknown_80E6950;
          break;
        case 9:
          puVar5 = &gUnknown_80E69B0;
          MenuItems = gUnknown_80E69C8;
          break;
        case 0xb:
          puVar5 = &gUnknown_80E6A10;
          MenuItems = gUnknown_80E6A28;
          break;
        case 0xd:
          puVar5 = &gUnknown_80E6A74;
          MenuItems = gUnknown_80E6A8C;
          break;
        case 0xe:
          puVar5 = &gUnknown_80E6B78;
          // Error, there was a problem on your friend's end
          MenuItems = gUnknown_80E6B90;
          break;
        case 0xf:
          puVar5 = &gUnknown_80E6BF4;
          // Error, your friend is not responding
          MenuItems = gUnknown_80E6C0C;
          break;
    }
    SetMenuItems(gUnknown_203B35C->unk1C, gUnknown_203B35C->unk15C, 0, puVar5, MenuItems, 0, 6, 0);
    sub_8035CF4(gUnknown_203B35C->unk1C, 0, 1);
    if ((gUnknown_203B35C->linkStatus != COMMS_GOOD) && (gUnknown_203B35C->unk0 == 0) &&
        (item = sub_8035D94(), item->itemIndex.itemIndex_u8 != ITEM_NOTHING) && (item->numItems != 0)) {
            gTeamInventory_203B460->teamStorage[item->itemIndex.itemIndex_u8] += item->numItems;
    }
  }
}

void sub_80373C4(void)
{
  sub_8005838(0,0);
  sub_80060EC();
  sub_800CB20();
  LoadBufferedInputs();
  TransferBGPaletteBuffer();
  xxx_call_update_bg_vram();
  sub_8009908();
  xxx_call_update_bg_sound_input();
  ResetSprites(0);
}

// Unused
struct unkStruct_203B35C *sub_80373F4(void)
{
    return gUnknown_203B35C;
}
