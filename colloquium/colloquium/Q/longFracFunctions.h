#ifndef LFFUNC_H
#define LFFUNC_H

/*
longFracFunctions.h �������� � ���� ������� ��� ������ � �������� �������, ������������� ���������� ������ 7302.
���������� ������� ������� - �������� ������.
������������� �� �������� - ������ ������.
*/

#include "longFraction.h"
#include "../N/longNatFunctions.h"
#include "../Z/longIntFunctions.h"

/*
RED_Q_Q

@author �������� ������

������� ��� ���������� ������������ �����

���������:
1) drob - �����

������� ��������� ��� - FRCT
*/
FRCT RED_Q_Q(FRCT drob);

/*
INT_Q_B

@author ������� �����

������� ��������� ���� ������

���������:
1) num - �����

������� ���������� ��������� ���� - int
*/
int INT_Q_B(FRCT num);

/*
TRANS_Z_Q

@author ���� ������

������� ���������� ����� � �������

���������:
1)a - �����

������� ���������� ��������� ���� - FRCT 
*/
FRCT TRANS_Z_Q(LNGINT a);

/*
TRANS_Q_Z

@author �������� �������

������� ���������� ������� � �����, ���� ����������� 1

drob - �����

������������ ��� - LNGINT
*/
LNGINT TRANS_Q_Z(FRCT drob);

/*
ADD_QQ_Q

@author ���������� ��������

������� ��� �������� ���� ������

���������:
1) x - ������ ������������ �����
2) y - ������ ������������ �����

������� ���������� ��� FRCT
*/
FRCT ADD_QQ_Q(FRCT x, FRCT y);

/*
SUB_QQ_Q

@author Krasotkin Ivan

������� ��� ������� ���� ������������ �����

���������:
1) divident - ������ �����
2) divider - ������ �����

������� ���������� ��� FRCT
*/
FRCT SUB_QQ_Q(FRCT divident, FRCT divider);

/*
MUL_QQ_Q

@author ���������� �������

������� �������� ��� ������������ �����

���������:
1) a - ������ �����
2) b - ������ �����

������� ���������� ��������� ���� - FRCT
*/
FRCT MUL_QQ_Q(FRCT a, FRCT b);


/*
DIV_QQ_Q

@author Ivanov Daniil

��������� ������������ ����� - ��������� �������
divident �� divider

���������:
1) divident - ������ �����
2) divider - ������ �����

������� ���������� ��������� ���� - FRCT
*/
FRCT DIV_QQ_Q(FRCT divident, FRCT divider);
#endif