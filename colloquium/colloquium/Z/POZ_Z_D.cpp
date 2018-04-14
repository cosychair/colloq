#include <stdio.h>
#include "longInteger.h"
#include "../Z/longIntFunctions.h"

int POZ_Z_D(LNGINT ZCHISLO)
{
	if (ZCHISLO.A)
	{
		if (ZCHISLO.n == 1 && ZCHISLO.A[0] == 0)return 0;
			if (ZCHISLO.sign == 1) return 1;
			else return 2;
	}
	else
		return -1;
}
