#include <cstdlib>
#include <iostream>
#include "longNat.h"
#include "longNatFunctions.h"
using namespace std;

LNGNT MUL_Nk_N(LNGNT str, int k)
{
	if (str.A != NULL)
	{
		for (int i = str.n; i < str.n+k; i++)
		{
			str.A = (int*)realloc(str.A, (str.n+i)* sizeof(int*));
			*(str.A + i) = 0;
		}
		str.n += k;
	}
	else
		cout <<"Error, numer doesn`t exist!!"<<endl;
	return str;
}