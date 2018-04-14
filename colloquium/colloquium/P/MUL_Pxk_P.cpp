#include <cstdio>
#include <cstdlib>
#include "longPoly.h"
#include <iostream>
#include "../Q/longFracFunctions.h"
#include "longPolyFunctions.h"


PLNM MUL_Pxk_P(PLNM polynom, int degree){
    if(degree > 0){
		std::cout << degree<<'\n';
        polynom.C = (FRCT*)realloc(polynom.C, (polynom.deg+degree) * sizeof(FRCT));
        for(int i = polynom.deg+1; i <= polynom.deg + degree; ++i){
            polynom.C[i].num.sign = 1;
            polynom.C[i].num.n = 1;
            polynom.C[i].num.A = new int[1]; 
			polynom.C[i].num.A[0] = 0;
            polynom.C[i].den.n = 1;
            polynom.C[i].den.A = new int[1]; 
			polynom.C[i].den.A[0] = 1;
        }
        polynom.deg += degree;
    }

	else;
	return polynom;
}
