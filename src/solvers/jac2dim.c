/* Derived from jacdim.c, which starts with the following copyright notice. */
/****************************************************************
Copyright (C) 1997 Lucent Technologies
All Rights Reserved

Permission to use, copy, modify, and distribute this software and
its documentation for any purpose and without fee is hereby
granted, provided that the above copyright notice appear in all
copies and that both that the copyright notice and this
permission notice and warranty disclaimer appear in supporting
documentation, and that the name of Lucent or any of its entities
not be used in advertising or publicity pertaining to
distribution of the software without specific, written prior
permission.

LUCENT DISCLAIMS ALL WARRANTIES WITH REGARD TO THIS SOFTWARE,
INCLUDING ALL IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS.
IN NO EVENT SHALL LUCENT OR ANY OF ITS ENTITIES BE LIABLE FOR ANY
SPECIAL, INDIRECT OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER
IN AN ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION,
ARISING OUT OF OR IN CONNECTION WITH THE USE OR PERFORMANCE OF
THIS SOFTWARE.
****************************************************************/

#include "asl.h"

#ifdef __cplusplus
extern "C" {
extern int jac2dim_(const char *stub, fint *M, fint *N, fint *NO, fint *NZ,
		fint *MXROW, fint *MXCOL, ftnlen stub_len);
}
#endif

 int
jac2dim_(const char *stub, fint *M, fint *N, fint *NO, fint *NZ,
		fint *MXROW, fint *MXCOL, ftnlen stub_len)
{
	ASL *asl;

	if (cur_ASL)
		return already_ASL("jacdim");
	asl = ASL_alloc(ASL_read_pfgh);
	return jacpdim_ASL(asl, stub, M, N, NO, NZ, MXROW, MXCOL, stub_len);
	}
