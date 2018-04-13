#include <iostream>
#include "longNat.h"
#include "longNatFunctions.h"
#include "helpFunctions.h"
#include "../Output/outputN.h"
LNGNT DIV_NN_N(LNGNT a, LNGNT b)
{
	{
		LNGNT ans;
		if (COM_NN_D(a, b) == 1)swapN(&a,&b);
		int error = 0;
		if (a.A && b.A)
		{
			LNGNT x , p, q;
			x.A = (int*)malloc(a.n * sizeof(int));
			x.n = a.n;
			for (int i = 0; i < a.n; ++i)
				*(x.A + i) = *(a.A + i);
			ans.n = 1;
			ans.A = (int*)calloc(ans.n, sizeof(int));
			int comp;
			do
			{
				LNGNT k = DIV_NN_Dk(x, b);
				p = ADD_NN_N(k, ans);
				freeN(&ans);
				ans = p;
				q = SUB_NN_N(x, MUL_NN_N(b, k));
				freeN(&x);
				x = q;
				comp = COM_NN_D(x, b);
				error = comp == -1;
			} while (!error && (comp == 2 || comp == 0));
			freeN(&x);
		}
		else
			error = 1;

		if (error)
			printf("\nError, number doesn`t exist!\n");

		return ans;
	}
}