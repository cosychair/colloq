#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include "longFraction.h"
#include "../N/longNatFunctions.h"
#include "longFracFunctions.h"
#include "../Output/outputN.h"
#include "../Output/outputZ.h"
#include "../Output/outputQ.h"
using namespace std;

FRCT ADD_QQ_Q(FRCT x, FRCT y)
{
    FRCT sum;
	int error;
    if (x.num.A && x.den.A && y.num.A && y.den.A)
    {
		FRCT w;
    	error = 0;
        LNGINT a, c, p, q, t;
        LNGNT b, d, nok, k;// дроби вида a/b и c/d 
        a = x.num;
        b = x.den;
        c = y.num;
        d = y.den; 
        nok = LCM_NN_N(b, d);
        sum.den = nok;
        k = DIV_NN_N(nok, b);
		t = TRANS_N_Z(k);
		p = MUL_ZZ_Z(a, t);
		freeN(&k);
		freeZ(&t);
		k = DIV_NN_N(nok, d);
		t = TRANS_N_Z(k);
		q = MUL_ZZ_Z(c, t);
		sum.num = ADD_ZZ_Z(p, q);
		freeZ(&p);
		freeZ(&q);
		freeN(&k);
		freeZ(&t);
		
		w = RED_Q_Q(sum);
		freeQ(&sum);
		sum = w;
    }
    else
        error = 1;
    
    if(error)
        cout<< "Error, numer doesn`t exist!\n";
	
    return sum;
}
