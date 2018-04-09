#include "../Input/inputN.h"
#include"../N/longNat.h"
#include <iostream>
#include <iomanip>
using namespace std;

LNGNT readN() {
	LNGNT a;
	char k;
	int* tmp;
	a.n = 0;
	while (cin.get(k)) {
		if (k >= '0'&&k <= '9') {
			tmp = (int*)realloc(a.A, (a.n+1)*sizeof(int));
			if (tmp == NULL) {
				cout << "MEMORY ENDED JUST NOW, NUMBER IS TOO LONG" << endl;
				return a;
			}
			a.A = tmp;
			a.A[a.n] = k;
			a.n++;
		}
	}
}