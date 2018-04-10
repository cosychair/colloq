#include <stdio.h>
#include <stdlib.h>
#include "longNat.h"
#include "longNatFunctions.h"
#include "helpFunctions.h"

LNGNT SUB_NN_N(LNGNT x, LNGNT y)
{
	int error = 0;
	LNGNT answer;
	if (x.A && y.A)
	{
		int comp = COM_NN_D(x, y);
		error = comp == -1;
		if (!error)
		{
			if (comp == 1)
				swapN(&x, &y);

			answer.A = (int*)malloc(y.n * sizeof(int));
			answer.n = y.n;

			reverseN(&x);
			reverseN(&y);

			int min = 0;
			for (int i = 0; i < y.n; i++)
			{
				*(answer.A + i) = *(x.A + i) - *(y.A + i) - min;
				min = 0;
				if (*(answer.A + i) < 0)
				{
					*(answer.A + i) += 10;
					min = 1;
				}

			}
			if (y.n != x.n)
			{
				for (int i = y.n; i < x.n; ++i)
				{
					*(answer.A + i) += *(x.A + i) - min;
					min = 0;
				}
			}

			int fl = 0,	i;

			for (i = x.n - 1; i >= 0 && !fl; --i) 
				fl = *(answer.A + i) != 0;

			
			if (i != x.n)
			{
				answer.n = i;
				answer.A = (int*)realloc(answer.A, i * sizeof(int));
			}
			reverseN(&answer);
			reverseN(&x);
			reverseN(&y);
		}
	}
	else
		error = 1;

	if (error)
		printf("\nОшибка, одно из чисел не существует!\n");

	return answer;
}
