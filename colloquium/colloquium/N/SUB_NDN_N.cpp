#include <stdlib.h>
#include <stdio.h>
#include "longNat.h"
#include "longNatFunctions.h"
#include "helpFunctions.h"

LNGNT SUB_NDN_N(LNGNT fNumb, LNGNT sNumb, int k)
    {
        int error = 0;
        LNGNT answer;
        if(fNumb.A && sNumb.A)
            {
                int comp = COM_NN_D(fNumb, sNumb);
                error = comp == -1;
                if(!error)
                    {
                        if(comp == 1)
                            swapN(&fNumb, &sNumb);
                        sNumb = MUL_ND_N(sNumb, k);
                        answer = SUB_NN_N(fNumb, sNumb);
                    }
            }
        else
            error = 1;
            
        if(error)
            printf("\nError, numer doesn`t exist!\n");
            
        return answer;
}








