#include "../P/longPoly.h"
#include "outputP.h"
#include "outputQ.h"
#include <iostream>
#include <iomanip>
#include "../Info/info.h"
using namespace std;

void printP(PLNM a) {
	int i = 0, f=0;
	if (a.C) {
		if (a.C[0].num.A[0] == 0)cout << "0" << endl;
		while (a.deg >= 0) {
			if (a.C[i].num.A&&a.C[i].num.A[0] != 0) {
				if (a.C[i].num.sign == 0 && f)cout << "+";
				printQ(a.C[i]);
				if (a.deg > 0)cout << "x";
				if (a.deg > 1)cout << "^" << a.deg;;
				f = 1;
			}
			a.deg--;
			i++;
		}
	}
	else cout << "ERROR";
	cout << endl;
}

void freeP(PLNM* a) {
	while (a->deg > 0) {
		freeQ((a->C));
		a->deg--;
	}
}

void printMenuP() {
	system("cls");
	cout << "\n*********MENU FUNCTIONS FOR POLYNOMS**********" << endl;
	cout << "Please choose the function you want from the list below." << endl;
	cout << "1 - ADD_PP_P" << endl;
	cout << "2 - SUB_PP_P" << endl;
	cout << "3 - MUL_PQ_P" << endl;
	cout << "4 - MUL_Pxk_P" << endl;
	cout << "5 - LED_P_Q" << endl;
	cout << "6 - DEG_P_N" << endl;
	cout << "7 - FAC_P_Q" << endl;
	cout << "8 - MUL_PP_P" << endl;
	cout << "9 - DIV_PP_P" << endl;
	cout << "10 - MOD_PP_P" << endl;
	cout << "11 - GCF_PP_P" << endl;
	cout << "12 - DER_P_P" << endl;
	cout << "13 - NMR_P_P" << endl;
	cout << "To select the function you should write it`s number to the console and press \"enter\" button." << endl;
	cout << "Example: 1" << endl;
	cout << "If you need more information about functions print \"info\" and after it print number of the function you want." << endl;
	cout << "Example: info1" << endl;
}

void showInfoMenuP(int number)
{
	cout << endl;
	cout << "**********FUNCTION " << number << "**********" << endl << endl;
	switch (number)
	{
	case 1: cout << "Polynomial addition." << endl; break;
	case 2: cout << "Polynomial subtraction." << endl; break;
	case 3: cout << "Multiply polynomial by fraction." << endl; break;
	case 4: cout << "Multiply polynomial by x^k" << endl; break;
	case 5: cout << "The highest coefficent of this polynomial." << endl; break;
	case 6: cout << "The degree of this polynomial." << endl; break;
	case 7: cout << "Getting NOC of coefficents` denominators and GCF of numerators from the polynomial." << endl; break;
	case 8: cout << "Multiplying polynomials" << endl; break;
	case 9: cout << "Quotient from dividing one polynomial on another(divider isn`t zero)" << endl; break;
	case 10: cout << "Residue from dividing one polynomial on another(divider isn`t zero)" << endl; break;
	case 11: cout << "GCF of polynomials." << endl; break;
	case 12: cout << "Derivative of polynomial." << endl; break;
	case 13: cout << "Ìultiple roots."<< endl; break;
	default: cout << "Error! Wrong number." << endl; infoP(); break;
	}
	cout << endl;
}