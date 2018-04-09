#include <iostream>
#include <iomanip>
#include "../colloquium/N/longNat.h"
#include "../colloquium/N/longNatFunctions.h"
#include "../colloquium/Output/outputN.h"
#include "../colloquium/Output/outputCom.h"
#include "../colloquium/Input/inputN.h"
using namespace std;

int chooseFunctionN();

int main()
{
	greeting();
	char type = 'd';//d from the dull user
	do {
		cin >> type;
		switch (type) {
		case 'N':
			printMenuN(); 
			chooseFunctionN();
			break;
		case 'Z': break;
		case 'Q': break;
		case 'P': break;
		default: printError(); type = 'd'; break;
		}
	} while (type == 'd');
	return 0;
}

int chooseFunctionN() {
	LNGNT a, b;
	int k;
	int number = 0;
	do {
		cin >> number;
		switch (number) {
		case 1: 
			printIN();
			a = readN();
			printIN();
			b = readN();
			switch (COM_NN_D(a,b))
			{
			case 0: cout << "Numbers are similar." << endl;break;
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
			printN(ADD_NN_N(a,b));
			break;
		case 5://блеать не работает
			printIN();
			a = readN();
			printIN();
			b = readN();
			printN(SUB_NN_N(a, b));
			break;
		case 6://блеать не работает
			printIN();
			a = readN();
			cout << "Print numeral:" << endl;
			cin >> k;
			printN(MUL_ND_N(a,k));
			break;
		case 7: //блеать не работает
			printIN();
			a = readN();
			cout << "Print numeral:" << endl;
			cin >> k;
			printN(MUL_Nk_N(a, k));
			break;
		case 8: //блеать не работает
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
	} while (number == 0);
	freeN(&a);
	freeN(&b);
	return number;
}
