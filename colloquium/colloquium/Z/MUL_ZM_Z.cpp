#include <cstdio>
#include "longInteger.h"
#include "../Z/longIntFunctions.h"

LNGINT MUL_ZM_Z(LNGINT number){
    if(number.A)
        number.sign = !number.sign;
    else
        printf("\nОшибка, число не существует!\n");
	return number;
}