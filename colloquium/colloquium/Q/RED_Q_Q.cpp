#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include "longFraction.h"
#include "../N/longNatFunctions.h"
#include "longFracFunctions.h"
#include "../Output/outputN.h"
#include "../Output/outputZ.h"
FRCT RED_Q_Q(FRCT drob)
{
	FRCT ans;
	if (drob.num.A && drob.den.A)
	{	
		if (POZ_Z_D(drob.num)== 0)
		{
			ans.num = drob.num;
			ans.num.A = (int*)malloc(sizeof(int));
			ans.num.A[0] = 0;
			ans.num.sign = 0;
			ans.den.A = (int*)malloc(sizeof(int));
			ans.den.A[0] = 1;
			ans.den.n = 1;
		}
		else
		{
			LNGNT nod, p;
			LNGINT q;
			p = ABS_Z_N(drob.num);
			nod = GCF_NN_N(drob.den, p);
			ans.num.sign = drob.num.sign;
			q = TRANS_N_Z(nod);
			ans.num = DIV_ZZ_Z(drob.num, q);
			ans.den = DIV_NN_N(drob.den, nod);
			freeN(&p);
			freeN(&nod);
			freeZ(&q);
		}
	}
	else
		printf("\nError, numer doesn`t exist!\n");
	return ans;
}