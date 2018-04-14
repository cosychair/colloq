#include <stdlib.h>
#include <stdio.h>
#include "longPoly.h"
#include "../Q/longFracFunctions.h"
#include "longPolyFunctions.h"
#include <iostream>
#include "../Output/outputP.h"
#include "../Output/outputN.h"
using namespace std;

PLNM FAC_P_Q(PLNM x)
{
	int n = x.deg;
	LNGNT k; // НОК чисел
	LNGNT d; // NOD чисел
	LNGNT a; //была структура для целых, но знак не исспользвался и создавал ошибки, поменял на натуральную
	a.A = new int[1];
	a.n = 1;
	a.A[0] = 1;
	bool p = true; 
	
	// Нахождение НОК знаменателей
	for(int i = 1; i <= n; i++)
	{
		if(p)
		{
			p = false;
			k = LCM_NN_N(x.C[i - 1].den, x.C[i].den);
		}
		else
		{
			k = LCM_NN_N(k, x.C[i].den);
		}
	}
	printP(x);
	cout << endl;
	p = true;
	//Вынесение НОК знаменателя и нахождение НОД числителя  
	for(int i = 1; i <= n; i++)
	{
			
		if(p)
		{
			p = false;
			x.C[i].num = DIV_ZZ_Z(MUL_ZZ_Z(x.C[i].num, TRANS_N_Z(k)), TRANS_N_Z(x.C[i].den));
			x.C[i - 1].num = DIV_ZZ_Z(MUL_ZZ_Z(x.C[i- 1].num, TRANS_N_Z(k)),TRANS_N_Z(x.C[i - 1].den));
			x.C[i].den = a;
			x.C[i - 1].den = a;
			cout << POZ_Z_D(x.C[i].num) << endl;
			if (POZ_Z_D(x.C[i].num))
				d = GCF_NN_N(ABS_Z_N(x.C[i - 1].num), ABS_Z_N(x.C[i].num));
			else
				d = ABS_Z_N(x.C[i-1].num);

		}
		else //3/2x^3+2/1x^1-6/3
		{
			x.C[i].num = DIV_ZZ_Z(MUL_ZZ_Z(x.C[i].num, TRANS_N_Z(k)), TRANS_N_Z(x.C[i].den));
			x.C[i].den = a;
			if (POZ_Z_D(x.C[i].num))
				d = GCF_NN_N(d, ABS_Z_N(x.C[i].num));
			else;
		}
		printN(d);
		cout << endl;
	}
	printP(x);
	p = true;
	//Вынесение НОД
	for(int i = 0; i <= n; i++)
	{
		//if(d.A)
		x.C[i].num = DIV_ZZ_Z(x.C[i].num, TRANS_N_Z(d));
	}
	return x;
}
