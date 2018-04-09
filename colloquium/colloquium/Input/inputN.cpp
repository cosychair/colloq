#include "../Input/inputN.h"
#include"../N/longNat.h"
#include <iostream>
#include <iomanip>
#include "../Output/outputCom.h"
using namespace std;

LNGNT readN() {
	LNGNT a;
	char k;
	int* tmp;
	a.A = NULL;
	a.n = 0;
	int err = 0;
	do
	{
		scanf_s("%c", &k);
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
