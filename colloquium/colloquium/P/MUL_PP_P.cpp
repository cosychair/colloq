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

    PLNM result, buffer, fullBuffer;
    result.deg = poly1.deg + poly2.deg;
    /*for(unsigned i=0; i<poly2.deg; i++)
    {
        buffer.C[i] = MUL_Pxk_P(poly1, poly2.deg);
		fullBuffer.C[i] = MUL_PQ_P(poly1, poly2.C[i]);
		result.C[i] = ADD_PP_P(poly1, fullBuffer); //���������� ����� ����� �� ����� ���� ����� ��������
    }*/

    //printf("\n������ ����� ������ ������ ��������� �������, �� �� ����� � ����� ���� �� ��������� :(\n");

    return result;
}
