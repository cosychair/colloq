#pragma once
#ifndef OUTP_H
#define OUTP_H
#include "../P/longPoly.h"

/*
printP

Функция для вывода в консоль многочлена

Параметры:
1) а - число

Ничего не возвращает
*/
void printP(PLNM a);

/*
freeP

Функция для удаления многочлена

Параметры:
1) а - число

Ничего не возвращает
*/
void freeP(PLNM* a);

/*
printMenuP

Функция для вывода меню выбора действий с многочленами

Ничего не возвращает
*/
void printMenuP();

void showInfoMenuP(int number);

#endif