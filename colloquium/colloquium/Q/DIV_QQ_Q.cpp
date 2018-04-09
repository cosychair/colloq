#include <cstdio>
#include "MUL_QQ_Q.h"
#include "DIV_QQ_Q.h"
#include "../Z/TRANS_Z_N.h"
#include "../Z/TRANS_N_Z.h"


FRCT divNumbQ(FRCT divident, FRCT divider){
    FRCT ans;
    if(divident.num.A && divident.den.A && divider.den.A && divider.num.A){
        LNGINT den = getNumbZ(divider.den);
        den.sign = divider.num.sign;
        divider.num.sign = 0;
        divider.den = getNatural(divider.num);
        divider.num = den;
        ans = multiplicationNumbQ(divident, divider);
    }
    else
        printf("\nОшибка, числа не существует!\n");
    
    return ans;
}