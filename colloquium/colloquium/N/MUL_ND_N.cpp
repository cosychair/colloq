#include <stdlib.h>
#include <stdio.h>
#include "longNat.h"
#include "longNatFunctions.h"
#include "helpFunctions.h"

LNGNT MUL_ND_N(LNGNT numb, int D)
{
    LNGNT result;
	if (numb.A)
	{
		result.n = numb.n;
		result.A = (int*)calloc(numb.n, sizeof(int));
		if (D < 10)
		{
			if (D > 0)
			{
				int mod = 0;
				for (int i = numb.n - 1; i > -1; i--)
				{
					result.A[i] = numb.A[i] * D + mod;
					mod = result.A[i] / 10;
					result.A[i] %= 10;
				}
				reverseN(&result);
				if (mod != 0)
				{
					result.n += 1;
					result.A = (int*)realloc(result.A, (result.n) * sizeof(int));
					result.A[result.n - 1] = mod;
				}
				reverseN(&result);
			}
		}
		else
			printf("\nNumeral was bigger than 10\n");
	}
	else
		printf("\nNumber desn`t exist!");

    return result;
}
