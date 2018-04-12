#include <stdio.h>
#include <stdlib.h>
#include "longNat.h"
#include "longNatFunctions.h"
#include "helpFunctions.h"

/*
helpAddNumber

��������������� ������� ��� ��������

���������:
1) numberfirst - ������ �����
2) numbersecond - ������ �����
3) answer - �����
4) base - ������� ���������
5) r - �������
6) addSecNumb - �������� �� ������ �����
7) start - ������
8) finish - �����

������� �� ���������� ������� ��������

*/
void helpAddNumber(int* numberfirst, int* numbersecond, int** answer, int base, int* r, int addSecNumb, int start, int finish)
{
	int numbAlen = start;
	if (numbAlen == 0)
		*answer = (int*)malloc(sizeof(int));
	for (int i = start; i < finish; ++i)
	{
		int count = *(numberfirst + i) + *r;
		count += addSecNumb ? *(numbersecond + i) : 0;
		*r = count / base;
		count %= base;
		*answer = (int*)realloc(*answer, (numbAlen + 1) * sizeof(int));
		*(*answer + numbAlen) = count;
		++numbAlen;
	}
}

LNGNT ADD_NN_N(LNGNT first, LNGNT second)
{
	int error = 0,
		base = 10,
		juk = 0;
	LNGNT answer;
	if (first.A && second.A)
	{
		reverseN(&first);
		reverseN(&second);
		int comp = COM_NN_D(first, second);
		error = comp == -1;
		if (!error)
		{
			if (comp == 1)
				swapN(&first, &second);

			helpAddNumber(first.A, second.A, &(answer.A), base, &juk, 1, 0, second.n);
			helpAddNumber(first.A, second.A, &(answer.A), base, &juk, 0, second.n, first.n);
			answer.n = first.n;
			if (juk != 0)
			{
				answer.A = (int*)realloc(answer.A, (answer.n + 1) * sizeof(int));
				*(answer.A + answer.n) = juk;
				++answer.n;
			}
			reverseN(&answer);
			reverseN(&first);
			reverseN(&second);
		}
	}
	else
		error = 1;

	if (error)
		printf("\nError, number doesn`t exist!\n");

	return answer;
}