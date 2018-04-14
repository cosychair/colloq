#include <stdlib.h>
#include <iostream>
#include <iomanip>
#include "longInteger.h"
#include "../Z/longIntFunctions.h"
#include "../N/longNatFunctions.h"
#include "../N/helpFunctions.h"
#include "../Output/outputN.h"
#include "../Output/outputZ.h"
LNGINT DIV_ZZ_Z(LNGINT divident, LNGINT divider)
{
	LNGINT ans, ed, q;
	ed.sign = 0;
	ed.n = 1;
	ed.A = (int*)malloc(sizeof(int));
	ed.A[0] = 1;
	int err = 0;
	if (divident.A[0] != 0) {
		if (divident.A && divider.A)
		{
			LNGNT a, b, k, p;
			a = ABS_Z_N(divident);
			b = ABS_Z_N(divider);
			k = MOD_NN_N(a, b);
			if (COM_NN_D(a, b) == 1)swapN(&a, &b);
			p = DIV_NN_N(a, b);
			ans = TRANS_N_Z(p);
			freeN(&p);
			if (divident.sign == 1 && k.A[0] != 0)
			{
				q = ADD_ZZ_Z(ans, ed);
				freeZ(&ans);
				ans = q;
			}
			ans.sign = (!divider.sign && divident.sign) || (!divident.sign && divider.sign);
			freeN(&a);
			freeN(&b);
			freeZ(&ed);
			return ans;
		}
		else
			err = 1;

		if (err)
			std::cout << "Error, numer doesn`t exist!";
	}
	ed.A[0] = 0;
	ans = ed;
	return ans;
}