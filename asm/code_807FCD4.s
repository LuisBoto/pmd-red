	#include "asm/constants/gba_constants.inc"
  	#include "asm/macros.inc"

  	.syntax unified

  	.text

	thumb_func_start HandlePPZeroTrap
HandlePPZeroTrap:
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	sub sp, 0x20
	mov r8, r0
	adds r5, r1, 0
	movs r0, 0
	mov r12, r0
	cmp r5, 0
	beq _080807A4
	ldr r7, [r5, 0x70]
	movs r4, 0
	movs r3, 0
	mov r6, sp
_0808071C:
	lsls r0, r3, 3
	movs r1, 0x8C
	lsls r1, 1
	adds r0, r1
	adds r2, r7, r0
	ldrb r1, [r2]
	movs r0, 0x1
	ands r0, r1
	cmp r0, 0
	beq _08080742
	ldrb r0, [r2, 0x4]
	cmp r0, 0
	beq _08080742
	lsls r1, r4, 2
	stm r6!, {r2}
	add r0, sp, 0x10
	adds r0, r1
	str r3, [r0]
	adds r4, 0x1
_08080742:
	adds r3, 0x1
	cmp r3, 0x3
	ble _0808071C
	cmp r4, 0
	beq _0808077A
	adds r0, r4, 0
	bl DungeonRandInt
	adds r4, r0, 0
	lsls r4, 2
	mov r0, sp
	adds r2, r0, r4
	ldr r1, [r2]
	movs r0, 0
	strb r0, [r1, 0x4]
	ldr r0, _08080790
	ldr r1, [r2]
	movs r2, 0
	bl sub_80928C0
	add r0, sp, 0x10
	adds r0, r4
	ldr r1, [r0]
	adds r0, r5, 0
	bl sub_806A9B4
	movs r1, 0x1
	mov r12, r1
_0808077A:
	mov r0, r12
	cmp r0, 0
	beq _08080798
	ldr r0, _08080794
	ldr r2, [r0]
	mov r0, r8
	adds r1, r5, 0
	bl sub_80522F4
	b _080807A4
	.align 2, 0
_08080790: .4byte gUnknown_202DE58
_08080794: .4byte gUnknown_80FDA80
_08080798:
	ldr r0, _080807B0
	ldr r2, [r0]
	mov r0, r8
	adds r1, r5, 0
	bl sub_80522F4
_080807A4:
	add sp, 0x20
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r0}
	bx r0
	.align 2, 0
_080807B0: .4byte gUnknown_80FDAA0
	thumb_func_end HandlePPZeroTrap

	thumb_func_start HandleWonderTile
HandleWonderTile:
	push {lr}
	movs r2, 0
	bl sub_8079E34
	pop {r0}
	bx r0
	thumb_func_end HandleWonderTile

	thumb_func_start HandleSealTrap
HandleSealTrap:
	push {r4-r7,lr}
	mov r7, r9
	mov r6, r8
	push {r6,r7}
	sub sp, 0x10
	mov r8, r0
	adds r7, r1, 0
	movs r0, 0
	mov r9, r0
	cmp r7, 0
	beq _08080870
	mov r0, r8
	movs r2, 0x1
	bl HasSafeguardStatus
	lsls r0, 24
	cmp r0, 0
	bne _08080870
	ldr r0, [r7, 0x70]
	movs r5, 0
	movs r6, 0x1
	movs r1, 0x8C
	lsls r1, 1
	adds r2, r0, r1
	adds r3, r2, 0
	mov r12, sp
	movs r4, 0x3
_080807F6:
	ldrb r1, [r2]
	adds r0, r6, 0
	ands r0, r1
	cmp r0, 0
	beq _08080816
	ldrb r1, [r2, 0x1]
	adds r0, r6, 0
	ands r0, r1
	cmp r0, 0
	bne _08080816
	mov r0, r12
	adds r0, 0x4
	mov r12, r0
	subs r0, 0x4
	stm r0!, {r3}
	adds r5, 0x1
_08080816:
	adds r2, 0x8
	adds r3, 0x8
	subs r4, 0x1
	cmp r4, 0
	bge _080807F6
	cmp r5, 0
	beq _08080848
	adds r0, r5, 0
	bl DungeonRandInt
	lsls r0, 2
	mov r1, sp
	adds r3, r1, r0
	ldr r2, [r3]
	ldrb r1, [r2, 0x1]
	movs r0, 0x1
	orrs r0, r1
	strb r0, [r2, 0x1]
	ldr r0, _0808085C
	ldr r1, [r3]
	movs r2, 0
	bl sub_80928C0
	movs r0, 0x1
	mov r9, r0
_08080848:
	mov r1, r9
	cmp r1, 0
	beq _08080864
	ldr r0, _08080860
	ldr r2, [r0]
	mov r0, r8
	adds r1, r7, 0
	bl sub_80522F4
	b _08080870
	.align 2, 0
_0808085C: .4byte gUnknown_202DE58
_08080860: .4byte gUnknown_80FDB04
_08080864:
	ldr r0, _08080880
	ldr r2, [r0]
	mov r0, r8
	adds r1, r7, 0
	bl sub_80522F4
_08080870:
	add sp, 0x10
	pop {r3,r4}
	mov r8, r3
	mov r9, r4
	pop {r4-r7}
	pop {r0}
	bx r0
	.align 2, 0
_08080880: .4byte gUnknown_80FDB2C
	thumb_func_end HandleSealTrap

	thumb_func_start HandleWhirlwindTrap
HandleWhirlwindTrap:
	push {r4,r5,lr}
	adds r5, r0, 0
	adds r4, r1, 0
	cmp r4, 0
	beq _0808089E
	movs r0, 0x8
	bl DungeonRandInt
	adds r2, r0, 0
	adds r0, r5, 0
	adds r1, r4, 0
	bl sub_807CD9C
_0808089E:
	pop {r4,r5}
	pop {r0}
	bx r0
	thumb_func_end HandleWhirlwindTrap

	thumb_func_start HandlePokemonTrap
HandlePokemonTrap:
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, 0x30
	str r0, [sp, 0x14]
	adds r5, r1, 0
	movs r0, 0
	str r0, [sp, 0x20]
	ldr r6, _080808D0
	ldr r0, [r6]
	ldr r1, _080808D4
	adds r0, r1
	ldrb r4, [r0]
	bl IsBossFight
	lsls r0, 24
	cmp r0, 0
	beq _080808DC
	ldr r0, _080808D8
	b _08080A2E
	.align 2, 0
_080808D0: .4byte gDungeon
_080808D4: .4byte 0x00018209
_080808D8: .4byte gUnknown_80FED08
_080808DC:
	cmp r4, 0
	bne _080808E2
	movs r4, 0x2
_080808E2:
	movs r2, 0
	ldrsh r0, [r5, r2]
	movs r3, 0x2
	ldrsh r1, [r5, r3]
	bl GetTile
	ldrb r1, [r0, 0x9]
	cmp r1, 0xFF
	bne _0808090A
	movs r0, 0
	ldrsh r1, [r5, r0]
	subs r2, r1, r4
	str r2, [sp, 0x18]
	movs r3, 0x2
	ldrsh r0, [r5, r3]
	subs r2, r0, r4
	adds r1, r4
	mov r10, r1
	adds r0, r4
	b _08080934
_0808090A:
	lsls r0, r1, 3
	subs r0, r1
	lsls r0, 2
	ldr r1, _08080994
	adds r0, r1
	ldr r1, [r6]
	adds r1, r0
	movs r2, 0x2
	ldrsh r0, [r1, r2]
	subs r0, 0x1
	str r0, [sp, 0x18]
	movs r3, 0x4
	ldrsh r0, [r1, r3]
	subs r2, r0, 0x1
	movs r3, 0x6
	ldrsh r0, [r1, r3]
	adds r0, 0x1
	mov r10, r0
	movs r3, 0x8
	ldrsh r0, [r1, r3]
	adds r0, 0x1
_08080934:
	str r0, [sp, 0x1C]
	adds r7, r2, 0
	ldr r0, [sp, 0x1C]
	cmp r7, r0
	bgt _08080A26
_0808093E:
	ldr r6, [sp, 0x18]
	adds r1, r7, 0x1
	str r1, [sp, 0x24]
	cmp r6, r10
	bgt _08080A1E
	mov r5, sp
_0808094A:
	adds r0, r6, 0
	adds r1, r7, 0
	bl GetTile
	adds r4, r0, 0
	ldr r0, [r4, 0x14]
	adds r2, r6, 0x1
	mov r9, r2
	cmp r0, 0
	beq _08080A18
	bl GetEntityType
	cmp r0, 0x3
	bne _08080A18
	ldr r0, [r4, 0x14]
	bl GetItemData
	ldrb r1, [r0]
	movs r0, 0x2
	ands r0, r1
	cmp r0, 0
	bne _08080A18
	movs r0, 0xBE
	lsls r0, 1
	strh r0, [r5]
	movs r2, 0
	mov r4, sp
_08080980:
	ldr r0, _08080998
	ldr r0, [r0]
	ldr r3, _0808099C
	adds r0, r3
	ldrb r0, [r0]
	cmp r0, 0
	beq _080809A0
	movs r0, 0xBE
	lsls r0, 1
	b _080809AE
	.align 2, 0
_08080994: .4byte 0x000104c4
_08080998: .4byte gDungeon
_0808099C: .4byte 0x0000066e
_080809A0:
	movs r0, 0
	str r2, [sp, 0x28]
	bl sub_803D970
	lsls r0, 16
	asrs r0, 16
	ldr r2, [sp, 0x28]
_080809AE:
	movs r1, 0
	mov r8, r1
	movs r3, 0
	strh r0, [r4]
	movs r1, 0
	ldrsh r0, [r4, r1]
	movs r1, 0
	str r2, [sp, 0x28]
	str r3, [sp, 0x2C]
	bl sub_806AA0C
	lsls r0, 24
	ldr r2, [sp, 0x28]
	ldr r3, [sp, 0x2C]
	cmp r0, 0
	bne _080809D4
	adds r2, 0x1
	cmp r2, 0x63
	ble _08080980
_080809D4:
	movs r2, 0
	ldrsh r0, [r5, r2]
	movs r1, 0
	str r3, [sp, 0x2C]
	bl sub_806AA0C
	lsls r0, 24
	ldr r3, [sp, 0x2C]
	cmp r0, 0
	beq _08080A10
	strh r3, [r5, 0x8]
	mov r0, r8
	strb r0, [r5, 0x2]
	strh r6, [r5, 0xC]
	strh r7, [r5, 0xE]
	str r3, [sp, 0x4]
	strb r0, [r5, 0x10]
	mov r0, sp
	movs r1, 0x1
	bl sub_806B7F8
	cmp r0, 0
	beq _08080A10
	add r0, sp, 0xC
	movs r1, 0
	bl sub_80461C8
	ldr r1, [sp, 0x20]
	adds r1, 0x1
	str r1, [sp, 0x20]
_08080A10:
	adds r0, r6, 0
	adds r1, r7, 0
	bl sub_80402AC
_08080A18:
	mov r6, r9
	cmp r6, r10
	ble _0808094A
_08080A1E:
	ldr r7, [sp, 0x24]
	ldr r2, [sp, 0x1C]
	cmp r7, r2
	ble _0808093E
_08080A26:
	ldr r3, [sp, 0x20]
	cmp r3, 0
	beq _08080A3C
	ldr r0, _08080A38
_08080A2E:
	ldr r1, [r0]
	ldr r0, [sp, 0x14]
	bl SendMessage
	b _08080A46
	.align 2, 0
_08080A38: .4byte gUnknown_80FDACC
_08080A3C:
	ldr r0, _08080A58
	ldr r1, [r0]
	ldr r0, [sp, 0x14]
	bl SendMessage
_08080A46:
	add sp, 0x30
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
	.align 2, 0
_08080A58: .4byte gUnknown_80FDAE4
	thumb_func_end HandlePokemonTrap

	.align 2, 0
