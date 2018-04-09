#include <cstdio>
#include "longInteger.h"
#include "MUL_ZM_Z.h"

void multiMinusOne(LNGINT* number){
    if(number->A)
        number->sign = !number->sign;
    else
        printf("\nОшибка, число не существует!\n");
}