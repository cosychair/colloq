#include <iostream>
#include <iomanip>
#include "../N/longNat.h"
#include "outputN.h"
#include "outputCom.h"
#include "../Info/info.h"
using namespace std;

void printN(LNGNT a) {
	if (a.A != NULL&&a.n!=0)
		for (int i = 0; i < a.n; ++i)
			cout << *(a.A + i);
	else
		cout << "This number doesn`t exist." << endl;
}

void freeN(LNGNT* a)
{
	delete a->A;
	a->n = 0;
}

void printMenuN() {
	system("cls");
	cout << "*********MENU FUNCTIONS FOR NATURAL NUMBERS**********" << endl;
	cout << endl;
	cout << "Please choose the function you want from the list below." << endl;
	cout << endl;
	cout << "1 - COM_NN_D - Comparing 2 natural numbers: 2 - if the first number is bigger than the second, 0 - if equal, 1 - if the second number is bigger than the first." << endl;
	cout << "2 - NZER_N_B - Zero checking: if number isn`t zero, yes, else no." << endl;
	cout << "3 - ADD_1N_N - Adding 1 to the natural number." << endl;
	cout << "4 - ADD_NN_N - Natural numbers addition." << endl;
	cout << "5 - SUB_NN_N - Natural numbers subtraction." << endl;
	cout << "6 - MUL_ND_N - Multiply natural number by numeral." << endl;
	cout << "7 - MUL_Nk_N - Multiply natural number by 10 ^ k" << endl;
	cout << "8 - MUL_NN_N - Multiplying natural numbers." << endl;
	cout << "9 - SUB_NDN_N - Substract one natural number from another, multiplied by the numeral." << endl;
	cout << "10 - DIV_NN_Dk -Computing first numeral of the result of dividing one natural number on another.This numeral multiply by 10 ^ k. k - position of this numeral(counting from 0)." << endl;
	cout << "11 - DIV_NN_N - Quotient from dividing one natural number on another(divider isn`t zero)" << endl;
	cout << "12 - MOD_NN_N - Residue from dividing one natural number on another(divider isn`t zero)" << endl;
	cout << "13 - GCF_NN_N - GCD of natural numbers." << endl;
	cout << "14 - LCM_NN_N - NOC of natural numbers." << endl;
	cout << endl;
	cout << "To select the function you should write it`s number to the console and press \"enter\" button." << endl;
	cout << "Example: 1" << endl;
}

void showInfoMenuN(int number)
{
	cout << "**********FUNCTION " << number << "**********" << endl;
	cout << endl;
	switch (number)
	{
	case 1: cout << "Comparing 2 natural numbers: 2 - if the first number is bigger than the second, 0 - if equal, 1 - if the second number is bigger than the first." << endl; break;
	case 2: cout << "Zero checking: if number isn`t zero, yes, else no." << endl; break;
	case 3: cout << "Adding 1 to the natural number." << endl; break;
	case 4: cout << "Natural numbers addition." << endl; break;
	case 5: cout << "Natural numbers subtraction." << endl; break;
	case 6: cout << "Multiply natural number by numeral." << endl; break;
	case 7: cout << "Multiply natural number by 10^k" << endl; break;
	case 8: cout << "Multiplying natural numbers" << endl; break;
	case 9: cout << "Substract one natural number from another, multiplied by the numeral." << endl; break;
	case 10: cout << "Computing first numeral of the result of dividing one natural number on another.This numeral multiply by 10 ^ k. k - position of this numeral(counting from 0)." << endl; break;
	case 11: cout << "Quotient from dividing one natural number on another(divider isn`t zero)" << endl; break;
	case 12: cout << "Residue from dividing one natural number on another(divider isn`t zero)" << endl; break;
	case 13: cout << "GCD of natural numbers." << endl; break;
	case 14: cout << "NOC of natural numbers." << endl; break;
	default: cout << "Error! Wrong number." << endl;break;
	}
	cout << endl;
}