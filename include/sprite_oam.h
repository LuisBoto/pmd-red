#ifndef GUARD_SPRITE_OAM_H
#define GUARD_SPRITE_OAM_H

// size: 0x8. Similar to struct OamData but unk6 is not copied to OAM
struct SpriteOAM
{
    // y:8  affineMode1:1  affineMode2:1  objMode:2  mosaic:1  bpp:1  shape:2
    /* 0x0 */ u16 atrib1;
    // x:9  matrixNum:5  size:2
    /* 0x2 */ u16 atrib2;
    // tileNum:10  priority:2  paletteNum:4
    /* 0x4 */ u16 atrib3;
    // unk6_0:1  unk6_1:1 unk6_2:2?  unk6_4:12
    u16 unk6;
};

// The SpriteOAM struct is handled with macros most likely.
// Most funcs that deal with it look the same and do some weird bit manipulations one by one on the attributes.

// atrib1

#define SPRITEOAM_MAX_Y 0xFF
#define SPRITEOAM_SHIFT_Y 0
#define SPRITEOAM_MASK_Y (SPRITEOAM_MAX_Y << SPRITEOAM_SHIFT_Y)

#define SPRITEOAM_MAX_AFFINEMODE1 1
#define SPRITEOAM_SHIFT_AFFINEMODE1 8
#define SPRITEOAM_MASK_AFFINEMODE1 (SPRITEOAM_MAX_AFFINEMODE1 << SPRITEOAM_SHIFT_AFFINEMODE1)

#define SPRITEOAM_MAX_AFFINEMODE2 1
#define SPRITEOAM_SHIFT_AFFINEMODE2 9
#define SPRITEOAM_MASK_AFFINEMODE2 (SPRITEOAM_MAX_AFFINEMODE2 << SPRITEOAM_SHIFT_AFFINEMODE2)

#define SPRITEOAM_MAX_OBJMODE 3
#define SPRITEOAM_SHIFT_OBJMODE 10
#define SPRITEOAM_MASK_OBJMODE (SPRITEOAM_MAX_OBJMODE << SPRITEOAM_SHIFT_OBJMODE)

#define SPRITEOAM_MAX_MOSAIC 1
#define SPRITEOAM_SHIFT_MOSAIC 12
#define SPRITEOAM_MASK_MOSAIC (SPRITEOAM_MAX_MOSAIC << SPRITEOAM_SHIFT_MOSAIC)

#define SPRITEOAM_MAX_BPP 1
#define SPRITEOAM_SHIFT_BPP 13
#define SPRITEOAM_MASK_BPP (SPRITEOAM_MAX_BPP << SPRITEOAM_SHIFT_BPP)

#define SPRITEOAM_MAX_SHAPE 3
#define SPRITEOAM_SHIFT_SHAPE 14
#define SPRITEOAM_MASK_SHAPE (SPRITEOAM_MAX_SHAPE << SPRITEOAM_SHIFT_SHAPE)

// atrib2

#define SPRITEOAM_MAX_X 0x1FF
#define SPRITEOAM_SHIFT_X 0
#define SPRITEOAM_MASK_X (SPRITEOAM_MAX_X << SPRITEOAM_SHIFT_X)

#define SPRITEOAM_MAX_MATRIXNUM 0x1F
#define SPRITEOAM_SHIFT_MATRIXNUM 9
#define SPRITEOAM_MASK_MATRIXNUM (SPRITEOAM_MAX_MATRIXNUM << SPRITEOAM_SHIFT_MATRIXNUM)

#define SPRITEOAM_MAX_SIZE 3
#define SPRITEOAM_SHIFT_SIZE 12
#define SPRITEOAM_MASK_SIZE (SPRITEOAM_MAX_SIZE << SPRITEOAM_SHIFT_SIZE)

// atrib3

#define SPRITEOAM_MAX_TILENUM 0x3FF
#define SPRITEOAM_SHIFT_TILENUM 0
#define SPRITEOAM_MASK_TILENUM (SPRITEOAM_MAX_TILENUM << SPRITEOAM_SHIFT_TILENUM)

#define SPRITEOAM_MAX_PRIORITY 3
#define SPRITEOAM_SHIFT_PRIORITY 10
#define SPRITEOAM_MASK_PRIORITY (SPRITEOAM_MAX_PRIORITY << SPRITEOAM_SHIFT_PRIORITY)

#define SPRITEOAM_MAX_PALETTENUM 0xF
#define SPRITEOAM_SHIFT_PALETTENUM 12
#define SPRITEOAM_MASK_PALETTENUM (SPRITEOAM_MAX_PALETTENUM << SPRITEOAM_SHIFT_PALETTENUM)

// unk6

#define SPRITEOAM_MAX_UNK6_0 1
#define SPRITEOAM_SHIFT_UNK6_0 0
#define SPRITEOAM_MASK_UNK6_0 (SPRITEOAM_MAX_UNK6_0 << SPRITEOAM_SHIFT_UNK6_0)

#define SPRITEOAM_MAX_UNK6_1 1
#define SPRITEOAM_SHIFT_UNK6_1 1
#define SPRITEOAM_MASK_UNK6_1 (SPRITEOAM_MAX_UNK6_1 << SPRITEOAM_SHIFT_UNK6_1)

#define SPRITEOAM_MAX_UNK6_4 0xFFF
#define SPRITEOAM_SHIFT_UNK6_4 4
#define SPRITEOAM_MASK_UNK6_4 (SPRITEOAM_MAX_UNK6_4 << SPRITEOAM_SHIFT_UNK6_4)

#endif // GUARD_SPRITE_OAM_H