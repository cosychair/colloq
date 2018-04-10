#include "../Output/outputZ.h"
#include <iostream>
#include <iomanip>
using namespace std;

void printZ(LNGINT a) {
	cout << (a.sign == 1) ? "-" : "";
	if (a.A != NULL&&a.n != 0)
		for (int i = 0; i < a.n; ++i)
			cout << *(a.A + i);
	else
		cout << "This number doesn`t exist." << endl;
}

void freeZ(LNGINT* a) {
	if (a->A)
		free(a->A);
	a->n = 0;
	a->sign = 0;
}

void printMenuZ() {
	cout << "\n*********MENU FUNCTIONS FOR INTEGER NUMBERS**********" << endl;
	cout << "Please choose the function you want from the list below." << endl;
	cout << "1 - ABS_Z_N" << endl;
	cout << "2 - POZ_Z_D" << endl;
	cout << "3 - MUL_ZM_Z" << endl;
	cout << "4 - TRANS_N_Z" << endl;
	cout << "5 - TRANS_Z_N" << endl;
	cout << "6 - ADD_ZZ_Z" << endl;
	cout << "7 - SUB_ZZ_Z" << endl;
	cout << "8 - MUL_ZZ_Z" << endl;
	cout << "9 - DIV_ZZ_Z" << endl;
	cout << "10 - MOD_ZZ_Z" << endl;
	cout << "To select the function you should write it`s number to the console and press \"enter\" button." << endl;
	cout << "Example: 1" << endl;
	cout << "If you need more information about functions print \"info\" and after it print number of the function you want." << endl;
	cout << "Example: info1" << endl;
}
