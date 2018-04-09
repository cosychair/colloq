#include <iostream>
#include "longNat.h"
#include "longNatFunctions.h"
#include "helpFunctions.h"

LNGNT DIV_NN_N(LNGNT a, LNGNT b)
{
	{
		LNGNT ans;
		int error = 0;
		if (a.A && b.A)
		{
			LNGNT aD = a;
			for (int i = 0; i < a.n; ++i)
				*(aD.A + i) = *(a.A + i);
			ans.n = 1;
			ans.A = (int*)calloc(ans.n, sizeof(int));
			int comp;
			do
			{
				LNGNT k = DIV_NN_Dk(aD, b);
				ans = ADD_NN_N(k, ans);
				aD = SUB_NN_N(aD, MUL_NN_N(b, k));
				comp = COM_NN_D(aD, b);
				error = comp == -1;
			} while (!error && (comp == 2 || comp == 0));
		}
		else
			error = 1;

		if (error)
			printf("\nОшибка, число не существует!\n");

		return ans;
	}
}