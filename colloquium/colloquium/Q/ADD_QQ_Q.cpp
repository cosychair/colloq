#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include "longFraction.h"
#include "../N/longNatFunctions.h"
#include "longFracFunctions.h"
using namespace std;

FRCT ADD_QQ_Q(FRCT x, FRCT y)
{
    FRCT sum;
	int error;
    if (x.num.A && x.den.A && y.num.A && y.den.A)
    {
    	error = 0;
        LNGINT a, c;
        LNGNT b, d, k, nok;// дроби вида a/b и c/d 
        a = x.num;
        b = x.den;
        c = y.num;
        d = y.den; 
        nok = LCM_NN_N(b, d);
        sum.den = nok;
        b = DIV_NN_N(nok, b);
        d = DIV_NN_N(nok, d);
       	a = MUL_ZZ_Z(a, TRANS_N_Z(b));
		c = MUL_ZZ_Z(c, TRANS_N_Z(d));
		sum.num = ADD_ZZ_Z(a, c);
    }
    else
        error = 1;
    
    if(error)
        cout<< "Ошибка, одно из чисел отсутсвует!";
    return sum;
}
