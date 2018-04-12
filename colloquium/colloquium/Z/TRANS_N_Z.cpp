#include <stdlib.h>
#include <stdio.h>
#include "../N/longNat.h"
#include "longInteger.h"
#include "../Z/longIntFunctions.h"

LNGINT TRANS_N_Z(LNGNT numb)
{
    LNGINT outNumb;
    if (numb.A)
    {
        outNumb.n = numb.n;
        outNumb.sign = 0;
        outNumb.A = (int*)malloc(outNumb.n * sizeof(int));
        for (int i = 0; i < outNumb.n; i++)
            outNumb.A[i] = numb.A[i];
    }
    else
        printf("\nError, numer doesn`t exist!\n");
    return outNumb;
}
