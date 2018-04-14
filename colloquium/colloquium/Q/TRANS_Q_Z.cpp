#include <stdio.h>
#include <stdlib.h>
#include "longFraction.h"
#include "../N/longNatFunctions.h"
#include "longFracFunctions.h"
#include "../Output/outputQ.h"
LNGINT TRANS_Q_Z(FRCT drob)
{
	FRCT t;
    LNGINT result;
	result.A = NULL;
	t = RED_Q_Q(drob);
    if(t.num.A && t.den.A)
    {
        if(t.den.n == 1 && *(t.den.A) == 1)
        {
            result.sign = t.num.sign;
            result.n = t.num.n;
            result.A = (int*) malloc(result.n*sizeof(int));
            for (int i = 0; i < result.n; ++i)
                result.A[i] = t.num.A[i];
		}
        else
            printf("\nDenminator isn`t 1.\n");
		
    }
    else
        printf("\nError, numer doesn`t exist!\n");
	freeQ(&t);
	return result;
}
