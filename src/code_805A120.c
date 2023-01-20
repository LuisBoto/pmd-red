#include "global.h"
#include "constants/ability.h"
#include "constants/move_id.h"
#include "constants/status.h"
#include "dungeon_entity.h"
#include "dungeon_global_data.h"
#include "dungeon_pokemon_attributes.h"
#include "dungeon_items.h"
#include "dungeon_map_access.h"
#include "dungeon_random.h"
#include "dungeon_util.h"
#include "item.h"
#include "moves.h"
#include "move_effects_target.h"
#include "status.h"
#include "status_actions.h"
#include "code_8077274_1.h"
#include "code_808417C.h"

extern u32 gUnknown_202F210;
extern u8 gAvailablePokemonNames[];
extern u8 gUnknown_202DE58[];
extern u32 gUnknown_8106A4C;
extern u32 gUnknown_8106A50;

extern s16 gUnknown_80F4E94[];
extern u8 *gUnknown_80FC74C[];
extern u8 *gUnknown_80FC790[];
extern u8 *gUnknown_80FC7AC[];
extern u8 *gUnknown_80FD578[];
extern u8 *gUnknown_80FCCE4[];
extern u8 *gUnknown_80FC81C[];
extern u8 *gUnknown_80FC854[];
extern u8 *gUnknown_80FCF7C[];
extern u8 *gUnknown_80FC730[];
extern u16 gUnknown_80F4F42;
extern s16 gUnknown_80F4DF2;
extern u8 *gUnknown_80FC770[];
extern s32 gUnknown_80F51D4[];
extern s16 gUnknown_80F4DD2;
extern u8 *gUnknown_80FCA3C[];
extern u8 *gUnknown_80FD170[];
extern u8 *gUnknown_80FCCE8[];
extern u8 *gUnknown_80FD18C[];
extern u8 *gUnknown_80FD57C[];
extern s16 gUnknown_80F4F82;
extern u8 *gUnknown_80FEBDC[];

extern s16 sub_8057600(struct Move*, u32);
extern void sub_806CDD4(struct Entity *, u32, u32);
extern bool8 sub_80705F0(struct Entity *pokemon, struct Position *pos);
extern u8 sub_8044B28(void);
extern u8 sub_803F428(struct Position *pos);
extern void sub_804539C(struct Entity *, u32, u32);
extern void sub_803E46C(u32);
bool8 sub_80571F0(struct Entity * pokemon, struct Move *move);
extern void sub_807EC28(u32);
extern void sub_806F370(struct Entity *r0, struct Entity *r1, u32, u32, u8 *, u8, s32, u32, u32, u32);
void sub_8075900(struct Entity *pokemon, u8 r1);
extern void sub_804535C(struct Entity *, u32);
extern void sub_804AC20(struct Position *);
extern void sub_806A5B8(struct Entity *entity);
extern void sub_80694C0(struct Entity *, s32, s32, u32);
bool8 sub_80706A4(struct Entity *pokemon, struct Position *pos);
extern void sub_807D148(struct Entity *pokemon, struct Entity *target, u32 r2, struct Position *r3);
extern void SetMessageArgument(u8 *buffer, struct Entity *r1, u32);
void sub_80522F4(struct Entity *r0, struct Entity *r1, char r2[]);
extern void sub_806A6E8(struct Entity *);
extern u32 sub_8055640(struct Entity *, struct Entity *, struct Move *, u32, u32);
extern void sub_807EA30(u32);
extern bool8 sub_805727C(struct Entity *, struct Entity *, s16);
extern void sub_806ABAC(struct Entity *, struct Entity *);
extern u8 sub_807EAA0(u32, u32);
extern void sub_8045C28(struct Item *, u8 , u8);
extern u8 sub_8057308(struct Entity *, u32);
extern void sub_805A7D4(struct Entity *, struct Entity *, struct Item *, struct Position *);
extern void sub_8045394(struct Entity *, s32, s32);
extern void sub_804652C(struct Entity *, struct Entity *, struct Item *, u32, struct Position *);

bool8 sub_805A120(struct Entity * pokemon,struct Entity * target, struct Move *move, u32 param_4)
{
  struct EntityInfo *r9;
  struct EntityInfo *r8;
  struct EntityInfo *r7;
  struct EntityInfo *sp;
  struct Item item;
  bool32 flag;
  struct Item *item1;
  struct Item *item2;
  
  flag = FALSE;
  r9 = pokemon->info;
  r7 = r9;
  r8 = target->info;
  sp = r8;
  
  SetMessageArgument(gAvailablePokemonNames,pokemon,0);
  SetMessageArgument(gAvailablePokemonNames + 0x50,target,0);
  if (HasAbility(target, ABILITY_STICKY_HOLD)) {
    sub_80522F4(pokemon,target,*gUnknown_80FCCE4);
    return FALSE;
  }
  else
  {
    if (HasHeldItem(target, ITEM_ALERT_SPECS)) {
      sub_80522F4(pokemon,target,*gUnknown_80FD578);
      return FALSE;
    }
    else
    {
      item1 = &r9->heldItem;
      item2 = &r8->heldItem;
      if (!(item1->flags & ITEM_FLAG_EXISTS))
        flag = 1;

      if(!(item2->flags & ITEM_FLAG_EXISTS)) 
        flag = 1;
      
      if (flag)
      {
        sub_80522F4(pokemon,target,*gUnknown_80FC7AC);   
        return FALSE;
      }
      else
      {
        item = r7->heldItem;
        r7->heldItem = sp->heldItem;
        sp->heldItem = item;
        sub_806A6E8(pokemon);
        sub_806A6E8(target);
        if (r7->unkFB == 0) {
          r7->unkFB = 1;
        }
        sub_80522F4(pokemon,target,*gUnknown_80FC790);
        return TRUE;
      }
    }
  }
}

bool8 sub_805A210(struct Entity * pokemon, struct Entity * target, struct Move *move, u32 param_4)
{
    bool8 flag;

    gUnknown_202F210++;
    flag = sub_8055640(pokemon, target, move, gUnknown_202F210 << 8, param_4) ? TRUE : FALSE;
    return flag;
}

bool8 sub_805A23C(struct Entity * pokemon, struct Entity * target, struct Move *move, u32 param_4)
{
    if(move->id == MOVE_MUD_SPORT)
    {
        sub_807EA30(0);

    }
    else
    {
        sub_807EA30(1);
    }
    return TRUE;
}


bool8 sub_805A258(struct Entity *pokemon, struct Entity *target, struct Move *move, u32 param_4)
{
  bool8 flag;
  
  flag = FALSE;
  if (sub_8055640(pokemon,target,move,0x100,param_4) != 0) {
    flag = TRUE;
    if(sub_805727C(pokemon, target, 0))
    {
        LowerAccuracyStageTarget(pokemon, target, gUnknown_8106A4C, FALSE);
    }
  }
  return flag;
}

bool8 sub_805A2A0(struct Entity *pokemon, struct Entity *target, struct Move *move, u32 param_4)
{
    return sub_805BA50(pokemon, target, move, param_4);
}

bool8 sub_805A2B0(struct Entity *pokemon, struct Entity *target, struct Move *move, u32 param_4)
{
    RaiseDefenseStageTarget(pokemon, target, gUnknown_8106A50, 2);
    return TRUE;
}

bool8 sub_805A2C8(struct Entity *pokemon, struct Entity *target, struct Move *move, u32 param_4)
{
    LowerAttackStageTarget(pokemon, target, gUnknown_8106A4C, 1, 1, TRUE);
    return TRUE;
}

bool8 sub_805A2E8(struct Entity *pokemon, struct Entity *target, struct Move *move, u32 param_4)
{
  bool8 flag;
  u32 uVar2;
  
  flag = FALSE;
  if (target->info->chargingStatus == STATUS_DIVING) {
      uVar2 = 0x200;
  }
  else
  {
      uVar2 = 0x100;
  }
  if(sub_8055640(pokemon,target,move,uVar2,param_4) != 0)
    flag = TRUE;
  return flag;
}

bool8 sub_805A31C(struct Entity *pokemon, struct Entity *target, struct Move *move, u32 param_4)
{
  struct EntityInfo * iVar3;
  struct EntityInfo * iVar4;
  
  iVar3 = pokemon->info;
  iVar4 = target->info;
  if (HasAbility(target,0x35)) {
    sub_80522F4(pokemon,target,*gUnknown_80FC854);
    return FALSE;
  }
  else
  {
    iVar3->abilities[0] = iVar4->abilities[0];
    iVar3->abilities[1] = iVar4->abilities[1];
    gDungeon->unkC = 1;
    if (iVar3->unkFB == 0) {
      iVar3->unkFB = 1;
    }
    sub_80522F4(pokemon,target,*gUnknown_80FC81C);
    sub_806ABAC(pokemon, pokemon);
    return TRUE;
  }
}

bool8 sub_805A394(struct Entity *pokemon, struct Entity *target, struct Move *move, u32 param_4)
{
  gDungeon->unkE267[1] = gUnknown_80F4F42;
  if (sub_807EAA0(1,0) == 0) {
    sub_80522F4(pokemon,target,*gUnknown_80FCF7C);
  }
  return TRUE;
}

bool8 sub_805A3DC(struct Entity *pokemon, struct Entity *target, struct Move *move, u32 param_4)
{
    LowerDefenseStageTarget(pokemon, target, gUnknown_8106A4C, 1, 1, TRUE);
    return TRUE;
}

// Wish Move Action
bool8 sub_805A3FC(struct Entity *pokemon, struct Entity *target, struct Move *move, u32 param_4)
{
    WishStatusTarget(pokemon, target);
    return TRUE;
}

bool8 sub_805A408(struct Entity *pokemon, struct Entity *target, struct Move *move, u32 param_4)
{
  bool8 flag;
  
  flag = FALSE;
  if (sub_8055640(pokemon,target,move,0x100,param_4) != 0) {
    flag = TRUE;
    if(sub_805727C(pokemon, target, gUnknown_80F4DF2))
    {
        CringeStatusTarget(pokemon, target, FALSE);
    }
  }
  return flag;
}

bool8 sub_805A450(struct Entity *pokemon, struct Entity *target, struct Move *move, u32 param_4)
{
  sub_80522F4(pokemon,target,*gUnknown_80FC730);
  return FALSE;
}

bool8 sub_805A464(struct Entity *pokemon, struct Entity *target, struct Move *move, u32 param_4)
{
  bool32 flag;
  struct Item item;
  struct Position pos;
  
  flag = FALSE;
  if (sub_8055640(pokemon, target, move, 0x100, param_4) != 0) {
    flag = TRUE;
    if (sub_8057308(pokemon, 0) != 0) {
      if (!EntityExists(target)) {
        pos.x = 0;
        pos.y = 0;
        sub_8045C28(&item,0x69,2);
        sub_805A7D4(pokemon,target,&item,&pos);
      }
    }
  }
  return flag;
}

bool8 sub_805A4C0(struct Entity *pokemon, struct Entity *target, struct Move *move, u32 param_4)
{
  sub_80522F4(pokemon,target,*gUnknown_80FC74C);
  return FALSE;
}

bool8 sub_805A4D4(struct Entity *pokemon, struct Entity *target, struct Move *move, u32 param_4)
{
    NappingStatusTarget(pokemon, target, CalculateStatusTurns(target, gUnknown_80F4E94, FALSE));
    return TRUE;
}

bool8 sub_805A4FC(struct Entity *pokemon, struct Entity *target, struct Move *move, u32 param_4)
{
    IngrainedStatusTarget(pokemon, target);
    return TRUE;
}

bool8 sub_805A508(struct Entity *pokemon, struct Entity *target, struct Move *move, u32 param_4) 
{
  u8 *stockpileStage;
  
  stockpileStage = &target->info->stockpileStage;
  if (*stockpileStage != 0) {
    HealTargetHP(pokemon,target,gUnknown_80F51D4[*stockpileStage],0,TRUE);
    *stockpileStage = 0;
  }
  else {
    sub_80522F4(pokemon,target,*gUnknown_80FC770);
  }
  return TRUE;
}

// Curse Move Action
bool8 sub_805A55C(struct Entity *pokemon, struct Entity *target, struct Move *move, u32 param_4)
{
    CurseStatusTarget(pokemon, target);
    return TRUE;
}

bool8 sub_805A568(struct Entity * pokemon, struct Entity * target, struct Move *move, u32 param_4)
{
    bool8 flag;

    flag = sub_8055640(pokemon, target, move, 0x100, param_4) ? TRUE : FALSE;
    return flag;
}

bool8 sub_805A588(struct Entity *pokemon, struct Entity *target, struct Move *move, u32 param_4) 
{
  u32 stat;
  bool32 flag;
  
  flag = FALSE;
  if (sub_8055640(pokemon, target, move, 0x100, param_4) != 0) {
    flag = TRUE;
    if (sub_805727C(pokemon,pokemon,0) != 0) {
      stat = gUnknown_8106A4C;
      LowerAttackStageTarget(pokemon,pokemon,stat,1,0,FALSE);
      LowerDefenseStageTarget(pokemon,pokemon,stat,1,0,FALSE);
    }
  }
  return flag;
}

bool8 sub_805A5E8(struct Entity *pokemon, struct Entity *target, struct Move *move, u32 stat, u32 param_5) 
{
  struct EntityInfo *iVar2;
  bool32 flag;
  
  flag = FALSE;
  if (sub_8055640(pokemon,target,move,0x100,param_5) != 0) {
    flag = TRUE;
    if (sub_805727C(pokemon,pokemon,gUnknown_80F4DD2) != 0) {
      iVar2 = pokemon->info;
      RaiseDefenseStageTarget(pokemon,pokemon,stat,1);
      if (iVar2->unkFB == 0) {
        iVar2->unkFB = 1;
      }
    }
  }
  return flag;
}

bool8 SpitUpMoveAction(struct Entity *pokemon, struct Entity *target, struct Move *move, u32 param_4) 
{
  u8 *stockpileStage;
  
  stockpileStage = &pokemon->info->stockpileStage;
  if (*stockpileStage != 0) {
    sub_8055640(pokemon,target,move,*stockpileStage << 8,param_4);
    *stockpileStage = 0;
  }
  else {
    sub_80522F4(pokemon,target,*gUnknown_80FCA3C);
  }
  return TRUE;
}

bool8 sub_805A688(struct Entity *pokemon, struct Entity *target, struct Move *move, u32 param_4)
{
  bool8 flag;
  
  flag = FALSE;
  if (sub_8055640(pokemon,target,move,0x100,param_4) != 0) {
    flag = TRUE;
    if(sub_805727C(pokemon, target, 0))
    {
        ConfuseStatusTarget(pokemon, target, FALSE);
    }
  }
  return flag;
}

// Knock Off Move Action
bool8 sub_805A6C8(struct Entity *pokemon, struct Entity *target, struct Move *move, u32 param_4) 
{
  struct EntityInfo *iVar2;
  struct EntityInfo *iVar6;
  struct EntityInfo *iVar7;
  struct Item heldItem;
  struct Position pos;
  struct Item *itemPtr;
  u32 flag;
  u32 itemFlag;
  
  iVar2 = pokemon->info;
  iVar6 = target->info;
  iVar7 = iVar6;
  SetMessageArgument(gAvailablePokemonNames, pokemon, 0);
  SetMessageArgument(gAvailablePokemonNames + 0x50, target, 0);
  if (HasAbility(target, ABILITY_STICKY_HOLD)) {
    sub_80522F4(pokemon,target,*gUnknown_80FCCE8);
    return FALSE;
  }
  else
  {
    if (HasHeldItem(target, ITEM_ALERT_SPECS)) {
      sub_80522F4(pokemon,target,*gUnknown_80FD57C);
       return FALSE;
    }
    else
    {
      heldItem = iVar6->heldItem;
      itemFlag = heldItem.flags;
      flag = ITEM_FLAG_EXISTS;
      flag &= itemFlag;
      if (flag == 0) {
        sub_80522F4(pokemon,target,*gUnknown_80FD18C);
        return FALSE;
      }
      else
      {
        itemPtr = &iVar7->heldItem;
        itemPtr->id = ITEM_NOTHING;
        itemPtr->quantity = 0;
        itemPtr->flags = 0;
        sub_80522F4(pokemon,target,*gUnknown_80FD170); // $m1's item was swatted down!
        pos.x = gAdjacentTileOffsets[iVar2->action.direction].x;
        pos.y = gAdjacentTileOffsets[iVar2->action.direction].y;
        sub_805A7D4(pokemon,target,&heldItem,&pos);
        if (sub_80706A4(target, &target->pos) != 0) {
          sub_807D148(pokemon, target, 0, NULL);
        }
        return TRUE;
      }
    }
  }
}

void sub_805A7D4(struct Entity * pokemon, struct Entity * target, struct Item *item, struct Position *pos)
{
  struct Entity stackEntity;
  
  stackEntity.type = ENTITY_ITEM;
  stackEntity.unk24 = 0;
  stackEntity.isVisible = TRUE;
  stackEntity.unk22 = 0;
  stackEntity.info = (struct EntityInfo*) item;
  stackEntity.pos.x = target->pos.x + pos->x;
  stackEntity.pos.y = target->pos.y + pos->y;
  sub_8045394(&stackEntity,(target->pos.x * 0x18 + 4) * 0x100,
              (target->pos.y * 0x18 + 4) * 0x100);
  stackEntity.spawnGenID = 0;
  SetMessageArgument(gUnknown_202DE58,&stackEntity,0);
  sub_804652C(pokemon,&stackEntity,item,1,0);
}

bool8 sub_805A85C(struct Entity * pokemon, struct Entity * target, struct Move *move, u32 param_4)
{
  int r4;
  int r2;
  int r5;
  struct Position *r9;
  struct Position sp_0x18;
  struct Move sp_0x1C;
  struct Position32 sp_0x28;
  struct Tile *tile;
  struct Entity *entity;
  s32 temp;
  s32 temp2;
  u8 check;

  
  sp_0x18 = target->pos;
  sub_806CDD4(target,10,8);

  for(r5 = 0; r5 < 0x28; r5++)
  {
    r4 = DungeonRandInt(3);
    r2 = DungeonRandInt(3);
    r4--;
    r2--;
    if ((r4 != 0) || (r2 != 0)) {
      sp_0x18.x = target->pos.x + r4;
      sp_0x18.y = target->pos.y + r2;
      if (sub_80705F0(target,&sp_0x18) == 0) goto _0805A8C2;
    }
  }
_0805A8C2:
  if (r5 == 0x28) {
    sub_80522F4(pokemon,target,*gUnknown_80FEBDC);
    return FALSE;
  }
  temp = sp_0x18.x * 0x1800;
  temp += (0xC00);
  sp_0x28.x =  (temp - target->pixelPos.x) / 0xc;

  temp2 = sp_0x18.y * 0x1800;
  temp2 += (0x80 << 5);
  sp_0x28.y = ((temp2 - target->pixelPos.y) / 0xc);


  if (((check = sub_803F428(&target->pos), r9 = &target->pos, check != 0)) || (sub_803F428(&sp_0x18) != 0)) {
    for(r5 = 0; r5 < 0xC; r5++)
    {
      sub_804539C(target,sp_0x28.x,sp_0x28.y);
      sub_803E46C(0x2c);
    }
  }
  tile = GetTileSafe(sp_0x18.x,sp_0x18.y);
  entity = tile->monster;
  if (entity != 0) {
    if (GetEntityType(entity) == 1) {
      InitPokemonMove(&sp_0x1C,0x163);
      if (sub_80571F0(entity,&sp_0x1C) == 0) {
        sub_806F370(pokemon,entity,gUnknown_80F4F82,0,0,0,sub_8057600(move, param_4),0,1,0);
      }
      if ((sub_8044B28() == 0) && (EntityExists(pokemon))) {
        sub_806F370(pokemon,pokemon,gUnknown_80F4F82,0,0,0,0x1fe,0,0,0);
        if ((sub_8044B28() == 0) && (EntityExists(pokemon))) goto _0805A9FE;
      }
    }
    else {
_0805A9FE:
      if (EntityExists(target)) {
        if ((sub_803F428(r9) != 0) || (sub_803F428(&sp_0x18) != 0)) {
          for(r5 = 0; r5 < 0xC; r5++)
          {
            sub_804539C(target, -sp_0x28.x,-sp_0x28.y);
            sub_803E46C(0x2c);
          }
        }
        goto _0805AA5E;
      }
    }
  }
  else
  {
    sub_80694C0(target,sp_0x18.x,sp_0x18.y,0);
_0805AA5E:
    if (EntityExists(target)) {
      register struct Position *pos asm("r1");
      sub_804535C(target, 0);
      pos = r9;
      if (sub_80706A4(target, pos) != 0) {
        sub_807D148(pokemon,target,0,0);
      }
      if (target->info->isTeamLeader) {
        sub_804AC20(r9);
        sub_807EC28(0);
      }
      sub_806A5B8(target);
      sub_8075900(target,gDungeon->unk3A08);
    }
  }
  return TRUE;
}
