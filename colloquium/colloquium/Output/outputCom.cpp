#include <iostream>
#include <iomanip>
#include "../N/longNat.h"
#include "outputCom.h"
using namespace std;

void greeting() {
	system("cls");
	cout << "**********COMPUTER ALGEBRA SYSTEM**********" << endl;
	cout << "This system affords you an opportunity of working with long numbers." << endl;
	cout << "Dont forget to visit menu \"authors\" to learn more." << endl;
	cout << "If program stops printing text press enter." << endl;
	hint();
}

void hint() {
	cout << "Please choose number representation you need from the list below." << endl;
	cout << "N - natural numbers," << endl;
	cout << "Z - integer numbers," << endl;
	cout << "Q - fractions," << endl;
	cout << "P - polynoms," << endl;
	cout << "A -  authors," << endl;
	cout << "E - Exit." << endl;
	cout << "To select the representation you should write it`s letter to the console and press \"enter\" button." << endl;
	cout << "Example: N" << endl;
}

void printError() {
	cout << "**********SORRY, BUT THIS IS ERROR**********" << endl;
	cout << "Try to print what you want more carefull." << endl;
}

void printIN() {
	cout << "Please print the number." << endl;
}

void printFR() {
	cout << "Please print the fraction." << endl;
	cout << "Example: 1/2" << endl;
	cout << "Please notice there aren`t any spaces!" << endl;
}

void printPLN() {
	cout << "Please print the polynomial." << endl;
	cout << "Example: 3/2x^6+1/2x^3+2x-6" << endl;
}