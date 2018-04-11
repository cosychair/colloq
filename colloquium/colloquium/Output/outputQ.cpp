#include "outputQ.h"
#include <iostream>
#include <iomanip>
#include "outputN.h"
#include "outputZ.h"
using namespace std;

void printQ(FRCT a) {
	printZ(a.num);
	cout << "/";
	printN(a.den);
	cout << endl;
}

void freeQ(FRCT* a) {
	freeN(&a->den);
	freeZ(&a->num);
}

void printMenuQ() {
	system("cls");
	cout << "\n*********MENU FUNCTIONS FOR FRACTIONS**********" << endl;
	cout << "Please choose the function you want from the list below." << endl;
	cout << "1 - RED_Q_Q" << endl;
	cout << "2 - INT_Q_B" << endl;
	cout << "3 - TRANS_Z_Q" << endl;
	cout << "4 - TRANS_Q_Z" << endl;
	cout << "5 - ADD_QQ_Q" << endl;
	cout << "6 - SUB_QQ_Q" << endl;
	cout << "7 - MUL_QQ_Q" << endl;
	cout << "8 - DIV_QQ_Q" << endl;
	cout << "To select the function you should write it`s number to the console and press \"enter\" button." << endl;
	cout << "Example: 1" << endl;
	cout << "If you need more information about functions print \"info\" and after it print number of the function you want." << endl;
	cout << "Example: info1" << endl;
}