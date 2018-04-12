#include <stdio.h>
#include <stdlib.h>
#include "longPoly.h"
#include "../Q/longFracFunctions.h"
#include "longPolyFunctions.h"


LNGNT TRANS_I_N(unsigned int i){
	LNGNT n;
	int j = i;
	n.n = 0;
	
	while((j/=10) != 0) ++n.n;
	++n.n;
	n.A = (int*)malloc(n.n*sizeof(int));
	for(j = (n.n-1); j >= 0; --j){
		*(n.A + j) = i%10; //alaaaarm
		i/=10;
	}
	
	return n;
}

PLNM DER_P_P(PLNM poly){
	PLNM ans;
	if (poly.C){
		ans.deg = poly.deg-1;
		ans.C = (FRCT*)malloc(ans.deg*sizeof(FRCT));
		if(ans.C){ 
			for(int i = 0; i < ans.deg; ++i) *(ans.C + i) = MUL_QQ_Q(*(poly.C + i), TRANS_Z_Q(TRANS_N_Z(TRANS_I_N(poly.deg - i))));
		}
	}
	else
		printf("Polynomial doesn`t exist!\n");	
	return ans;
}




