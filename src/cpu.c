#include "global.h"
#include "bg_control.h"
#include "cpu.h"

extern u32 gUnknown_202D800;
extern u16 gUnknown_203B0BE[];
extern u16 *gUnknown_2026E3C;
extern u8 gUnknown_2026E38;

void sub_800CDA8(u32 r0)
{
    gUnknown_202D800 = r0;
    gBldCnt = gUnknown_203B0BE[r0];
}

u32 sub_800CDC8(void)
{
    return gUnknown_202D800;
}

void SetWindowTitle(u8 *title)
{
}

void nullsub_23(bool8 a0)
{
}

UNUSED static void nullsub_182(void)
{
}

UNUSED static bool8 sub_800CDE0(void)
{
    return TRUE;
}

void CpuCopy(void *dest, void *src, s32 size)
{
    CpuCopy32(src, dest, size);
}

void CpuClear(void *dest, s32 size)
{
    CpuFill32(NULL, dest, size);
}

void CpuFill(void *dest, void *value, s32 size)
{
    CpuFill32(value, dest, size);
}

void VBlank_CB(void)
{
    // Looks like a macro?
    u16 cnt = REG_DMA0CNT_H;
    cnt |= DMA_ENABLE;
    cnt &= ~(DMA_START_HBLANK | DMA_START_VBLANK | DMA_REPEAT);
    REG_DMA0CNT_H = cnt;
    asm("mov \tr8, r8");
    asm("mov \tr8, r8");
    asm("mov \tr8, r8");
    asm("mov \tr8, r8");
    REG_DMA0CNT_H = cnt & ~(DMA_ENABLE);

    REG_WININ = WININ_WIN0_ALL | WININ_WIN1_ALL;
    REG_WINOUT = WINOUT_WIN01_OBJ | WINOUT_WIN01_CLR | WINOUT_WIN01_BG3 | WINOUT_WIN01_BG2 | WINOUT_WIN01_BG0;
    REG_BLDCNT = gBldCnt;
    REG_BLDALPHA = gBldAlpha;
    if (gUnknown_2026E38 != 0) {
        DmaSet(0, &gUnknown_2026E3C[2], REG_ADDR_WIN0H, 0xA2600002);
        REG_WIN0H = gUnknown_2026E3C[0];
        REG_WIN1H = gUnknown_2026E3C[1];
        REG_WIN0V = DISPLAY_HEIGHT;
        REG_WIN1V = DISPLAY_HEIGHT;
    }
    else {
        REG_WIN0H = 0;
        REG_WIN1H = 0;
        REG_WIN0V = 0;
        REG_WIN1V = 0;
    }
}
