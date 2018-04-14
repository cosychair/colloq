#include <stdlib.h>
#include <stdio.h>
#include "longInteger.h"
#include "../Z/longIntFunctions.h"
#include "../N/longNatFunctions.h"
#include "../N/helpFunctions.h"
#include "../Output/outputN.h"
LNGINT SUB_ZZ_Z(LNGINT num1, LNGINT num2)
{
	LNGINT result;
	LNGNT c;
	int error = 0;
	if (num1.A && num2.A)
	{
		LNGNT num1N, num2N;
		num1N = ABS_Z_N(num1);
		num2N = ABS_Z_N(num2);
		if (num1N.A && num2N.A)
		{
			int comp = COM_NN_D(num1N, num2N);
			int fl = 0;
			error = comp == -1;
			if (!error)
			{
				if ((num1.sign == 0 && num2.sign == 1) || (num1.sign == 1 && num2.sign == 0))
				{
					c = ADD_NN_N(num1N, num2N);
					fl = (num2.sign == 0 && num1.sign == 1);
				}
				else
				{
					c = SUB_NN_N(num1N, num2N);
					fl = (comp == 1 && num2.sign == 0 ) || (comp == 2 && num1.sign == 1);
				}
				result.sign = 0;
				result.n = c.n;
				result.A = (int*)malloc(c.n * sizeof(int));
				for (int i = 0; i < c.n; ++i)
					*(result.A + i) = *(c.A + i);
				freeN(&c);
				if (fl)
					result = MUL_ZM_Z(result);
			}
		}
		else
			error = 1;
		freeN(&num1N);
		freeN(&num2N);
	}
	else
		error = 1;

	if (error)
		printf("\nERROR!\n");

	return result;
}