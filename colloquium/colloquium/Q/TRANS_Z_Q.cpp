#include <iostream>
#include <cstdlib>
#include "longFraction.h"
#include "../N/longNatFunctions.h"
#include "longFracFunctions.h"
using namespace std;

FRCT TRANS_Z_Q(LNGINT t)
{
    FRCT ttr;
    if(t.A)
        {
            ttr.den.n = 1;
            ttr.den.A = (int*) malloc(sizeof(int));
            *(ttr.den.A) = 1;
            ttr.num.sign = t.sign;
            ttr.num.n = t.n;
            ttr.num.A = (int*) malloc(ttr.num.n*sizeof(int));
            for (int i = 0; i < t.n; ++i)
                *(ttr.num.A+i) = *(t.A+i);
        }
    else
        cout << ("Error, numer doesn`t exist!\n")<<endl;
        
    return ttr;
}