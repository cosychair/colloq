#include <stdlib.h>
#include <stdio.h>
#include "longPoly.h"
#include "../Q/longFracFunctions.h"
#include "longPolyFunctions.h"
#include <iostream>

PLNM SUB_PP_P(PLNM P, PLNM V)
{
	PLNM A;
	std::cout << P.deg << '\n';
	std::cout << V.deg << '\n';
	if (P.C && V.C)
	{
		if (P.deg >= V.deg)
		{//2/1x^1-6/3
			A.deg = P.deg;
			std::cout << P.deg << '\n';
			std::cout << V.deg << '\n';
			A.C = (FRCT*)malloc((A.deg +1) * sizeof(FRCT));

			for (int var = 0;var < V.deg +1;++var)
                *(A.C + P.deg - var)  = SUB_QQ_Q(*(P.C+P.deg - var), *(V.C+V.deg -var));

			for (int i = V.deg +1;i < P.deg +1;++i)
                *(A.C + P.deg - i) = *(P.C+P.deg -i);
        }
		else
		{
			A.deg = V.deg;
			A.C = (FRCT*)malloc((A.deg +1) * sizeof(FRCT));

            for (int var = 0;var < (P.deg +1);++var)
                *(A.C + V.deg - var) = SUB_QQ_Q(*(V.C + V.deg - var), *(P.C + P.deg - var));

            for (int i = P.deg +1;i < V.deg +1;++i)
                *(A.C + V.deg - i) = *(V.C + V.deg - i);
		}
	}
	else
		printf("Polynomial doesn`t exist!\n");

	return A;
}
