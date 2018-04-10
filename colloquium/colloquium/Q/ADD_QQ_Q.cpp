#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include "longFraction.h"
#include "../N/longNatFunctions.h"
#include "longFracFunctions.h"
using namespace std;

FRCT ADD_QQ_Q(FRCT x, FRCT y)
{
    FRCT sum;
	int error;
    if (x.num.A && x.den.A && y.num.A && y.den.A)
    {
    	error = 0;
        LNGINT a, c;
        LNGNT b, d, k, nok;// ����� ���� a/b � c/d 
        a = x.num;
        b = x.den;
        c = y.num;
        d = y.den; 
        nok = LCM_NN_N(TRANS_Z_N(c), d);//����� ��� ������ ��������� �������� ������ �����, �� ������� ��� ������������
        sum.den = nok;
        k = b;
        b = DIV_NN_N(nok, TRANS_Z_N(c));//����� ��� ������ ��������� �������� ������ �����, �� ������� ��� ������������
        d = DIV_NN_N(nok, k);
       	a = MUL_ZZ_Z(a, TRANS_N_Z(d));
		c = MUL_ZZ_Z(c, TRANS_N_Z(b));
		sum.num = ADD_ZZ_Z(a, c);
    }
    else
        error = 1;
    
    if(error)
        cout<< "������, ���� �� ����� ����������!";
    return sum;
}
