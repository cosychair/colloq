#include <stdio.h>
#include <iostream>
#include "longNat.h"
#include "longNatFunctions.h"
#include "helpFunctions.h"
#include "../Output/outputN.h"
using namespace std;
LNGNT GCF_NN_N(LNGNT x, LNGNT y)
{
    LNGNT s;
    int error = 0;
    if(x.A && y.A)
    {
        LNGNT a, b, p;
		a.A = (int*)malloc(x.n * sizeof(int));
		a.n = x.n;
		b.A = (int*)malloc(y.n * sizeof(int));
		b.n = y.n;
		for (int i = 0; i < a.n; ++i)
			a.A[i] = x.A[i];
		for (int i = 0; i < b.n; ++i)
			b.A[i] = y.A[i];
		if (COM_NN_D(a, b) == 1)
			swapN(&a, &b);
        else;
        int l = 0;
		int comp;
        do
        {
            p = MOD_NN_N(a, b);
			freeN(&a);
			a = p;
            comp = COM_NN_D(a, b);
			l = NZER_N_B(a) && NZER_N_B(b);
            if(comp == 1)
				swapN(&a, &b);
			else;
        }
        while (l);
		
        s = a;	
		freeN(&b);
    }
    else
        error = 1;

    if(error)
        printf("\nError, number doesn`t exist!\n");

    return s;
}
