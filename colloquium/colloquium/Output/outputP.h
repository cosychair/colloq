#pragma once
#ifndef OUTP_H
#define OUTP_H
#include "../P/longPoly.h"

/*
printP

������� ��� ������ � ������� ����������

���������:
1) � - �����

������ �� ����������
*/
void printP(PLNM a);

/*
freeP

������� ��� �������� ����������

���������:
1) � - �����

������ �� ����������
*/
void freeP(PLNM* a);

/*
printMenuP

������� ��� ������ ���� ������ �������� � ������������

������ �� ����������
*/
void printMenuP();

void showInfoMenuP(int number);

#endif