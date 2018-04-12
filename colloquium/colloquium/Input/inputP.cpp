#include "inputQ.h"
#include "inputZ.h"
#include "inputN.h"
#include "inputP.h"
#include "../Output/outputQ.h"
#include <iostream>
//чтобы ввести многочлен нужно нажать 2 раза
PLNM readP() {
	PLNM pl;
	pl.deg = 0;
	int f = 0;
	char k;
	pl.C = NULL;
	int err=0, i = 0, dg=0, ldg = 0, tmp, change=0;
	do
	{
		if (pl.C)
			pl.C = (FRCT*)realloc(pl.C, sizeof(FRCT)*(i+1));
		else
			pl.C = (FRCT*)malloc(sizeof(FRCT));
		pl.C[i++] = readQ();
		if (change) {
			change = 0;
			pl.C[i-1].num.sign = 1;
		}
		scanf_s("%c", &k);
		if (k == '^') {
			scanf_s("%d", &dg);
			if (dg > pl.deg) {
				pl.deg = dg;//ввод многочлена в порядке убывания степеней
			}
			else {
				if (ldg - dg > 1) {
					tmp = i - 1;
					int z;
					int tp = ldg - dg;
					for (z = 1; z < tp; z++) {
						pl.C = (FRCT*)realloc(pl.C, sizeof(FRCT)*(i + 1));
						pl.C[i].den.A = (int*)malloc(sizeof(int));
						pl.C[i].den.A[0] = 1;
						pl.C[i].den.n = 1;
						pl.C[i].num.A = (int*)malloc(sizeof(int));
						pl.C[i].num.A[0] = 0;
						pl.C[i].num.n = 1;
						i++;
					}
					pl.C[i - 1] = pl.C[tmp];
					//freeQ(&(pl.C[tmp]));
					pl.C[tmp].den.A = (int*)malloc(sizeof(int));
					pl.C[tmp].den.A[0] = 1;
					pl.C[tmp].den.n = 1;
					pl.C[tmp].num.A = (int*)malloc(sizeof(int));
					pl.C[tmp].num.A[0] = 0;
					pl.C[tmp].num.n = 1;
				}
			}
				ldg = dg;

		}
		if (k == '-')change = 1;
	} while (err || k != '\n');
	while (ldg >= 0) {
		pl.C = (FRCT*)realloc(pl.C, sizeof(FRCT)*(i + 1));
		pl.C[i].den.A = (int*)malloc(sizeof(int));
		pl.C[i].den.A[0] = 1;
		pl.C[i].den.n = 1;
		pl.C[i].num.A = (int*)malloc(sizeof(int));
		pl.C[i].num.A[0] = 0;
		pl.C[i].num.n = 1;
		i++;
		ldg--;
	}
	return pl;
}//3/2x^6+1/2x^3+2/1x^1-6/3
//1/2x^4-3/4x^1+6/7