#include "longPoly.h"
#include "../Q/longFracFunctions.h"
#include "longPolyFunctions.h"
/*
PLNM NMR_P_P(PLNM A) {
	PLNM der, Rx, Tx, ans;
	
	//TODO: Проверить условие для цикла
	do{
		der = DER_P_P(A);
		Rx = GCF_PP_P(A,der);
		Tx = DIV_PP_P(A,Rx);
		der = GCF_PP_P(Tx,Rx);
		MUL_PP_P(ans,DIV_PP_P(Tx,der));
		A = Rx;
	} while (DEG_P_N(A) > 0);	
	return der;//rand num
}*/