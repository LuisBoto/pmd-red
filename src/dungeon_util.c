#include "global.h"
#include "dungeon_util.h"

#include "dungeon_map_access.h"
#include "dungeon_global_data.h"

extern u8 gUnknown_202EE70[0x6];
extern u8 gUnknown_202EE76[0x10];
u32 EntityGetStatusSprites(struct Entity *entity);
void UpdateDungeonPokemonSprite(int id, short species, int status, char visible);

void sub_806C51C(struct Entity *entity);
extern void sub_80462AC(struct Entity * ,u32, u32, u32, u32);
extern void sub_807FA9C();

const struct Position gAdjacentTileOffsets[] = {
    {0, 1},
    {1, 1},
    {1, 0},
    {1, -1},
    {0, -1},
    {-1, -1},
    {-1, 0},
    {-1, 1}
};

bool8 EntityExists(struct Entity *entity)
{
    if (!entity)
    {
        return FALSE;
    }
    return entity->type != ENTITY_NOTHING;
}

u32 GetEntityType(struct Entity *entity)
{
    return entity->type;
}

u8 GetEntityRoom(struct Entity *entity)
{
    return entity->room;
}

struct EntityInfo* GetTrapData(struct Entity *entity)
{
    return entity->info;
}

struct Item* GetItemData(struct Entity *entity)
{
    return (struct Item *)entity->info;
}

struct EntityInfo* GetTrapData_1(struct Entity *entity)
{
    return entity->info;
}

struct Item* GetItemData_1(struct Entity *entity)
{
    return (struct Item*)entity->info;
}

struct Tile* GetTileAtEntity(struct Entity *entity)
{
    return GetTile(entity->pos.x, entity->pos.y);
}

struct Tile* GetTileAtEntitySafe(struct Entity *entity)
{
    return GetTileSafe(entity->pos.x, entity->pos.y);
}

void sub_804513C(void)
{
  s32 index;
  
  for(index = 0; index < MAX_TEAM_MEMBERS; index++)
  {
      gDungeon->teamPokemon[index] = &gDungeon->teamPokemonEntities[index];
      gDungeon->teamPokemon[index]->type = ENTITY_NOTHING;
  }
    
  for(index = 0; index < 6; index++)
  {
      gUnknown_202EE70[index] = 0;
  }
    
  for(index = 0; index < DUNGEON_MAX_WILD_POKEMON; index++)
  {
      gDungeon->wildPokemon[index] = &gDungeon->wildPokemonEntities[index];
      gDungeon->wildPokemon[index]->type = ENTITY_NOTHING;
  }
    
  for(index = 0; index < 0x10; index++)
  {
      gUnknown_202EE76[index] = 0;
  }
    
  for(index = 0; index < DUNGEON_MAX_POKEMON; index++)
  {
      gDungeon->allPokemon[index] = NULL;
  }
    
  for (index = 0; index < 0x40; index++)
  {
      gDungeon->clientPokemon[index] = &gDungeon->clientPokemonEntities[index];
      gDungeon->clientPokemon[index]->type = ENTITY_NOTHING;
  }
    
  for(index = 0; index < 0x40; index++)
  {
      gDungeon->unk1371C[index] = &gDungeon->unk15E2C[index];
      gDungeon->unk1371C[index]->type = ENTITY_NOTHING;
  }
}

void sub_804522C(void) {
    s32 index;
    struct Entity *entity;
    struct Entity *entity2;
    struct EntityInfo *info;
    u32 statusSprites;
    bool8 crossEyed;

    crossEyed = gDungeon->hallucinating;
    if (gDungeon->blinded)
    {
        for(index = 0; index < DUNGEON_MAX_POKEMON; index++)
        {
            entity = gDungeon->allPokemon[index];
            if(EntityExists(entity))
            {
                if(entity == gDungeon->cameraTarget)
                {
                    sub_806C51C(entity);
                }
                else
                {
                    info = entity->info;
                    statusSprites = EntityGetStatusSprites(entity);
                    UpdateDungeonPokemonSprite(info->unk98, info->apparentID, statusSprites, FALSE);
                }
            }
        }
    }
    else
    {
        for(index = 0; index < MAX_TEAM_MEMBERS; index++)
        {
            entity2 = gDungeon->teamPokemon[index];
            if(EntityExists(entity2))
            {
                sub_806C51C(entity2);
            }
        }
        for(index = 0; index < DUNGEON_MAX_WILD_POKEMON; index++)
        {
            entity2 = gDungeon->wildPokemon[index];
            if(EntityExists(entity2))
            {
                sub_806C51C(entity2);
            }
        }
  
        for(index = 0; index < gDungeon->unk3904; index++)
        {
            sub_80462AC(gDungeon->clientPokemon[index], crossEyed, 1, 0xFF, 0);
        }
 
        if(crossEyed)
            sub_807FA9C();
    }
}

void sub_804535C(struct Entity *entity, struct Position32 *pos)
{

  if (pos != NULL) {
    (entity->pixelPos).x = pos->x;
    (entity->pixelPos).y = pos->y;
  }
  else {
    (entity->pixelPos).x = (entity->pos).x * 0x1800 + 0xc00;
    (entity->pixelPos).y = (entity->pos).y * 0x1800 + 0x1000;
  }
}

void sub_8045394(struct Entity *entity, s32 x, s32 y)
{
    entity->pixelPos.x = x;
    entity->pixelPos.y = y;
}

void IncreaseEntityPixelPos(struct Entity *entity, s32 x, s32 y)
{
    entity->pixelPos.x += x;
    entity->pixelPos.y += y;
}

