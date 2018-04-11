#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include "longNat.h"
#include "longNatFunctions.h"
#include "helpFunctions.h"


#include "../Output/outputN.h"

using namespace std;
LNGNT SUB_NN_N(LNGNT x, LNGNT y)
{

	int i = y.n - 1;
	int *z = new int[x.n];
	LNGNT sub;
	int l = 0;
	bool t = false;
	if (COM_NN_D(x, y) == 1)
		swapN(&x, &y);
	else;
	while (i != -1)
	{
		z[x.n - (y.n - i)] = x.A[x.n - (y.n - i)] - y.A[i];
		if (t)
			--z[x.n - (y.n - i)];
		else;
		t = false;
		if (z[x.n - (y.n - i)] < 0)
		{
			t = true;
			z[x.n - (y.n - i)] += 10;
		}
		else;
		--i;
	}
	
	i = x.n - y.n - 1;
	while (i != -1)
	{
		z[i] = x.A[i];
		if (t)
			--z[i];
		else;
		t = false;
		if (z[i] < 0)
		{
			t = true;
			z[i] += 10;
		}
		else;
		i--;
	}
	i++;
	while (i != x.n && z[i] == 0)
	{

		i++;
	}
	if (i == -1)
	{
		sub.A = new int[1];
		sub.A[0] = 0;
		sub.n = 1;
	}
	else
	{
		
		sub.n = x.n - i;
		sub.A = new int[sub.n];
		for (i; i < x.n; i++)
		{
			sub.A[sub.n - (x.n - i)] = z[i];
		}
	};
	
	return(sub);
}
