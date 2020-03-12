/*******************************************************************
Copyright (C) 2017 AMPL Optimization, Inc.; written by David M. Gay.

Permission to use, copy, modify, and distribute this software and its
documentation for any purpose and without fee is hereby granted,
provided that the above copyright notice appear in all copies and that
both that the copyright notice and this permission notice and warranty
disclaimer appear in supporting documentation.

The author and AMPL Optimization, Inc. disclaim all warranties with
regard to this software, including all implied warranties of
merchantability and fitness.  In no event shall the author be liable
for any special, indirect or consequential damages or any damages
whatsoever resulting from loss of use, data or profits, whether in an
action of contract, negligence or other tortious action, arising out
of or in connection with the use or performance of this software.
*******************************************************************/

enum Opnos2 {
	OPRET		= 0,
	OPPLUS0		= 1,
	OPPLUS10	= 2,
	OPPLUS01	= 3,
	OPPLUS2		= 4,
	OPMINUS0	= 5,
	OPMINUS10	= 6,
	OPMINUS01	= 7,
	OPMINUS2	= 8,
	OPMULT0		= 9,
	OPMULT10	= 10,
	OPMULT01	= 11,
	OPMULT2		= 12,
	OPDIV0		= 13,
	OPDIV10		= 14,
	OPDIV01		= 15,
	OPDIV2		= 16,
	n_OPREM0	= 17,
	nOPREM10	= 18,
	nOPREM01	= 19,
	nOPREM2		= 20,
	n_OPPOW0	= 21,
	nOPPOW10	= 22,
	nOPPOW01	= 23,
	n_OPPOW2	= 24,
	nOPPOW1i	= 25,
	n_OPLESS0	= 26,
	nOPLESS10	= 27,
	nOPLESS01	= 28,
	nOPLESS2	= 29,
	OPMAXLIST0	= 30,
	OPMAXLIST1	= 31,
	OPMINLIST0	= 32,
	OPMINLIST1	= 33,
	n_FLOOR		= 34,
	n_CEIL		= 35,
	n_OPABS0	= 36,
	n_OPABS1	= 37,
	OPUMINUS0	= 38,
	OPUMINUS1	= 39,
	n_OPAND		= 40,
	n_OPOR		= 41,
	n_OPLT		= 42,
	n_OPLE		= 43,
	OPEQ		= 44,
	n_OPGE		= 45,
	n_OPGT		= 46,
	n_OPNE		= 47,
	n_OPNOT		= 48,
	nOPIF0		= 49,
	nOPIF1		= 50,
	nOPIF11		= 51,
	nOPIF12		= 52,
	nOPIF13		= 53,
	OPtanh0		= 54,
	OPtanh1		= 55,
	OP_tan0		= 56,
	OP_tan1		= 57,
	OP_sqrt0	= 58,
	OP_sqrt1	= 59,
	OP_sinh0	= 60,
	OP_sinh1	= 61,
	OP_sin0		= 62,
	OP_sin1		= 63,
	OP_log100	= 64,
	OP_log101	= 65,
	OP_log0		= 66,
	OP_log1		= 67,
	OP_exp0		= 68,
	OP_exp1		= 69,
	OP_cosh0	= 70,
	OP_cosh1	= 71,
	OP_cos0		= 72,
	OP_cos1		= 73,
	OP_atanh0	= 74,
	OP_atanh1	= 75,
	OP_atan20	= 76,
	OP_atan210	= 77,
	OP_atan201	= 78,
	OP_atan22	= 79,
	OP_atan0	= 80,
	OP_atan1	= 81,
	OP_asinh0	= 82,
	OP_asinh1	= 83,
	OP_asin0	= 84,
	OP_asin1	= 85,
	OP_acosh0	= 86,
	OP_acosh1	= 87,
	OP_acos0	= 88,
	OP_acos1	= 89,
	OPSUMLIST0	= 90,
	OPSUMLIST1	= 91,
	OPintdiv	= 92,
	OP_precision	= 93,
	OP_round	= 94,
	OP_trunc	= 95,
	n_OPCOUNT	= 96,
	n_OPNUMBEROF	= 97,
	n_OPNUMBEROFs	= 98,
	n_OPATLEAST	= 99,
	n_OPATMOST	= 100,
	n_OPPLTERM0	= 101,
	n_OPPLTERM1	= 102,
	n_OPEXACTLY	= 103,
	n_OPNOTATLEAST	= 104,
	n_OPNOTATMOST	= 105,
	n_OPNOTEXACTLY	= 106,
	n_OPANDLIST	= 107,
	n_OPORLIST	= 108,
	n_OPIMPELSE	= 109,
	n_OP_IFF	= 110,
	n_OPALLDIFF	= 111,
	n_OPSOMESAME	= 112,
	OP_FUNCALL0	= 113,
	OP_FUNCALL1	= 114,
	OP_2POW0	= 115,
	OP_2POW1	= 116,
	nOPCPOW0	= 117,
	nOPCPOW1	= 118,
	n_OPHOL		= 119,
	OP_GOTO		= 120,
	OPGOTO2		= 121,
	OPCOPY0		= 122,
	OPCOPY1		= 123,
	OPCOPY1a	= 124,
	OP_COPYSYM	= 125,
	OP_START	= 126,
	OPGOTOB		= 127,
	OPGOTOF		= 128,
	OPGOTOF2	= 129,
	OPGOTOF2n	= 130,
	OPGOTOMM	= 131,
	OPRETB		= 132,
	OPVARREF	= 133,
	OPABS_g		= 134,
	OPtanh_g	= 135,
	OPtan_g		= 136,
	OPsqrt_g	= 137,
	OPsinh_g	= 138,
	OPsin_g		= 139,
	OPlog10_g	= 140,
	OPlog_g		= 141,
	OPexp_g		= 142,
	OPcosh_g	= 143,
	OPcos_g		= 144,
	OPatanh_g	= 145,
	OPatan_g	= 146,
	OPasinh_g	= 147,
	OPasin_g	= 148,
	OPacosh_g	= 149,
	OPacos_g	= 150,
	OP1POW_g	= 151,
	OP2POW_g	= 152,
	OPCPOW_g	= 153,
	OP_ANDalign	= 154,
	OPCPOW0align	= 155,
	OPCPOW1align	= 156,
	OP_FUNCALL0align = 157,
	OP_FUNCALL1align = 158,
	OPGOTOBalign	= 159,
	OPGOTOFalign	= 160,
	OPGOTOF2align	= 161,
	OPGOTOF2nalign	= 162,
	OP_GOTOalign	= 163,
	OPGOTO2align	= 164,
	OPIF0align	= 165,
	OPIF1align	= 166,
	OPIF11align	= 167,
	OPIF12align	= 168,
	OPIF13align	= 169,
	OP_IMPELSE_align = 170,
	OPLESS01align	= 171,
	OPLESS10align	= 172,
	OPLESS2align	= 173,
	OPMAXLISTalign	= 174,
	OPMINLISTalign	= 175,
	OP_ORalign	= 176,
	OP_PLTERM0align	= 177,
	OP_PLTERM1align	= 178,
	OP_NEXTBLK	= 179,
	OP_NEXTBLKalign	= 180,
	OP_POLY		= 181,
	N_opno2		= 182
	};
/* |awk '{if (length($1)>=8)t="";else t="\t";printf "\t%s\t%s= %d,\n",$1,t,NR+129}' */
/* OPGOTO	absolute goto */
/* OPGOTO2	for IFnl: two targets: normally po[0], but po[1] during sphes_setup */
/* OPGOTOF	ignored by eval2, honored by hv_fwd */
/* OPGOTOF2	for min/maxlist: ignored by eval2, two targets for hv_fwd: */
/*				 po[0] except po[1] during sphes_setup */

#ifdef PSHVREAD
#define ASLTYPE ASL_pfgh
#else
#define ASLTYPE ASL_pfg
#endif
