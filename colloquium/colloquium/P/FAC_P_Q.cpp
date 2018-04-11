#include <stdlib.h>
#include <stdio.h>
#include "longPoly.h"
#include "../Q/longFracFunctions.h"
#include "longPolyFunctions.h"
using namespace std;

PLNM FAC_P_Q(PLNM x)
{
	int n = x.deg;
	LNGNT k; // НОК чисел
	LNGNT d; // NOD чисел
	LNGNT a; //была структура для целых, но знак не исспользвался и создавал ошибки, поменял на натуральную
	a.A = new int[1];
	a.n = 1;
	bool p = true; 
	
	// Нахождение НОК знаменателей
	for(int i = 1; i <= n; i++)
	{
		if(p)
		{
			p = 0;
			k = LCM_NN_N(x.C[i - 1].den, x.C[i].den);
		}
		else
		{
			k = LCM_NN_N(k, x.C[i].den);
		}
	}
	
	//Вынесение НОК знаменателя и нахождение НОД числителя  
	for(int i = 1; i <= n; i++)
	{
			
		if(p)
		{
			p = 0;
			x.C[i].num = DIV_ZZ_Z(MUL_ZZ_Z(x.C[i - 1].num, TRANS_N_Z(k)), TRANS_N_Z(x.C[i - 1].den));
			x.C[i - 1].num = DIV_ZZ_Z(MUL_ZZ_Z(x.C[i].num, TRANS_N_Z(k)),TRANS_N_Z(x.C[i].den));
			x.C[i].den = a;
			x.C[i - 1].den = a;
			d = GCF_NN_N(ABS_Z_N(x.C[i - 1].num), ABS_Z_N(x.C[i].num));
		}
		else
		{
			x.C[i].num = DIV_ZZ_Z(MUL_ZZ_Z(x.C[i].num, TRANS_N_Z(k)), TRANS_N_Z(x.C[i].den));
			x.C[i].den = a;
			d = GCF_NN_N(d, ABS_Z_N(x.C[i].num));
		}
	}
	
	p = true;
	//Вынесение НОД
	for(int i = 0; i <= n; i++)
	{
			
		if(p)
		{
			p = 0;
			x.C[i].num = DIV_ZZ_Z(x.C[i - 1].num, TRANS_N_Z(d));
			x.C[i - 1].num = DIV_ZZ_Z(x.C[i].num, TRANS_N_Z(d));
		}
		else
		{
			x.C[i].num = DIV_ZZ_Z(x.C[i].num, TRANS_N_Z(d));
		}
	}
	return x;
}
