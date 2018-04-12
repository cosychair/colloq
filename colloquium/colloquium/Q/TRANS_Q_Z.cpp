#include <stdio.h>
#include <stdlib.h>
#include "longFraction.h"
#include "../N/longNatFunctions.h"
#include "longFracFunctions.h"

LNGINT TRANS_Q_Z(FRCT drob)
{
    LNGINT result;
	result.A = NULL;
	drob = RED_Q_Q(drob);
    if(drob.num.A && drob.den.A)
    {
        if(drob.den.n == 1 && *(drob.den.A) == 1)
        {
            result.sign = drob.num.sign;
            result.n = drob.num.n;
            result.A = (int*) malloc(result.n*sizeof(int));
            for (int i = 0; i < result.n; ++i)
                result.A[i] = drob.num.A[i];
		}
        else
            printf("\nDenminator isn`t 1.\n");
    }
    else
        printf("\nError, numer doesn`t exist!\n");
	return result;
}
