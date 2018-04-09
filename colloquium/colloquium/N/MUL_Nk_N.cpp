#include <cstdlib>
#include <iostream>
#include "longNat.h"
#include "longNatFunctions.h"
using namespace std;

void MUL_Nk_N(LNGNT* str, int k)
{
	if (str->A != NULL)			// если был передан указатель на NULL - ошибка
	{
		for (int i = str->n; i < str->n+k; i++)
		{
			str->A = (int*)realloc(str->A, str->n+i * sizeof(int*));
			*(str->A + i) = 0;
		}
		str->n += k;
	}
	else
		cout <<"Ошибка, заданно пустое значение!"<<endl;
}