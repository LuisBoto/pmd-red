@ File generated by m4a2s Song-Module
	.include "MPlayDef.s"

	.equ	seq_724_grp, bank_026
	.equ	seq_724_pri, 127
	.equ	seq_724_rev, 0
	.equ	seq_724_mvl, 127
	.equ	seq_724_key, 0

	.section .rodata
	.global	seq_724
	.align	2

@*********************** Track 01 ***********************@

seq_724_0:
	.byte	KEYSH , seq_724_key+0
	.byte	TEMPO , 140/2
	.byte		VOICE , 40
	.byte		VOL   , 127*seq_724_mvl/mxv
	.byte		PAN   , c_v+0
	.byte	W01
	.byte		MOD   , 50
	.byte		MODT  , mod_pan
	.byte	W02
	.byte		VOL   , 63*seq_724_mvl/mxv
	.byte	W01
	.byte		        72*seq_724_mvl/mxv
	.byte		N05   , As2 , v127
	.byte	W01
	.byte		VOL   , 81*seq_724_mvl/mxv
	.byte	W01
	.byte		        91*seq_724_mvl/mxv
	.byte	W01
	.byte		        96*seq_724_mvl/mxv
	.byte	W01
	.byte		        102*seq_724_mvl/mxv
	.byte	W01
	.byte		        108*seq_724_mvl/mxv
	.byte		N02   , Gn4 , v052
	.byte	W01
	.byte		VOL   , 115*seq_724_mvl/mxv
	.byte	W01
	.byte		        118*seq_724_mvl/mxv
	.byte	W01
	.byte		        120*seq_724_mvl/mxv
	.byte		N02   , Gn4 , v080
	.byte	W01
	.byte		VOL   , 121*seq_724_mvl/mxv
	.byte	W01
	.byte		PAN   , c_v-20
	.byte		MODT  , mod_tre
	.byte		VOL   , 122*seq_724_mvl/mxv
	.byte		N02   , Gn4 , v064
	.byte	W01
	.byte		VOL   , 121*seq_724_mvl/mxv
	.byte	W01
	.byte		        119*seq_724_mvl/mxv
	.byte	W01
	.byte		PAN   , c_v+20
	.byte		VOL   , 115*seq_724_mvl/mxv
	.byte		N02   , Gn4 , v056
	.byte	W01
	.byte		VOL   , 112*seq_724_mvl/mxv
	.byte	W01
	.byte		        105*seq_724_mvl/mxv
	.byte		N02   , Fs4 , v032
	.byte	W01
	.byte		PAN   , c_v-20
	.byte		VOL   , 94*seq_724_mvl/mxv
	.byte	W01
	.byte		        83*seq_724_mvl/mxv
	.byte	W01
	.byte		        69*seq_724_mvl/mxv
	.byte		N02   , Fn4 , v020
	.byte	W01
	.byte		PAN   , c_v+20
	.byte		VOL   , 61*seq_724_mvl/mxv
	.byte	W01
	.byte		        54*seq_724_mvl/mxv
	.byte	W01
	.byte		        44*seq_724_mvl/mxv
	.byte		N02   , Ds4 , v016
	.byte	W01
	.byte		PAN   , c_v-20
	.byte		VOL   , 37*seq_724_mvl/mxv
	.byte	W01
	.byte		        31*seq_724_mvl/mxv
	.byte	W01
	.byte		        21*seq_724_mvl/mxv
	.byte		N02   , Dn4 , v012
	.byte	W01
	.byte		PAN   , c_v+20
	.byte		VOL   , 9*seq_724_mvl/mxv
	.byte	W01
	.byte		        6*seq_724_mvl/mxv
	.byte	W01
	.byte		        3*seq_724_mvl/mxv
	.byte	W01
	.byte		PAN   , c_v-20
	.byte		VOL   , 0*seq_724_mvl/mxv
	.byte		N02   , Cs4 , v008
	.byte	W02
	.byte		        Cn4 , v004
	.byte	W02
	.byte	W12
	.byte	W12
	.byte	W12
	.byte	W12
	.byte	W12
	.byte	W12
	.byte	W12
	.byte	W12
	.byte	W12
	.byte	W12
	.byte	W12
	.byte	W12
	.byte	W12
	.byte	GOTO
	 .word	seq_724_0 + 0x8F
	.byte	FINE

@******************************************************@

	.align	2

seq_724:
	.byte	1	@ NumTrks
	.byte	0	@ NumBlks
	.byte	seq_724_pri	@ Priority
	.byte	seq_724_rev	@ Reverb

	.word	seq_724_grp

	.word	seq_724_0

	.end