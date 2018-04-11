#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include "longFraction.h"
#include "../N/longNatFunctions.h"
#include "longFracFunctions.h"

FRCT RED_Q_Q(FRCT drob)
{
	FRCT ans;
	if (drob.num.A && drob.den.A)
	{	
		if (POZ_Z_D(drob.num)== 0)
		{
			ans.num = drob.num;
			ans.den.A = new int[1];
			ans.den.A[0] = 1;
			ans.den.n = 1;
		}
		else
		{
			LNGNT nod = GCF_NN_N(drob.den, ABS_Z_N(drob.num));
			ans.num.sign = drob.num.sign;
			ans.num = DIV_ZZ_Z(drob.num, TRANS_N_Z(nod));
			ans.den = DIV_NN_N(drob.den, nod);
		}
	}
	else
		printf("\nОшибка - число не существует!\n");

	return ans;
}