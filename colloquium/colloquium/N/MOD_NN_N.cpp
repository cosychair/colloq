#include <stdlib.h>
#include <stdio.h>
#include "longNat.h"
#include "longNat.h"
#include "longNatFunctions.h"
#include "helpFunctions.h"
#include "../Output/outputN.h"
#include<iostream>
LNGNT MOD_NN_N(LNGNT a, LNGNT b)
    {
        LNGNT ans,p;
		if (COM_NN_D(a, b) == 1)swapN(&a,&b);
        int error = 0;
        if(a.A && b.A)
            {
                LNGNT k = DIV_NN_N(a, b);
				p = MUL_NN_N(b, k);
				freeN(&k);
                ans = SUB_NN_N(a, p);
				freeN(&p);
            }
        else
            error = 1;
        
        if(error)
            printf("\nError, numer doesn`t exist!!\n");
        
        return ans;
    }









