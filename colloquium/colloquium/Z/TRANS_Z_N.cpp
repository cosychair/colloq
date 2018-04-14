#include <stdlib.h>
#include <iostream>
#include "../N/longNat.h"
#include "longInteger.h"
#include "../Z/longIntFunctions.h"
using namespace std;

LNGNT TRANS_Z_N(LNGINT numb)
{
	LNGNT outNumb;
	outNumb.A = NULL;
	outNumb.n = 0;
	if (numb.A)
		if (numb.sign == 0)
		{
			outNumb.n = numb.n;
			outNumb.A = (int*)malloc(outNumb.n * sizeof(int));
			for (int i = 0; i < outNumb.n; i++)
				outNumb.A[i] = numb.A[i];
		}
		else
			cout<<"Current action can`t be finished in case of you put negative number.";
	else
		cout<<"\nError, numer doesn`t exist!\n";
	return outNumb;
}
