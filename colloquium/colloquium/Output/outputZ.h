#pragma once
#ifndef OUTZ_H
#define OUTZ_H
#include "../Z/longInteger.h"

/*
printZ

Функция для вывода в консоль целого числа

Параметры:
1) а - число

Ничего не возвращает
*/
void printZ(LNGINT a);

/*
freeZ

Функция для удаления целого числа

Параметры:
1) а - число

Ничего не возвращает
*/
void freeZ(LNGINT* a);

/*
printMenuZ

Функция для вывода меню выбора действий с целыми числами

Ничего не возвращает
*/
void printMenuZ();

void showInfoMenuZ(int number);
#endif