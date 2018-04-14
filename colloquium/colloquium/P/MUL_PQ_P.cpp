#include <stdio.h>
#include <stdlib.h>
#include "longPoly.h"
#include "../Q/longFracFunctions.h"
#include "longPolyFunctions.h"
#include <iostream>
#include "../Output/outputQ.h"
PLNM MUL_PQ_P(PLNM M, FRCT Q)
{
	PLNM A; A.C;
	//std::cout << M.deg << '\n';
	printQ(Q);
	std::cout << '\n';
	if (M.C)
	{
		A.deg = M.deg;
		//A = M;
		A.C = (FRCT*)calloc((A.deg +1), sizeof(FRCT));
		A.C = (FRCT*)calloc((A.deg + 1), sizeof(FRCT));
		//A.C = new FRCT[A.deg + 1];
		for (int i = 0;i < (M.deg +1);++i)
			A.C[i] = MUL_QQ_Q(M.C[i], Q);
	}
	else
		printf("Polynomial doesn`t exist!\n");

	return A;
}

