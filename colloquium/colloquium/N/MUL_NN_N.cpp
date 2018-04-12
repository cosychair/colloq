#include <stdlib.h>
#include <iostream>
#include "longNat.h"
#include "longNatFunctions.h"

LNGNT MUL_NN_N(LNGNT First, LNGNT Second)
{
	LNGNT ans;
	LNGNT a;
	if (First.A && Second.A)
	{
		ans.n = First.n>Second.n ? Second.n : First.n;
		ans.A = (int*)calloc(ans.n, sizeof(int));
		for (int i = First.n - 1; i >= 0; --i)
		{
			a = MUL_ND_N(Second, *(First.A + i));
			a = MUL_Nk_N(a, First.n - i - 1);
			ans = ADD_NN_N(a, ans);
		}
	}
	else
		std::cout << "Error, numer doesn`t exist!\n";
	return ans;
}