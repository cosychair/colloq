#pragma once
#ifndef OUTQ_H
#define OUTQ_H
#include "../Q/longFraction.h"

/*
printQ

Функция для вывода в консоль дроби

Параметры:
1) а - число

Ничего не возвращает
*/
void printQ(FRCT a);

/*
freeQ

Функция для удаления дроби

Параметры:
1) а - число

Ничего не возвращает
*/
void freeQ(FRCT* a);

/*
printMenuQ

Функция для вывода меню выбора действий с дробями

Ничего не возвращает
*/
void printMenuQ();

#endif