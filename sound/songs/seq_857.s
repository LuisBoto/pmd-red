@ File generated by m4a2s Song-Module
	.include "MPlayDef.s"

	.equ	seq_857_grp, bank_028
	.equ	seq_857_pri, 127
	.equ	seq_857_rev, 0
	.equ	seq_857_mvl, 127
	.equ	seq_857_key, 0

	.section .rodata
	.global	seq_857
	.align	2

@*********************** Track 01 ***********************@

seq_857_0:
	.byte		VOL   , 127*seq_857_mvl/mxv
	.byte	KEYSH , seq_857_key+0
	.byte	TEMPO , 200/2
	.byte		VOICE , 18
	.byte		MOD   , 0
	.byte		N07   , Fn3 , v084
	.byte	W01
	.byte		VOL   , 120*seq_857_mvl/mxv
	.byte		BEND  , c_v+0
	.byte	W01
	.byte		PAN   , c_v+0
	.byte	W03
	.byte		N07   , An3 , v064
	.byte	W01
	.byte	W06
	.byte		        Cn4 , v084
	.byte	W06
	.byte		        Dn4 , v076
	.byte	W06
	.byte		        En4 , v080
	.byte	W06
	.byte		N06   , Gn4 , v092
	.byte	W05
	.byte		N07   , Bn4 , v100
	.byte	W01
	.byte	W06
	.byte		N16   , Dn5 , v112
	.byte	W06
	.byte	W06
	.byte	W06
	.byte	W06
	.byte	W06
	.byte	W06
	.byte	W06
	.byte	W06
	.byte	W06
	.byte	W06
	.byte	W06
	.byte	W06
	.byte	W06
	.byte	W06
	.byte	W06
	.byte	W06
	.byte	W06
	.byte	W06
	.byte	W06
	.byte	W06
	.byte	W06
	.byte	W06
	.byte	W06
	.byte	W06
	.byte	W06
	.byte	GOTO
	 .word	seq_857_0 + 0x39
	.byte	FINE

@******************************************************@

	.align	2

seq_857:
	.byte	1	@ NumTrks
	.byte	0	@ NumBlks
	.byte	seq_857_pri	@ Priority
	.byte	seq_857_rev	@ Reverb

	.word	seq_857_grp

	.word	seq_857_0

	.end