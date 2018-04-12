#include "longPoly.h"
#include "../Q/longFracFunctions.h"
#include "longPolyFunctions.h"
PLNM NMR_P_P(PLNM A) {
	PLNM der, Rx, Tx, ans;
	ans.C = (FRCT*)malloc(sizeof(FRCT));
	ans.C[0].den = (LNGNT*)malloc(sizeof(LNGNT));
	ans.C[0].num = (LNGINT*)malloc(sizeof(LNGINT));
	ans.C[0].den.A = (int*)malloc(sizeof(int));
	ans.C[0].num.A = (int*)malloc(sizeof(int));
	ans.C[0].den.A[0] = 1;
	ans.C[0].num.A[0] = 1;
	//TODO: CHECK!
	do{
		der = DER_P_P(A);
		Rx = GCF_PP_P(A,der);
		Tx = DIV_PP_P(A,Rx);
		der = GCF_PP_P(Tx,Rx);
		Rx = DIV_PP_P(Tx, der);
		ans = MUL_PP_P(ans, Rx);
		A = Rx;
	} while (DEG_P_N(A) > 0);	
	return der;//rand num
}