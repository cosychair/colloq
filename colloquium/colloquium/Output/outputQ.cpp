#include "outputQ.h"
#include <iostream>
#include <iomanip>
#include "outputN.h"
#include "outputZ.h"
#include "../Info/info.h"
using namespace std;

void printQ(FRCT a) {
	printZ(a.num);
	cout << "/";
	printN(a.den);
}

void freeQ(FRCT* a) {
	freeN(&a->den);
	freeZ(&a->num);
}

void printMenuQ() {
	system("cls");
	cout << "*********MENU FUNCTIONS FOR FRACTIONS**********" << endl;
	cout << endl;
	cout << "Please choose the function you want from the list below." << endl;
	cout << endl;
	cout << "1 - RED_Q_Q - Reduction of  the fraction." << endl;
	cout << "2 - INT_Q_B - Checking if this number is integer, returns \"yes\" or \"no\"" << endl;
	cout << "3 - TRANS_Z_Q - Tranforming integer number to fraction." << endl;
	cout << "4 - TRANS_Q_Z - Tranforming fraction to integer number(only if denominator)." << endl;
	cout << "5 - ADD_QQ_Q - Fractions addition." << endl;
	cout << "6 - SUB_QQ_Q - Fractions subtraction." << endl;
	cout << "7 - MUL_QQ_Q - Multiplying fractions." << endl;
	cout << "8 - DIV_QQ_Q - Dividing fractions (divider isn`t zero)." << endl;
	cout << endl;
	cout << "To select the function you should write it`s number to the console and press \"enter\" button." << endl;
	cout << "Example: 1" << endl;
}

void showInfoMenuQ(int number)
{
	cout << "**********FUNCTION " << number << "**********" << endl << endl;
	switch (number)
	{
	case 1: cout << "Reduction of  the fraction." << endl; break;
	case 2: cout << "Checking if this number is integer, returns \"yes\" or \"no\"" << endl; break;
	case 3: cout << "Tranforming integer number to fraction." << endl; break;
	case 4: cout << "Tranforming fraction to integer number(only if denominator)." << endl; break;
	case 5: cout << "Fractions addition." << endl; break;
	case 6: cout << "Fractions subtraction." << endl; break;
	case 7: cout << "Multiplying fractions." << endl; break;
	case 8: cout << "Dividing fractions (divider isn`t zero)." << endl; break;
	default: cout << "Error! Wrong number." << endl; break;
	}
	cout << endl;
}