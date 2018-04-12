#include <stdio.h>
#include <stdlib.h>
#include "longPoly.h"
#include "../Q/longFracFunctions.h"
#include "longPolyFunctions.h"

PLNM MUL_PQ_P(PLNM M, FRCT Q)
{
	PLNM A;

	if (M.C)
	{
		A.deg = M.deg;
		A.C = (FRCT*)malloc((A.deg + 1) * sizeof(FRCT));
		for (int i = 0; i < (A.deg + 1); ++i)
			A.C[i] = MUL_QQ_Q(M.C[i], Q);
	}
	else
		printf("Polynomial doesn`t exist!\n");

	return A;
}

