#include "longNat.h"
#include "../N/helpFunctions.h"

/*
swapN

@author Kirillov Daniil

������� ������ ������� 2 ����������� �����

���������:
1)numberOne - ������ �����
2)numberTwo - ������ �����

������� �������� � �������� ���������� ����������, ������������� ���������� ������� ����� ���.
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

������� ������������� ����������� �����

���������:
1)x - �����

������� �������� � ������� ���������� ���������, ������������� ���������� �������� ����� ����.
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