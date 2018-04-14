#include <stdlib.h>
#include <stdio.h>
#include "longPoly.h"
#include "../Q/longFracFunctions.h"
#include "longPolyFunctions.h"
#include "../Output/outputQ.h"
#include "../Output/outputP.h"


PLNM SUB_PP_P(PLNM P, PLNM V)
{
	PLNM A;
	if (P.C && V.C)
	{

		FRCT med;// Создание дроби -1/1
		med.den.A = (int*)malloc(sizeof(int));
		med.den.A[0] = 1;
		med.den.n = 1;
		med.num.A = (int*)malloc(sizeof(int));
		med.num.n = 1;
		med.num.sign = 1;
		med.num.A[0] = 1;
		A = MUL_PQ_P(V, med);//умножение вычитаемого полинома на -1
	}
	else
		printf("Polynomial doesn`t exist!\n");
	A = ADD_PP_P(P, A);//Вычитание через функцию сложения
	return A;
}
