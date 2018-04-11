#include <cstdio>
#include "longInteger.h"
#include "../Z/longIntFunctions.h"

LNGINT MUL_ZM_Z(LNGINT number){
    if(number.A)
        if (POZ_Z_D(number) != 0)
			number.sign = !number.sign;
		else;
    else
        printf("\nОшибка, число не существует!\n");
	return number;
}