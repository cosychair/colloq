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
#include "info.h"

using namespace std;

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
	default: printError(); number = 0; break;
	}
	/*} while (number == 0);*/
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
	if (temp[0] == 'i')
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
	{
		for (int j = i - 1; j != -1; --j)
		{
			number = number + ((int)temp[j] - 48) * st;
			st = st * 10;
		}
		system("cls");
		chooseFunctionN(number);
	}
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
	default: printError(); number = 0; break;
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
	if (temp[0] == 'i')
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
	{
		for (int j = i - 1; j != -1; --j)
		{
			number = number + ((int)temp[j] - 48) * st;
			st = st * 10;
		}
		system("cls");
		chooseFunctionZ(number);
	}
}