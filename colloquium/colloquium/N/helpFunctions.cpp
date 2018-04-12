#include "longNat.h"
#include "../N/helpFunctions.h"

/*
swapN

@author Kirillov Daniil

Функция меняет местами 2 натуральных числа

Параметры:
1)numberOne - первое число
2)numberTwo - второе число

Функция работает с адресами переменных параметров, следовательно возвращает значени через них.
*/
void swapN(LNGNT* numberOne, LNGNT* numberTwo)
{
	LNGNT a = *numberTwo;
	*numberTwo = *numberOne;
	*numberOne = a;
}

/*
reverseN

@author Kirillov Daniil

Функция разворачивает натуральное число

Параметры:
1)x - число

Функция работает с адресом переменной параметра, следовательно возвращает значение через него.
*/
void reverseN(LNGNT* x)
{
	for (int i = 0; i < (x->n / 2); ++i)
	{
		int a = *(x->A + i);
		*(x->A + i) = *(x->A + x->n - i - 1);
		*(x->A + x->n - i - 1) = a;
	}
}