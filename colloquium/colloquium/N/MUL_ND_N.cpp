#include <stdlib.h>
#include <stdio.h>
#include "longNat.h"
#include "longNatFunctions.h"

LNGNT MUL_ND_N(LNGNT numb, int D)
{
    LNGNT result;
    if(numb.A)
    {
        result.n = numb.n;
        result.A = (int*)calloc(numb.n, sizeof(int));
        if(D<10)
        {
            if(D>0)
            {
                int mod = 0;
                for(int i = numb.n-1; i > -1; i--)
                {
                    result.A[i] = numb.A[i]*D + mod;
                    mod = result.A[i] / 10;
                    result.A[i] %= 10;
                }
                if(mod!=0)
                {
                    result.n+=1;
                    result.A = (int*)realloc(result.A, (result.n)*sizeof(int));
                    result.A[result.n-1] = mod;
                }
                int temp;
                for(int i=0; i<result.n; i++)
                {
                    temp = result.A[i];
                    result.A[i]=result.A[result.n-1];
                    result.A[result.n-1]=temp;
                }
            }
        }
        else
            printf("\nЦифра, которую вы ввели, была больше 10\n");
    }
    else
        printf("\nОшибка, числа не существует!\n");

    for(int i=0; i<result.n; i++)
        printf("%d", result.A[i]);

    return result;
}
