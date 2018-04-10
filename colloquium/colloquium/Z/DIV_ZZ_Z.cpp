#include <stdlib.h>
#include <iostream>
#include <iomanip>
#include "longInteger.h"
#include "../Z/longIntFunctions.h"
#include "../N/longNatFunctions.h"
#include "../N/helpFunctions.h"

LNGINT DIV_ZZ_Z(LNGINT divident, LNGINT divider)
{
	LNGINT ans;
	int err = 0;
	if (divident.A && divider.A)
	{
		LNGNT a, b;
		a = ABS_Z_N(divident);
		b = ABS_Z_N(divider);
		a = DIV_NN_N(a, b);
		ans = TRANS_N_Z(a);
		ans.sign = (!divider.sign && divident.sign) || (!divident.sign && divider.sign);
	}
	else
		err = 1;

	if (err)
		std::cout << "Ошибка, число не существует!";

	return ans;
}