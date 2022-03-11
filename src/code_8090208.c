#include "global.h"
#include "dungeon.h"
#include "code_800D090.h"

extern const char gUnknown_8108F10[];
extern const char gUnknown_8108F18[];
extern const char gUnknown_8108F2C[];

struct unkDungeonStruct
{
    u8 index;
    u8 floor;
};

void sub_8090208(u8 *buffer, struct unkDungeonStruct *dungeonLocation)
{
    sprintf_2(buffer, gUnknown_8108F10, gDungeonNames[dungeonLocation->index].name1); // {COLOR_2 YELLOW_4}%s{END_COLOR_TEXT_2} (normal floor print (no B)
}

void PrintDungeonLocationtoBuffer(u8 *buffer, struct unkDungeonStruct *dungeonLocation)
{
    if(gDungeons[dungeonLocation->index].stairDirection != 0){
        sprintf_2(buffer, gUnknown_8108F18, gDungeonNames[dungeonLocation->index].name1, dungeonLocation->floor); //_F
    }
    else
    {
        sprintf_2(buffer, gUnknown_8108F2C, gDungeonNames[dungeonLocation->index].name1, dungeonLocation->floor); // B _F
    }
}

void CopyDungeonName1toBuffer(u8 *buffer, struct unkDungeonStruct *dungeonLocation)
{
    strncpy(buffer, gDungeonNames[dungeonLocation->index].name1, 0x50);
}
