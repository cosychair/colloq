#include <stdlib.h>
#include <stdio.h>
#include "longInteger.h"
#include "../Z/longIntFunctions.h"
#include "../N/longNatFunctions.h"

LNGINT ADD_ZZ_Z(LNGINT x, LNGINT y)
{
    LNGINT sum;
    LNGNT k;
    int error = 0;
    if(x.A && y.A)
    {
        LNGNT a, b, s;
        a = ABS_Z_N(x);
        b = ABS_Z_N(y);
        int f = POZ_Z_D(x);
        int g = POZ_Z_D(y);
        if(a.A && y.A)
        {
           	if (f == g && f)  
            {
            	s = ADD_NN_N(a, b);//	выполнение сложения если 2 целых разных знаков
			}	
			else if(f != g && f)
			{
				s = SUB_NN_N(a, b);// выполнение вычитания если 2 целых разных знаков
			}
			sum = TRANS_N_Z(s);
			if ((COM_NN_D(a, b) == 2 || g == 1) && f == 1 )
			sum = MUL_ZM_Z(sum); 
        }
	    else
	        error = 1;
    }
    else
        error = 1;    
    return sum;
}
