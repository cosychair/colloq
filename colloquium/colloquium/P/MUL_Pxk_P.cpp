#include <cstdio>
#include <cstdlib>
#include "longPoly.h"
#include <iostream>
#include "../Q/longFracFunctions.h"
#include "longPolyFunctions.h"


PLNM MUL_Pxk_P(PLNM polynom, int degree){
	PLNM pl = polynom;
    if(degree > 0){
		pl.C = (FRCT*)realloc(pl.C, (pl.deg+degree) * sizeof(FRCT));
        for(int i = polynom.deg+1; i <= pl.deg + degree; ++i){
			pl.C[i].num.sign = 1;
			pl.C[i].num.n = 1;
			pl.C[i].num.A = (int*)malloc(sizeof(int));
			pl.C[i].num.A[0] = 0;
			pl.C[i].den.n = 1;
			pl.C[i].den.A = (int*)malloc(sizeof(int));
			pl.C[i].den.A[0] = 1;
        }
		pl.deg += degree;
    }

	else;
	return pl;
}
