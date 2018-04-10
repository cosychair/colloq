#ifndef LFFUNC_H
#define LFFUNC_H

/*
longFracFunctions.h содержит в себе функции для работы с длинными дробями, разработанные студентами группы 7302.
Архитектор данного проекта - Кириллов Даниил.
Ответственный за качество - Иванов Даниил.
*/

#include "longFraction.h"
#include "../N/longNatFunctions.h"
#include "../Z/longIntFunctions.h"

/*
RED_Q_Q

@author Богданов Кирилл

Функция для сокращения рациональных чисел

Параметры:
1) drob - дробь

Функция возращает тип - FRCT
*/
FRCT RED_Q_Q(FRCT drob);

/*
INT_Q_B

@author Лебедев Антон

Функция сравнения двух дробей

Параметры:
1) num - число

Функция возвращает результат типа - int
*/
int INT_Q_B(FRCT num);

/*
TRANS_Z_Q

@author Евич Никита

Функция пребразует целое в дробное

Параметры:
1)a - число

Функция возвращает результат типа - FRCT 
*/
FRCT TRANS_Z_Q(LNGINT a);

/*
TRANS_Q_Z

@author Карманов Дмитрий

Функция пребразует дробное в целое, если знаменатель 1

drob - число

Возвращаемый тип - LNGINT
*/
LNGINT TRANS_Q_Z(FRCT drob);

/*
ADD_QQ_Q

@author Десятников Григорий

Функция для сложения двух дробей

Параметры:
1) x - первое вещественное число
2) y - второе вещественное число

Функция возфращает тип FRCT
*/
FRCT ADD_QQ_Q(FRCT x, FRCT y);

/*
SUB_QQ_Q

@author Krasotkin Ivan

Функция для деления двух рациональных чисел

Параметры:
1) divident - первое число
2) divider - второе число

Функция возфращает тип FRCT
*/
FRCT SUB_QQ_Q(FRCT divident, FRCT divider);

/*
MUL_QQ_Q

@author Мазуркевич Дмитрий

Функция умножает два рациональных числа

Параметры:
1) a - первое число
2) b - второе число

Функция возвращает результат типа - FRCT
*/
FRCT MUL_QQ_Q(FRCT a, FRCT b);


/*
DIV_QQ_Q

@author Ivanov Daniil

Возращает рациональное число - результат деления
divident на divider

Параметры:
1) divident - первое число
2) divider - второе число

Функция возвращает результат типа - FRCT
*/
FRCT DIV_QQ_Q(FRCT divident, FRCT divider);
#endif