#include <stdio.h>
#include "longInteger.h"
#include "../Z/longIntFunctions.h"

int POZ_Z_D(LNGINT ZCHISLO)
{
	int check = ZCHISLO.sign;

	if (ZCHISLO.A)
	{
		for (int i = 0;i < ZCHISLO.n && check;++i)
			check = *(ZCHISLO.A + i) == 0;
		if (check)
			check = 0;
		else
			if (ZCHISLO.sign == 1)
				check = 1;
			else
				check = 2;
	}
	else
		check = -1;
	return check;
}
