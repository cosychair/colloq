#include <stdlib.h>
#include <iostream>
#include "longFraction.h"
#include "../N/longNatFunctions.h"
#include "longFracFunctions.h"

int INT_Q_B(FRCT num)
{
	int ans = 0;
	if (num.den.A && num.num.A)
	{
		num = RED_Q_Q(num);
		ans = num.den.A[0] == 1 && num.den.n == 1;
	}
	else
	{
		std::cout << "Ошибка, число не существует!" ;
		ans = -1;
	}
	return ans;
}