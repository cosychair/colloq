#include "longPoly.h"
#include "../Q/longFracFunctions.h"
#include "longPolyFunctions.h"
/*
PLNM GCF_PP_P(PLNM poly1, PLNM poly2) {
	
	PLNM result1 = new Polynomial(poly1);
	PLNM result2 = new Polynomial(poly2);
	while (result1 != '0' && result2 != '0')
		if (DEG_P_N(result1)>DEG_P_N(result2))
			result1 = MOD_PP_P(result1, result2);
		else
			result2 = MOD_PP_P(result2, result1);
	if (result1 == '0')
		return result2;
	else
		return result1;
}*/

