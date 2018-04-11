#include <stdlib.h>
#include <stdio.h>
#include "longFraction.h"
#include "../N/longNatFunctions.h"
#include "longFracFunctions.h"

FRCT MUL_QQ_Q(FRCT a, FRCT b)
{
    FRCT ans;
    int error = 0;
    if(a.num.A && a.den.A && b.num.A && b.den.A)
    {
        ans.num = MUL_ZZ_Z(a.num, b.num);
        ans.den = MUL_NN_N(a.den, b.den);
        error = !(ans.num.A && ans.den.A);
    }
    else
        error = 1;

    if(error)
        printf("\nОшибка, числа не существует!\n");
	ans = RED_Q_Q(ans);
    return ans;
}