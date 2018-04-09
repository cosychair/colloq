#include <iostream>
#include <iomanip>
#include "../N/longNat.h"
#include "outputN.h"
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
	if (*a->A)
		free(a->A);
	a->n = 0;
}

void printMenuN() {
	cout << "\n*********MENU FUNCTIONS FOR NATURAL NUMBERS**********" << endl;
	cout << "Please choose the function you want from the list below." << endl;
	cout << "1 - COM_NN_D" << endl;
	cout << "2 - NZER_N_B" << endl;
	cout << "3 - ADD_1N_N" << endl;
	cout << "4 - ADD_NN_N" << endl;
	cout << "5 - SUB_NN_N" << endl;
	cout << "6 - MUL_ND_N" << endl;
	cout << "7 - MUL_Nk_N" << endl;
	cout << "8 - MUL_NN_N" << endl;
	cout << "9 - SUB_NDN_N" << endl;
	cout << "10 - DIV_NN_Dk" << endl;
	cout << "11 - DIV_NN_N" << endl;
	cout << "12 - MOD_NN_N" << endl;
	cout << "13 - GCF_NN_N" << endl;
	cout << "14 - LCM_NN_N" << endl;
	cout << "To select the function you should write it`s number to the console and press \"enter\" button." << endl;
	cout << "Example: 1" << endl;
	cout << "If you need more information about functions print \"info\" and after it print number of the function you want." << endl;
	cout << "Example: info1" << endl;
}
