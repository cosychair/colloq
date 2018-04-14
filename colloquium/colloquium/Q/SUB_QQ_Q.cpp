#include "longFraction.h"
#include "../N/longNatFunctions.h"
#include "longFracFunctions.h"
#include <iostream>
#include "../Output/outputN.h"
#include "../Output/outputZ.h"
#include "../Output/outputQ.h"
using namespace std;

FRCT SUB_QQ_Q(FRCT divident, FRCT divider)
{
	FRCT ans;
	LNGNT znam;
	LNGINT chs;
	if (divident.num.A && divident.den.A && divider.num.A && divider.den.A)
	{
		FRCT w;
		LNGINT a, c, p, q, t;
		LNGNT b, d, nok, k;// дроби вида a/b и c/d 
		a = divident.num;
		b = divident.den;
		c = divider.num;
		d = divider.den;
		nok = LCM_NN_N(b, d);
		ans.den = nok;
		k = DIV_NN_N(nok, b);
		t = TRANS_N_Z(k);
		p = MUL_ZZ_Z(a, t);
		freeN(&k);
		freeZ(&t);
		k = DIV_NN_N(nok, d);
		t = TRANS_N_Z(k);
		q = MUL_ZZ_Z(c, t);
		ans.num = SUB_ZZ_Z(p, q);
		freeZ(&p);
		freeZ(&q);
		freeN(&k);
		freeZ(&t);

		w = RED_Q_Q(ans);
		freeQ(&ans);
		ans = w;
		
	}
	else
		cout<<"\nError, numer doesn`t exist!\n";
	
	return ans;
}