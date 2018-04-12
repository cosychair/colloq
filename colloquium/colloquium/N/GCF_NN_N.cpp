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
        LNGNT k;
    
		if (COM_NN_D(x, y) == 1)
			swapN(&x, &y);
        else;
        int l = 0;
		int comp;
        do
        {
            x = MOD_NN_N(x, y);
            comp = COM_NN_D(x, y);
			l = NZER_N_B(x) && NZER_N_B(y);
            if(comp == 1)
				swapN(&x, &y);
			else;
        }
        while (l);
        s = x;	
    }
    else
        error = 1;

    if(error)
        printf("\nError, number doesn`t exist!\n");

    return s;
}
