#include <cstdio>
#include "longFraction.h"
#include "../N/longNatFunctions.h"
#include "longFracFunctions.h"

FRCT DIV_QQ_Q(FRCT divident, FRCT divider){
    FRCT ans;
    if(divident.num.A && divident.den.A && divider.den.A && divider.num.A){
        LNGINT den = TRANS_N_Z(divider.den);
        den.sign = divider.num.sign;
        divider.num.sign = 0;
        divider.den = TRANS_Z_N(divider.num);
        divider.num = den;
        ans = MUL_QQ_Q(divident, divider);
    }
    else
        printf("\nError, numer doesn`t exist!\n");
	ans = RED_Q_Q(ans);
    return ans;
}