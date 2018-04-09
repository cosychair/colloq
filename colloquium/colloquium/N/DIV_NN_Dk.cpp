#include <stdlib.h>
#include <stdio.h>
#include "longNat.h"
#include "longNatFunctions.h"
#include "helpFunctions.h"

LNGNT DIV_NN_Dk(LNGNT pervoe,LNGNT vtoroe)
{
    int error = 0,
            k = 0;
    LNGNT answer;
    if(pervoe.A && vtoroe.A)
    {
        LNGNT a;
        int comp, len = 0;
        a.n = vtoroe.n;
        a.A = (int*) malloc(a.n*sizeof(int));
        for(int i = 0; i<a.n;++i)
            *(a.A+i) = *(pervoe.A+i);
        comp = COM_NN_D(a,vtoroe);
        error = comp == -1;
        if(comp == 1)
        {
            a.A = (int*) realloc(a.A, (vtoroe.n+1)*sizeof(int));
            ++a.n;
            *(a.A+vtoroe.n) = *(vtoroe.A+vtoroe.n);
        }
        len = a.n;
        do
        {

            ++k;
            a = SUB_NN_N(a, vtoroe);
            comp = COM_NN_D(a,vtoroe);
            error = comp == -1;
        }
        while(!error && (comp == 2 || comp == 0));
        answer.n = 1;
        answer.A = (int*) malloc(sizeof(int));
        *(answer.A) = k;
        MUL_Nk_N(&answer, pervoe.n-len);
    }
    else
        error = 1;

    if(error)
        printf("\nОшибка, число не существует!\n");

    return answer;
}