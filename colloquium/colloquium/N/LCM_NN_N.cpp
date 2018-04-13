#include <cstdio>
#include "longNat.h"
#include "longNatFunctions.h"
#include "helpFunctions.h"
#include "../Output/outputN.h"
LNGNT LCM_NN_N(LNGNT firstNum, LNGNT secondNum){
    LNGNT ans;
    if(firstNum.A && secondNum.A)
    {
        LNGNT nod = GCF_NN_N(firstNum, secondNum),p,q;
		if (firstNum.n >= secondNum.n)
		{
			p = DIV_NN_N(firstNum, nod);
			ans = MUL_NN_N(p, secondNum);
			
		}
		else
		{
			p = DIV_NN_N(secondNum, nod);
			ans = MUL_NN_N(firstNum, p);
		}
		freeN(&nod);
		freeN(&p);
		
    }
    else
        printf("\nError, numer doesn`t exist!\n");

    return ans;
}
