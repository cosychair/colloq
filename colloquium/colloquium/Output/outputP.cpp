#include "../P/longPoly.h"
#include "outputP.h"
#include "outputQ.h"
#include <iostream>
#include <iomanip>
using namespace std;

void printP(PLNM a) {
	int i = 0, f=0;
	if (a.deg == 0 && a.C[0].den.A[0] == 0)cout << "0"<<endl;
	while (a.deg >= 0) {
		if (a.C[i].num.A&&a.C[i].num.A[0] != 0) {
			if (a.C[i].num.sign == 0&&f)cout << "+";
			printQ(a.C[i]);
			if (a.deg > 0)cout << "x";
			if (a.deg > 1)cout<<"^"<< a.deg;;
			f = 1;
		}
		a.deg--;
		i++;
	}
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
