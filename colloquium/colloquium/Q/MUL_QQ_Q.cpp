#include <stdlib.h>
#include <stdio.h>
#include "longFraction.h"
#include "../N/longNatFunctions.h"
#include "longFracFunctions.h"
#include "../Output/outputQ.h"
FRCT MUL_QQ_Q(FRCT a, FRCT b)
{
    FRCT ans;
    int error = 0;
    if(a.num.A && a.den.A && b.num.A && b.den.A)
    {	
		FRCT p;
        ans.num = MUL_ZZ_Z(a.num, b.num);
        ans.den = MUL_NN_N(a.den, b.den);
        error = !(ans.num.A && ans.den.A);
		p = RED_Q_Q(ans);
		freeQ(&ans);
		ans = p;
    }
    else
        error = 1;

    if(error)
        printf("\nError, numer doesn`t exist!\n");
	
    return ans;
}