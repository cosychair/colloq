#include <stdlib.h>
#include <stdio.h>
#include "longNat.h"
#include "longNat.h"
#include "longNatFunctions.h"
#include "helpFunctions.h"

LNGNT MOD_NN_N(LNGNT a, LNGNT b)
    {
        LNGNT ans;
        int error = 0;
        if(a.A && b.A)
            {
                LNGNT k = DIV_NN_N(a, b);
                ans = SUB_NN_N(a, MUL_NN_N(b, k));
            }
        else
            error = 1;
        
        if(error)
            printf("\nОшибка, число не существует!\n");
        
        return ans;
    }









