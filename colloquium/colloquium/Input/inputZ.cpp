#include "inputZ.h"
#include "inputN.h"
#include <iostream>
using namespace std;

LNGINT readZ() {
	LNGINT a;
	int f = 0;
	char k;
	a.A = NULL;
	a.n = 0;
	int* tmp;
	int err = 0;
	scanf_s("%c", &k);
	if (k == 1)
		a.sign = 1;
	else {
		a.sign = 0;
		f = 1;
	}
	do
	{
		if (!f)scanf_s("%c", &k);
		else
			f = 0;
		if (a.n) {
			tmp = (int*)realloc(a.A, (a.n + 1) * sizeof(int));
			if (tmp == NULL) {
				cout << "MEMORY ENDED JUST NOW, NUMBER IS TOO LONG" << endl;
				return a;
			}
			a.A = tmp;
		}
		else
			a.A = (int*)malloc(sizeof(int));
		err = a.n == 0 && k == '\n';
		if (!err)
		{
			if (k > 47 && k < 58)
			{
				*(a.A + a.n) = k - '0';
				a.n++;
			}
		}
	} while (err || k != '\n');
	return a;
}
