#include <string>
#include <iostream>
#include "../Output/outputCom.h"
#include "../Output/outputN.h"
#include "../Output/outputZ.h"
#include "../N/longNat.h"
#include "../N/longNatFunctions.h"
#include "../Output/outputN.h"
#include "../Output/outputCom.h"
#include "../Input/inputN.h"
#include "../Z/longInteger.h"
#include "../Z/longIntFunctions.h"
#include "../Input/inputZ.h"
#include "../Output/outputZ.h"
#include "../Q/longFraction.h"
#include "../Q/longFracFunctions.h"
#include "../Output/outputQ.h"
#include "../Input/inputQ.h"
#include "../Input/inputP.h"
#include "../Output/outputP.h"
#include "../P/longPoly.h"
#include "../P/longPolyFunctions.h"
#include "info.h"
using namespace std;

void sleep(int time) {
	for (int i = 0; i < time*1000000; i++);
}

void printAuthors() {
	system("cls");
	cout << "Architect and magnificent translator :" << endl;
	cout << "Kirillov Daniil" << endl << endl;
	sleep(200);
	cout << "Manager and awesome test~maker :" << endl;
	cout << "Ivanov Daniil" << endl << endl;	sleep(200);
	cout << "The best testers and developers ever :" << endl;
	cout << "Desyatnikov Gregory" << endl;	sleep(100);
	cout << "Miller Vlad" << endl;	sleep(100);
	cout << "Lebedev Anton" << endl<<endl; sleep(200);
	cout << "Person who knows all code because he did web version:" << endl; 
	cout << "Zenkin Vlad" << endl << endl;sleep(200);
	cout << "And our nice rapid function developers:" << endl;
	cout << "Evich Nikita" << endl;	sleep(100);
	cout << "Mazurkevich Dima" << endl;	sleep(100);
	cout << "Karmanov Dmitrii" << endl;	sleep(100);
	cout << "Krasotkin Ivan" << endl;	sleep(100);
	cout << "Lunev Pavel" << endl;	sleep(100);
	cout << "Mazurkevich Dima" << endl;	sleep(100);
	cout << "Bogdanov Kirill" << endl << endl;	sleep(200);

	cout << "Dear user / viewers we spent huge amount of our energy on this progect for FREE, if we will do such things in future, we die homeless.\nWe need especially your support to do our next uncommercial projects.With love, DT." << endl;
	cout << endl << "VISA(SBER)~5469550078016927" << endl;
	cout << endl << "ETH~ 0xBAaf60eE4F28F39b0468AaF6116d75a2ed54698E" << endl;
	cout << endl << "MAIL FOR GOLD DEALS ~secretlogin1@yandex.ru" << endl;
}

int chooseFunctionN(int number) {
	LNGNT a, b;
	a.A = b.A = NULL;
	int k;
	/*int number = 0;
	do {
	cin >> number;*/
	//system("cls");
	switch (number) {
	case 1:
		printIN();
		a = readN();
		printIN();
		b = readN();
		switch (COM_NN_D(a, b))
		{
		case 0: cout << "Numbers are similar." << endl; break;
		case 1: cout << "Second number was bigger than first." << endl; break;
		case 2: cout << "First number was bigger than second." << endl; break;
		default: printError(); break;
		}
		break;
	case 2:
		printIN();
		a = readN();
		if (NZER_N_B(a))
			cout << "This number izn`t zero." << endl;
		else
			cout << "This number is zero." << endl;
		break;
	case 3:
		printIN();
		a = readN();
		printN(ADD_1N_N(a));
		break;
	case 4:
		printIN();
		a = readN();
		printIN();
		b = readN();
		printN(ADD_NN_N(a, b));
		break;
	case 5:
		printIN();
		a = readN();
		printIN();
		b = readN();
		printN(SUB_NN_N(a, b));
		break;
	case 6:
		printIN();
		a = readN();
		cout << "Print numeral:" << endl;
		cin >> k;
		printN(MUL_ND_N(a, k));
		break;
	case 7:
		printIN();
		a = readN();
		cout << "Print numeral:" << endl;
		cin >> k;
		printN(MUL_Nk_N(a, k));
		break;
	case 8:
		printIN();
		a = readN();
		printIN();
		b = readN();
		printN(MUL_NN_N(a, b));
		break;
	case 9:
		printIN();
		a = readN();
		cout << "Print numeral:" << endl;
		cin >> k;
		printIN();
		b = readN();
		printN(SUB_NDN_N(a, b, k));
		break;
	case 10:
		printIN();
		a = readN();
		printIN();
		b = readN();
		printN(DIV_NN_Dk(a, b));
		break;
	case 11:
		printIN();
		a = readN();
		printIN();
		b = readN();
		printN(DIV_NN_N(a, b));
		break;
	case 12:
		printIN();
		a = readN();
		printIN();
		b = readN();
		printN(MOD_NN_N(a, b));
		break;
	case 13:
		printIN();
		a = readN();
		printIN();
		b = readN();
		printN(GCF_NN_N(a, b));
		break;
	case 14:
		printIN();
		a = readN();
		printIN();
		b = readN();
		printN(LCM_NN_N(a, b));
		break;
	default: printError(); break;
	}
	//} while (number == 0);*/
	freeN(&a);
	freeN(&b);
	return number;
}

void infoN()
{
	string temp = "";
	int i = 0, number = 0, st = 1, err = 0;
	cin >> temp;
	i = temp.length();
	/*if (temp[0] != 'i')
	{
		for (int j = i - 1; j != 3; --j)
		{
			number = number + (temp[j] - 48) * st;
			st = st * 10;
		}
		system("cls");
		showInfoMenuN(number);
		chooseFunctionN(number);
	}
	else
	{*/
		for (int j = i - 1; j != -1; --j)
		{
			number = number + ((int)temp[j] - 48) * st;
			st = st * 10;
		}
		system("cls");
		showInfoMenuN(number);
		chooseFunctionN(number);
	//}
}

int chooseFunctionZ(int number) {
	LNGINT a, b;
	LNGNT n;
	a.A = b.A = n.A = NULL;
	/*int number = 0;
	do {
	cin >> number;*/
	switch (number) {
	case 1:
		printIN();
		a = readZ();
		printN(ABS_Z_N(a));
		break;
	case 2:
		printIN();
		a = readZ();
		switch (POZ_Z_D(a))
		{
		case 0: cout << "This number izn`t zero." << endl; break;
		case 1: cout << "This number is negative." << endl; break;
		case 2: cout << "This number is positive." << endl; break;
		default: printError(); break;
		}
		break;
	case 3:
		printIN();
		a = readZ();
		printZ(MUL_ZM_Z(a));
		break;
	case 4:
		printIN();
		n = readN();
		printZ(TRANS_N_Z(n));
		break;
	case 5:
		printIN();
		a = readZ();
		printN(TRANS_Z_N(a));
		break;
	case 6:
		printIN();
		a = readZ();
		printIN();
		b = readZ();
		printZ(ADD_ZZ_Z(a, b));
		break;
	case 7:
		printIN();
		a = readZ();
		printIN();
		b = readZ();
		printZ(SUB_ZZ_Z(a, b));
		break;
	case 8:
		printIN();
		a = readZ();
		printIN();
		b = readZ();
		printZ(MUL_ZZ_Z(a, b));
		break;
	case 9:
		printIN();
		a = readZ();
		printIN();
		b = readZ();
		printZ(DIV_ZZ_Z(a, b));
		break;
	case 10:
		printIN();
		a = readZ();
		printIN();
		b = readZ();
		printZ(MOD_ZZ_Z(a, b));
		break;
	default: printError();  break;
	}
	//} while (number == 0);
	freeZ(&a);
	freeZ(&b);
	return number;
}

void infoZ()
{
	string temp = "";
	int i = 0, number = 0, st = 1;
	cin >> temp;
	i = temp.length();
	/*if (temp[0] == 'i')
	{
		for (int j = i - 1; j != 3; --j)
		{
			number = number + (temp[j] - 48) * st;
			st = st * 10;
		}system("cls");
		showInfoMenuZ(number);
		chooseFunctionZ(number);
	}
	else
	{*/
		for (int j = i - 1; j != -1; --j)
		{
			number = number + ((int)temp[j] - 48) * st;
			st = st * 10;
		}
		system("cls");
		showInfoMenuZ(number);
		chooseFunctionZ(number);
	//}
}

int chooseFunctionQ(int number) {
	FRCT a, b;
	LNGINT z;
	a.den.A = a.num.A = b.den.A = b.num.A = NULL;
	/*int number = 0;
	do {
	cin >> number;*/
	switch (number) {
	case 1:
		printFR();
		a = readQ();
		printQ(RED_Q_Q(a));
		break;
	case 2:
		printFR();
		a = readQ();
		if (INT_Q_B(a) == 1)
			cout << "This isn`t a fraction." << endl;
		else
			cout << "This is a fraction." << endl;
		break;
	case 3:
		printIN();
		z = readZ();
		printQ(TRANS_Z_Q(z));
		break;
	case 4:
		printFR();
		a = readQ();
		printZ(TRANS_Q_Z(a));
		break;
	case 5:
		printFR();
		a = readQ();
		printFR();
		b = readQ();
		printQ(ADD_QQ_Q(a, b));
		break;
	case 6:
		printFR();
		a = readQ();
		printFR();
		b = readQ();
		printQ(SUB_QQ_Q(a, b));
		break;
	case 7:
		printFR();
		a = readQ();
		printFR();
		b = readQ();
		printQ(MUL_QQ_Q(a, b));
		break;
	case 8:
		printFR();
		a = readQ();
		printFR();
		b = readQ();
		printQ(DIV_QQ_Q(a, b));
		break;
	default: printError(); break;
	}
	/*} while (number == 0);*/
	cin.get();
	cin.get();
	freeQ(&a);
	freeQ(&b);
	return number;
}

void infoQ()
{
	string temp = "";
	int i = 0, number = 0, st = 1;
	cin >> temp;
	i = temp.length();
	/*if (temp[0] == 'i')
	{
		for (int j = i - 1; j != 3; --j)
		{
			number = number + (temp[j] - 48) * st;
			st = st * 10;
		}
		system("cls");
		showInfoMenuQ(number);
		chooseFunctionQ(number);
	}
	else
	{*/
		for (int j = i - 1; j != -1; --j)
		{
			number = number + ((int)temp[j] - 48) * st;
			st = st * 10;
		}
		system("cls");
		showInfoMenuQ(number);
		chooseFunctionQ(number);
	//}
}

int chooseFunctionP(int number) {
	PLNM a, b;
	FRCT q;
	int d;
	char c;
	/*int number = 0;
	do {
	cin >> number;*/
	switch (number) {
	case 1:
		printPLN();
		//c ;//fix print
		while (std::cin.get(c) && c != '\n');
		a = readP();
		printPLN();
		b = readP();
		printP(ADD_PP_P(a, b));
		break;
	case 2:
		printPLN();
		//c;//fix print
		while (std::cin.get(c) && c != '\n');
		a = readP();
		printPLN();
		b = readP();
		printP(SUB_PP_P(a, b));
		break;
	case 3:
		printPLN();
		c = ' ';//fix print
		while (std::cin.get(c) && c != '\n');
		a = readP();
		printFR();
		q = readQ();
		printP(MUL_PQ_P(a, q));
		break;
	case 4:
		printPLN();
		c = ' ';//fix print
		while (std::cin.get(c) && c != '\n');
		a = readP();
		printIN();
		cin >> d;
		printP(MUL_Pxk_P(a, d));
		break;
	case 5:
		printPLN();
		c = ' ';//fix print
		while (std::cin.get(c) && c != '\n');
		a = readP();
		printQ(LED_P_Q(a));
		break;
	case 6:
		printPLN();
		c = ' ';//fix print
		while (std::cin.get(c) && c != '\n');
		a = readP();
		cout << "\n" << DEG_P_N(a) << endl;
		break;
	case 7:
		printPLN();
		c = ' ';//fix print
		while (std::cin.get(c) && c != '\n');
		a = readP();
		printP(FAC_P_Q(a));
		break;
	case 8:
		printPLN();
		c = ' ';//fix print
		while (std::cin.get(c) && c != '\n');
		a = readP();
		printPLN();
		b = readP();
		printP(MUL_PP_P(a, b));
		break;
		case 9:
		printPLN();
		c = ' ';//fix print
		while (std::cin.get(c) && c != '\n');
		a = readP();
		printPLN();
		b = readP();
		printP(DIV_PP_P(a, b));
		break;
		/*case 10:
		printPLN();
		c = ' ';//fix print
		while (std::cin.get(c) && c != '\n');
		a = readP();
		printPLN();
		b = readP();
		printP(MOD_PP_P(a, b));
		break;
		case 11:
		printPLN();
		c = ' ';//fix print
		while (std::cin.get(c) && c != '\n');
		a = readP();
		printPLN();
		b = readP();
		printP(GCF_PP_P(a, b));
		break;*/
		case 12:
		printPLN();
		c = ' ';//fix print
		while (std::cin.get(c) && c != '\n');
		a = readP();
		printP(DER_P_P(a));
		break;
		/*case 13:
		printPLN();
		c = ' ';//fix print
		while (std::cin.get(c) && c != '\n');
		a = readP();
		printP(NMR_P_P(a));
		break;*/
		default: printError(); break;
	}
	/*} while (number == 0);*/
	cin.get();
	cin.get();
	freeP(&a);
	freeP(&b);
	return number;
}

void infoP()
{
	string temp = "";
	int i = 0, number = 0, st = 1;
	cin >> temp;
	i = temp.length();
	/*if (temp[0] == 'i')
	{
		for (int j = i - 1; j != 3; --j)
		{
			number = number + (temp[j] - 48) * st;
			st = st * 10;
		}
		system("cls");
		showInfoMenuP(number);
		chooseFunctionP(number);
	}
	else
	{*/
		for (int j = i - 1; j != -1; --j)
		{
			number = number + ((int)temp[j] - 48) * st;
			st = st * 10;
		}
		system("cls");
		showInfoMenuN(number);
		chooseFunctionP(number);
	//}
}