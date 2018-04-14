#include <stdlib.h>
#include <iostream>
#include "longNat.h"
#include "longNatFunctions.h"
#include "../Output/outputN.h"
LNGNT MUL_NN_N(LNGNT First, LNGNT Second)
{
	LNGNT ans, t;
	LNGNT a,b;
	if (First.A && Second.A)
	{
		ans.n = First.n>Second.n ? Second.n : First.n;
		ans.A = (int*)calloc(ans.n, sizeof(int));
		bool p = true;
		for (int i = First.n - 1; i >= 0; --i)
		{
			a = MUL_ND_N(Second, *(First.A + i));
			b = MUL_Nk_N(a, First.n - i - 1);
			t = ADD_NN_N(b, ans);
			freeN(&ans);
			ans = t;
			freeN(&b);
		}
	}
	else
		std::cout << "Error, numer doesn`t exist!\n";
	return ans;
}