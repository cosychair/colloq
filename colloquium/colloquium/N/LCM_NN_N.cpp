#include <cstdio>
#include "longNat.h"
#include "longNatFunctions.h"
#include "helpFunctions.h"

LNGNT LCM_NN_N(LNGNT firstNum, LNGNT secondNum){
    LNGNT ans;
    if(firstNum.A && secondNum.A)
    {
        LNGNT nod = GCF_NN_N(firstNum, secondNum);
        if(firstNum.n >= secondNum.n)
            ans = MUL_NN_N(DIV_NN_N(firstNum, nod), secondNum);
        else
            ans = MUL_NN_N(firstNum, DIV_NN_N(secondNum, nod));
    }
    else
        printf("\nОшибка, числа не существует!\n");

    return ans;
}
