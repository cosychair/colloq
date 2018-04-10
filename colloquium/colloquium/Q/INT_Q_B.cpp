#include <stdlib.h>
#include <iostream>
#include "longFraction.h"
#include "../N/longNatFunctions.h"
#include "longFracFunctions.h"

int INT_Q_B(FRCT num)
{
	int ans = 0;
	if (num.den.A && num.num.A)
		ans = *(num.den.A) == 1 && num.den.n == 1;
	else
	{
		std::cout << "Ошибка, число не существует!" ;
		ans = -1;
	}
	return ans;
}