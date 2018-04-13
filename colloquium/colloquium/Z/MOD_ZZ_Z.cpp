#include "stdio.h"
#include <stdlib.h>
#include <iostream>
#include <iomanip>
#include "longInteger.h"
#include "../Z/longIntFunctions.h"
#include "../N/longNatFunctions.h"
#include "../N/helpFunctions.h"

LNGINT MOD_ZZ_Z(LNGINT delimoe, LNGINT delitel)
{
	LNGINT ans;
	if (delimoe.A && delitel.A)
	{
		if (COM_NN_D(ABS_Z_N(delimoe), ABS_Z_N(delitel)) == 1)return delimoe;
		if (delimoe.A[0] != 0)	ans = SUB_ZZ_Z(delimoe, MUL_ZZ_Z(delitel, DIV_ZZ_Z(delimoe, delitel)));
		else
			ans = delimoe;
	}
	else
		printf("\nError, numer doesn`t exist!\n");

	return ans;
}