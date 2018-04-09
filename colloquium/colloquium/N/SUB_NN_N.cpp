#include <stdio.h>
#include <stdlib.h>
#include "longNat.h"
#include "longNatFunctions.h"
#include "helpFunctions.h"

LNGNT SUB_NN_N(LNGNT x, LNGNT y)
{
	int i = 0;
	int *z = new int[x.n];
	LNGNT sub;
	int l = 0;
	bool t = false;
	while(i != y.n )
	{	
		z[i] = x.A[i] - y.A[i];
		if (t)
			--z[i];
		else;
		t = false;
		if (x.A[i] < 0)
		{
			t = true;
			z[i] += 10;
		}
		else;
	}
	while(i != x.n)
	{	
		z[i] = x.A[i];
		if (t)
			--z[i];
		else;
		t = false;
		if (x.A[i] < 0)
		{
			t = true;
			z[i] += 10;
		}
		else;
	}
	i--; 
	while(i != -1 && z[i] != 0)
	{
		i--;
	}
	if (i == -1)
	{
		sub.A = NULL;
		sub.n = 0;
	}
	else
	{
		sub.n = i + 1;
		sub.A = new int[sub.n];
		for(i = 0; i < sub.n; i++)
			sub.A[i] = z[i];
	}
	return sub;
}
