#include <iostream>
#include "longPoly.h"
#include "../Q/longFracFunctions.h"
#include "longPolyFunctions.h"

using namespace std;
PLNM DIV_PP_P(PLNM A, PLNM B)	// делимое 'A', делитель 'B';
{
	PLNM C;
	PLNM D;
	if (A.C && B.C)
	{
		int st1, st2;
		st1 = DEG_P_N(A);		// cтепень делимого
		st2 = DEG_P_N(B);		// степень делителя
		if (st1 >= st2)
		{
			C.deg = st1 - st2;
			C.C = (FRCT*)malloc((C.deg + 1) * sizeof(FRCT));


			for (int var = 0; var < B.deg + 1; var++)
			{
				D.deg = B.deg;
				D.C = B.C;
				st1 = DEG_P_N(A);		// cтепень делимого
				st2 = DEG_P_N(B);		// степень делителя
				if (st1 > st2)
				{
					MUL_Pxk_P(D, st1 - st2);	//делитель умножается на x^k
				}
				A = SUB_PP_P(A, D);		// результат умножения вычитаем из делителя

				*(C.C + var) = (DIV_QQ_Q((*(A.C + var)), (*(B.C + var))));		//присвоение коэффициентов
																		// *(C.C + A.deg - var) = *(A.C + A.deg - var)/(B.C+B.deg - var);
				if (st1<st2)
				{
					break;
				}
			}
		}
		else
		{
			C.C = 0;
		}
	}
	else
		cout << "Polynomial doesn`t exist!" << endl;
	return C;
}