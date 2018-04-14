#include <cstdio>
#include "longFraction.h"
#include "../N/longNatFunctions.h"
#include "longFracFunctions.h"
#include <iostream>
#include "../Output/outputN.h"
#include "../Output/outputZ.h"
#include "../Output/outputQ.h"
FRCT DIV_QQ_Q(FRCT divident, FRCT divider){
    FRCT ans;
    if(divident.num.A && divident.den.A && divider.den.A && divider.num.A){
		FRCT w;
		printQ(divident);
		std::cout << '\n';
		printQ(divider);
		std::cout << '\n';
		w.den = ABS_Z_N(divider.num);;
        w.num = TRANS_N_Z(divider.den);//Перевернем дробь diviver и запишем в w 
        w.num.sign = divider.num.sign;
        ans = MUL_QQ_Q(divident, w);

		freeQ(&w);
		w = RED_Q_Q(ans);
		freeQ(&ans);
		ans = w;
    }
    else
        printf("\nError, numer doesn`t exist!\n");
	
    return ans;
}