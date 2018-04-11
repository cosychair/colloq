#include "longPoly.h"
#include "../Q/longFracFunctions.h"
#include "longPolyFunctions.h"

/*
PLNM GCF_PP_P(PLNM A, PLNM B)//, int(&x)[NN], int(&y)[NN]
{
	if (A[0] == 0 && A[1] == 0)
	{
		for (int i = 0; i < NN; i++) {
			x[i] = 0; y[i] = 1;
		}
		return B;
	}
	int x1[NN], y1[NN];
	int *r1 = div_r(B, A, NN - 1, NN - 1);				//возвращает массив-остаток от деления B на А

	int *d = nod(r1, A, x1, y1);
	int *div_B_A = div1(B, A, NN - 1, NN - 1);			//возвращает массив -целая часть от деления
	int *mul = multiply(div_B_A, x1, dq, NN);			//умножение полиномов, возвращает массив
	int * x_x = substr(y1, mul, NN, dq + NN - 1);		//вычитание
	for (int i = 0; i < dq + NN - 1; i++)
		x[i] = x_x[i];
	for (int i = 0; i < NN; i++)
		y[i] = x1[i];
	return d;
}*/