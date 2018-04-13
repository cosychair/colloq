#include <iostream>
#include "longPoly.h"
#include "../Q/longFracFunctions.h"
#include "longPolyFunctions.h"

/*
result, deg - �������� ��������� � ��� �������
buffer, fullBuffer ��������������� ���������� (����������)

������������ ��� - PLNM
*/

PLNM MUL_PP_P(PLNM poly1, PLNM poly2)
{
	
	PLNM res;
	res = MUL_PQ_P(MUL_Pxk_P(poly1, poly2.deg), poly2.C[0]);
	for(int i = 1; i <= poly2.deg; ++i)
		res = ADD_PP_P(res, MUL_PQ_P(MUL_Pxk_P(poly1, poly2.deg - i), poly2.C[i]));
//    PLNM result, buffer = poly1, fullBuffer = poly2;
//    result.deg = poly1.deg + poly2.deg;
//    for(unsigned i=0; i<poly2.deg; i++)
//    {
///*        buffer.C[i] = MUL_Pxk_P(poly1, poly2.deg).C[i];
//		fullBuffer.C[i] = MUL_PQ_P(poly1, poly2.C[i]).C[i];
//		result.C[i] = ADD_PP_P(poly1, fullBuffer).C[i]; //���������� ����� ����� �� ����� ���� ����� ��������
//  */  }
//	
//    //printf("\n������ ����� ������ ������ ��������� �������, �� �� ����� � ����� ���� �� ��������� :(\n");
//
	return res;
}
