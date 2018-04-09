#include <stdio.h>
#include "longNat.h"
#include "../N/longNatFunctions.h"

int COM_NN_D(LNGNT pervoe, LNGNT vtoroe)
{
    int otvet = 0;
    if(pervoe.A && vtoroe.A)
    {
        if(pervoe.n == vtoroe.n)
        {
            int len = pervoe.n,
                    fl = 1;
            for(int i = 0; (i < len) && fl; ++i )
            {
                fl = i < len && *(pervoe.A+i) == *(vtoroe.A+i);
                if((!fl) && (i < len))
                    otvet = *(pervoe.A+i) > *(vtoroe.A+i)? 2: 1;
            }
        }
        else
            otvet = pervoe.n > vtoroe.n? 2: 1;
    }
    else
        otvet = -1;

    return otvet;
}