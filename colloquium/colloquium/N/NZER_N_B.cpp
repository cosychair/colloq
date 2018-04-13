#include <stdlib.h>
#include <stdio.h>
#include "longNat.h"
#include "../N/longNatFunctions.h"

int NZER_N_B(LNGNT x)
{
	int ans = 0;
	if (x.A)
	{
		
		for (int i = 0; i < x.n; i++)
			if (x.A[i] != 0)
				ans = 1;
	}
	else
	{
		printf("\nError, number doesn`t exist!\n");
		ans = -1;
	}

	return ans;
}
