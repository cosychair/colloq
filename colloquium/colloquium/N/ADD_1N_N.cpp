#include <stdlib.h>
#include <stdio.h>
#include "longNat.h"
#include "longNatFunctions.h"
#include "helpFunctions.h"

LNGNT ADD_1N_N(LNGNT numb)
{
    LNGNT answer;
    if (numb.A)
        {
            answer.n = numb.n;
            answer.A = (int*) malloc(answer.n*sizeof(int));
            for(int i = 0; i < answer.n; ++i)
                *(answer.A+i) = *(numb.A+i);
            if(*(answer.A+answer.n-1) == 9)
                {
					reverseN(&answer);
                    int ost = 1;
                    for(int i = 0; i < answer.n && ost; ++i)
                        {
                            *(answer.A + i) += ost;
                            ost = *(answer.A + i ) / 10;
                            *(answer.A + i) %= 10 ;
                        }
                    if(ost)
                        {
                            answer.A = (int*) realloc(answer.A, (answer.n)*sizeof(int));
                            *(answer.A+answer.n) = ost;
                            ++answer.n;
                        }
					reverseN(&answer);
                }
            else
                ++*(answer.A+answer.n-1);
        }
    else
        printf("Error, number doesn`t exist\n");

    return answer;

}


