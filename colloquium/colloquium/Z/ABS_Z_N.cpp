#include <stdlib.h>
#include <stdio.h>
#include "longInteger.h"
#include "../Z/longIntFunctions.h"

LNGNT ABS_Z_N(LNGINT numb)
    {
        LNGNT answer;
        
        if(numb.A)
            {
                answer.n = numb.n;
                answer.A = (int*) malloc(answer.n*sizeof(int));
                for (int i = 0; i < numb.n; ++i)
                    *(answer.A+i) = *(numb.A+i);
            }
        else
            printf("\nОшибка, числа не существует!\n");
        return answer;
}





