#pragma once
#ifndef OUTN_H
#define OUTN_H
#include "..//N/longNat.h"

/*
printN

Функция для вывода в консоль натурального числа

Параметры:
1) а - число

Ничего не возвращает
*/
void printN(LNGNT a);

/*
freeN

Функция для удаления натурального числа

Параметры:
1) а - число

Ничего не возвращает
*/
void freeN(LNGNT* a);

/*
printMenuN

Функция для вывода меню выбора действий с натуральными числами

Ничего не возвращает
*/
void printMenuN();


#endif