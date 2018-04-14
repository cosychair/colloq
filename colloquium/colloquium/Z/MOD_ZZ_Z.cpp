#include "stdio.h"
#include <stdlib.h>
#include <iostream>
#include <iomanip>
#include "longInteger.h"
#include "../Z/longIntFunctions.h"
#include "../N/longNatFunctions.h"
#include "../N/helpFunctions.h"
#include "../Output/outputN.h"
#include "../Output/outputZ.h"
LNGINT MOD_ZZ_Z(LNGINT delimoe, LNGINT delitel)
{
	LNGINT ans,p,q;
	if (delimoe.A && delitel.A)
	{
		LNGNT x, y;
		x = ABS_Z_N(delimoe);
		y = ABS_Z_N(delitel);
		if (COM_NN_D(x, y) == 1)
		{
			freeN(&x);
			freeN(&y);
			return delimoe;
		}
		else;
		if (delimoe.A[0] != 0)
		{
			p = DIV_ZZ_Z(delimoe, delitel);
			q = MUL_ZZ_Z(delitel, p);
			ans = SUB_ZZ_Z(delimoe, q);
			freeZ(&p);
			freeZ(&q);
		}
		else
			ans = delimoe;
		freeN(&x);
		freeN(&y);
	}
	else
		printf("\nError, numer doesn`t exist!\n");

	return ans;
}