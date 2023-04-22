#include "global.h"
#include "constants/item.h"
#include "constants/wonder_mail.h"
#include "file_system.h"
#include "input.h"
#include "pokemon.h"
#include "pokemon_mail.h"
#include "memory.h"
#include "text.h"
#include "menu.h"
#include "save.h"
#include "game_options.h"
#include "wonder_mail.h"
#include "code_800D090.h"
#include "code_8094F88.h"
#include "menu_input.h"

struct unkStruct_203B2C8
{
    // size: 0x140
    /* 0x0 */ u8 currState;
    /* 0x1 */ u8 unk1;
    /* 0x4 */ struct OpenedFile *faceFile;
    /* 0x8 */ u8 *faceData;
    /* 0xC */ u16 unkC;
    /* 0xE */ u16 unkE;
    /* 0x10 */ u8 unk10;
    /* 0x11 */ u8 unk11;
    /* 0x12 */ u8 unk12;
    /* 0x13 */ u8 unk13;
    /* 0x14 */ u8 teamName[4]; // Figure out size of this buffer
    u8 fill18[0x114 - 0x18];
    struct unkStruct_802F204 unk114;
    u32 fill13C;
};

extern struct unkStruct_203B2C8 *gUnknown_203B2C8;

extern void sub_8014248(const char *r0, u32, u32, const struct MenuItem *r4, u32, u32, u32, struct OpenedFile **r5, u32);

extern void sub_80920D8(u8 *buffer);
extern void sub_8097790(void);
extern char gUnknown_202E5D8[0x50];
extern char gAvailablePokemonNames[0x50];
extern u32 sub_802F298(void);
extern void sub_802F2C0(void);
extern u8 sub_8099394(u8 *);
extern void sub_802B548(u32);
extern u32 sub_80144A4(s32 *);

extern void sub_802B560(void);
extern void sub_802B57C(void);
extern void sub_802B5B8(void);
extern void sub_802B5FC(void);
extern void sub_802B624(void);

extern void sub_802F204(struct unkStruct_802F204 *, u32);
extern void sub_803C37C(struct DungeonLocation *, u32, u8 *);
extern u32 GetDungeonTeamRankPts(struct DungeonLocation *, u32);
extern void sub_80141B4(const char *r0, u32, struct OpenedFile **r1, u32);
extern bool8 sub_80023E4(u32);

ALIGNED(4) const char gRescueTeamNamePlaceholder[] = "????";

ALIGNED(4) const char gUnknown_80DF9F8[] = _(
	" Oh{COMMA} hello!\n"
	"Your rescue mission went well{COMMA} didn{APOSTROPHE}t it?\n"
	"I wouldn{APOSTROPHE}t expect any less{COMMA} {COLOR_1 LIGHT_BLUE_2}%s{END_COLOR_TEXT_1}!{EXTRA_MSG}"
	" Well{COMMA} well!\n"
	"Here is your reward from the Pokémon\n"
	"Rescue Organization!");

ALIGNED(4) const char gUnknown_80DFAA8[] = _(
	" I hope you will keep on\n"
	"rescuing your friends in\n"
	"dire straits.{EXTRA_MSG}"
	" And now{COMMA} I must save\n"
	"your adventure.");

ALIGNED(4) const char gUnknown_80DFB14[] = _(
	" Oh{COMMA} yes{COMMA} that{APOSTROPHE}s right.\n"
	"Please don{APOSTROPHE}t forget to send an {COLOR_1 LIGHT_BLUE_2}A-OK Mail{END_COLOR_TEXT_1}\n"
	"to the friend you just rescued.{EXTRA_MSG}"
	" Please give me a shout if\n"
	"you would like to send {COLOR_1 LIGHT_BLUE_2}A-OK Mail{END_COLOR_TEXT_1}.");

ALIGNED(4) const char wonder_mail_2_fill[] = "pksdir0";

u32 sub_802B2D4(void)
{
  s32 iVar1;
  struct OpenedFile *faceFile;

  ResetUnusedInputStruct();
  sub_800641C(0,1,1);
  gUnknown_203B2C8 = MemoryAlloc(sizeof(struct unkStruct_203B2C8),8);
  MemoryFill8((u8 *)gUnknown_203B2C8,0,sizeof(struct unkStruct_203B2C8));
  gUnknown_203B2C8->unk1 = -1;
  CopyYellowMonsterNametoBuffer(gUnknown_202E5D8, MONSTER_PELIPPER);
  faceFile = GetDialogueSpriteDataPtr(MONSTER_PELIPPER);
  gUnknown_203B2C8->faceFile = faceFile;
  gUnknown_203B2C8->faceData  = faceFile->data;
  gUnknown_203B2C8->unk10 = 0;
  gUnknown_203B2C8->unk11 = 0;
  gUnknown_203B2C8->unk12 = 0;
  gUnknown_203B2C8->unkC = 2;
  gUnknown_203B2C8->unkE = 8;
  if (sub_8099394(&gUnknown_203B2C8->unk1) == 1) {
    sub_802B548(0);
    iVar1  = 1;
  }
  else
    iVar1 = 0;
  return iVar1;
}

u32 sub_802B358(void)
{
  switch(gUnknown_203B2C8->currState) {
    case 0:
        sub_802B560();
        break;
    case 1:
        sub_802B57C();
        break;
    case 2:
        sub_802B5B8();
        break;
    case 3:
        sub_802B5FC();
        break;
    case 4:
        sub_802B624();
        break;
    case 5:
        return 3;
  }
  return 0;
}

void sub_802B3B8(void)
{
    if(gUnknown_203B2C8 != NULL)
    {
        CloseFile(gUnknown_203B2C8->faceFile);
        MemoryFree(gUnknown_203B2C8);
        gUnknown_203B2C8 = NULL;
    }
}

void nullsub_132(void)
{
}

void sub_802B3E0(void)
{
  struct unkStruct_203B480 *mail;
  char *monName;
  char teamNameBuffer[40];

  switch(gUnknown_203B2C8->currState) {
      case 0:
        if (sub_80023E4(0)) {
            // Copy Team Name to buffer
            sub_80920D8(teamNameBuffer);
        }
        else {
            // Copy "????" to buffer
            strcpy(teamNameBuffer,gRescueTeamNamePlaceholder);
        }
        // Print and expand placeholders?
        sprintfStatic(gUnknown_203B2C8->teamName,gUnknown_80DF9F8,teamNameBuffer);
        // Display to screen with Pelipper face
        sub_80141B4(gUnknown_203B2C8->teamName, 0, &gUnknown_203B2C8->faceFile, 0x10d);
        break;
      case 1:
        monName = GetMonSpecies(MONSTER_PELIPPER);
        strcpy(gUnknown_203B2C8->unk114.clientName, monName);
        gUnknown_203B2C8->unk114.unk14 = MONSTER_PELIPPER;
        gUnknown_203B2C8->unk114.unk16 = 2;
        gUnknown_203B2C8->unk114.moneyReward = 0;
        sub_8097790();
        mail = sub_8095228(gUnknown_203B2C8->unk1);
        sub_803C37C(&mail->dungeon, 0, gUnknown_203B2C8->unk114.itemRewards);
        gUnknown_203B2C8->unk114.teamRankPtsReward = GetDungeonTeamRankPts(&mail->dungeon, 0);
        gUnknown_203B2C8->unk114.itemRewards[1] = ITEM_NOTHING;
        gUnknown_203B2C8->unk114.itemRewards[2] = ITEM_NOTHING;
        gUnknown_203B2C8->unk114.quantity = 10;
        gUnknown_203B2C8->unk114.friendAreaReward = 0;
        sub_802F204(&gUnknown_203B2C8->unk114, 0);
        break;
      case 2:
        // I hope you will keep on rescuing your friends
        // I must save your adventure
        sub_80141B4(gUnknown_80DFAA8, 0, &gUnknown_203B2C8->faceFile, 0x10d);
        break;
      case 4:
        // Oh yes, that's right. Please don't forget to send an A-OK Mail
        // to the friend you just rescued
        sub_80141B4(gUnknown_80DFB14, 0, &gUnknown_203B2C8->faceFile, 0x10d);
      case 3:
      case 5:
        break;
  }
}

void sub_802B548(u32 newState)
{
    gUnknown_203B2C8->currState = newState;
    nullsub_132();
    sub_802B3E0();
}

void sub_802B560(void)
{
    s32 temp;
    if(sub_80144A4(&temp) == 0)
    {
        sub_802B548(1);
    }
}

void sub_802B57C(void)
{
  char *monName;

  if (sub_802F298() == 3) {
    sub_802F2C0();
    CopyYellowMonsterNametoBuffer(gUnknown_202E5D8, MONSTER_PELIPPER);
    monName = GetMonSpecies(MONSTER_PELIPPER);
    strcpy(gAvailablePokemonNames, monName);
    sub_802B548(2);
  }
}

void sub_802B5B8(void)
{
  u32 uVar2;
  struct unkStruct_203B480 *mail;
  s32 temp;

  if (sub_80144A4(&temp) == 0) {
    uVar2 = sub_8011C34();
    mail = sub_8095228(gUnknown_203B2C8->unk1);
    mail->mailType = WONDER_MAIL_TYPE_AOK;
    mail->unk28 = uVar2;
    sub_802B548(3);
    sub_8011C28(1);
    PrepareSavePakWrite(MONSTER_NONE);
  }
}

void sub_802B5FC(void)
{
  s32 temp;

  if (sub_80144A4(&temp) == 0) {
    if (!WriteSavePak()) {
      FinishWriteSavePak();
      sub_802B548(4);
    }
  }
}


void sub_802B624(void)
{
  s32 temp;

  if (sub_80144A4(&temp) == 0) {
    sub_802B548(5);
  }
}
