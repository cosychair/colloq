#include <cstdlib>
#include <iostream>
#include "longInteger.h"
#include "../Z/longIntFunctions.h"
#include "../N/longNatFunctions.h"
#include "../N/helpFunctions.h"
#include "../Output/outputN.h"
using namespace std;

LNGINT MUL_ZZ_Z(LNGINT ln, LNGINT lt)
    {
        LNGINT ttr;
		ttr.A = NULL;
		ttr.n = 0;
		ttr.sign = 0;
        LNGNT lx;
        int error = 0;
        if(ln.A && lt.A)
            {
                LNGNT lnN,ltN;
                lnN = ABS_Z_N(ln);      
                ltN = ABS_Z_N(lt);     
                if(lnN.A && ltN.A)
                    {
                        lx = MUL_NN_N(lnN, ltN); 
                        ttr.sign = 0;
                        ttr.n = lx.n;
                        ttr.A = (int*) malloc(ttr.n*sizeof(int));
                        for(int i = 0; i < lx.n; ++i)
                            *(ttr.A + i) = *(lx.A+i);
                        if(ln.sign != lt.sign)
							ttr = MUL_ZM_Z(ttr); 
						else;
						freeN(&lx);
						if (ttr.A[0] == 0 )
						{
							ttr.n = 1;
							ttr.sign = 0;
						}
						else;
                    }
                else
                    error = 1;
				freeN(&lnN);
				freeN(&ltN);
            }
        else
            error = 1;
        
        if(error == 1)
            cout << "Error, numer doesn`t exist!" << endl;
        
        return ttr;
    }