#ifndef GUARD_CODE_800E9E4_H
#define GUARD_CODE_800E9E4_H

typedef struct unkStruct_80B9CC4
{
    // size: 0x24
    s32 unk0;
    s32 unk4;
    u8 fill8[0x1c - 0x8];
    s32 unk1c;
    u8 fill20[0x24 - 0x20];
} unkStruct_80B9CC4;

typedef struct unkStruct_80BDBC4
{
    // size: 0x24
    s16 unk0;
    s16 unk2;
    s16 unk4;
    s16 unk6;
    u8 unk8;
    u8 unk9;
    u8 fillA[0x0c - 0x0a];
    s32 unkC;
    s32 unk10;
    u8 fill14[0x1c - 0x14];
    s32 unk1C;
    s32 unk20;
} unkStruct_80BDBC4;

u8 sub_800EC74(void);
unkStruct_80B9CC4 *sub_800ECA4(s32);
unkStruct_80BDBC4 *sub_800ECB8(u16);
s16 sub_800ECE4(u8);
s16 sub_800ECF8(u8);
s16 sub_800ED0C(u8);

#endif
