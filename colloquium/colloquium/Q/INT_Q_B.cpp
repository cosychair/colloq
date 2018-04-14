#include <stdlib.h>
#include <iostream>
#include "longFraction.h"
#include "../N/longNatFunctions.h"
#include "longFracFunctions.h"
#include "../Output/outputQ.h"
int INT_Q_B(FRCT num)
{
	int ans = 0;
	if (num.den.A && num.num.A)
	{
		FRCT p = RED_Q_Q(num);
		ans = p.den.A[0] == 1 && p.den.n == 1;
		freeQ(&p);
	}
	else
	{
		std::cout << "Error, numer doesn`t exist!";
		ans = -1;
	}
	return ans;
}