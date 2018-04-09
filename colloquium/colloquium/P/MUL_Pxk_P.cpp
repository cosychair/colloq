#include <cstdio>
#include <cstdlib>
#include "MUL_Pxk_P.h"

void multiplicationXkP(PLNM* polynom, int degree){
    if(degree >= 0){
        polynom->C = (FRCT*)realloc(polynom->C, (polynom->deg+degree) * sizeof(FRCT));
        for(int i = polynom->deg+1; i <= polynom->deg + degree; ++i)
            polynom->C[i].num = 0, polynom->C[i].den = 1;
        polynom->deg += degree; 
    }
    else
        printf("\nСтепень должна быть >= 0\n");
}