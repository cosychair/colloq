#include <iostream>
#include <iomanip>
#include <string>
#include "../colloquium/N/longNat.h"
#include "../colloquium/N/longNatFunctions.h"
#include "../colloquium/Z/longInteger.h"
#include "../colloquium/Z/longIntFunctions.h"
#include "../colloquium/Q/longFraction.h"
#include "../colloquium/Q/longFracFunctions.h"
#include "../colloquium/P/longPoly.h"
#include "../colloquium/P/longPolyFunctions.h"
#include "../colloquium/Input/inputZ.h"
#include "../colloquium/Input/inputN.h"
#include "../colloquium/Input/inputQ.h"
#include "../colloquium/Input/inputP.h"
#include "../colloquium/Output/outputZ.h"
#include "../colloquium/Output/outputN.h"
#include "../colloquium/Output/outputQ.h"
#include "../colloquium/Output/outputP.h"
#include "../colloquium/Output/outputCom.h"
#include "../colloquium/Info/info.h"
using namespace std;

int chooseFunctionQ();//Выбор функций для дробей
int chooseFunctionP();//Выбор функций для многочленов

int main()
{
	greeting();
	char type = 'd';//d from the dull user
	do {
		cin >> type;
		switch (type) {
		case 'N':
			system("cls");
			printMenuN();
			infoN();
			break;
		case 'Z':
			system("cls");
			printMenuZ();
			infoZ();
			break;
		case 'Q':
			printMenuQ();
			chooseFunctionQ();
			break;
		case 'P':
			printMenuP();
			chooseFunctionP();
			break;
		default: printError(); type = 'd'; break;
		}
	} while (type == 'd');
	system("pause");
	return 0;
}
/*
int chooseFunctionN(int number) {
	LNGNT a, b;
	a.A = b.A = NULL;
		int k;
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
			printN(MUL_ND_N(a,k));
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
	cin.get();
	cin.get();
	freeN(&a);
	freeN(&b);
	return number;
}

int chooseFunctionZ() {
	LNGINT a, b;
	LNGNT n;
	a.A = b.A = n.A = NULL;
	int number = 0;
	do {
		cin >> number;
		switch (number) {
		case 1:
			printIN();
			a = readZ();
			printN(ABS_Z_N(a));
			break;
		case 2:
			printIN();
			a = readZ();
			printZ(a);
			switch(POZ_Z_D(a))
			{
			case 0: cout << "This number iz zero." << endl; break;
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
			printZ(ADD_ZZ_Z(a,b));
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
	} while (number == 0);
	cin.get();
	cin.get();
	freeZ(&a);
	freeZ(&b);
	return number;
}
*/
int chooseFunctionQ() {
	FRCT a, b;
	LNGINT z;
	a.den.A = a.num.A = b.den.A = b.num.A = NULL;
	int number = 0;
	do {
		cin >> number;
		switch (number) {
		case 1:
			printFR();
			a = readQ();
			printQ(RED_Q_Q(a));
			break;
		case 2:
			printFR();
			a = readQ();
			if (INT_Q_B(a) == 1)
				cout << "This isn`t a fraction." << endl;
			else 
				cout << "This is a fraction." << endl;
			break;
		case 3:
			printIN();
			z = readZ();
			printQ(TRANS_Z_Q(z));
			break;
		case 4:
			printFR();
			a = readQ();
			printZ(TRANS_Q_Z(a));
			break;
		case 5:
			printFR();
			a = readQ(); 
			printFR();
			b = readQ();
			printQ(ADD_QQ_Q(a,b));
			break;
		case 6:
			printFR();
			a = readQ();
			printFR();
			b = readQ();
			printQ(SUB_QQ_Q(a, b));
			break;
		case 7:
			printFR();
			a = readQ();
			printFR();
			b = readQ();
			printQ(MUL_QQ_Q(a, b));
			break;
		case 8:
			printFR();
			a = readQ();
			printFR();
			b = readQ();
			printQ(DIV_QQ_Q(a, b));
			break;
		default: printError(); number = 0; break;
		}
	} while (number == 0);
	cin.get();
	cin.get();
	freeQ(&a);
	freeQ(&b);
	return number;
}

int chooseFunctionP() {
	PLNM a,b;
	FRCT q;
	int d;
	char c;
	int number = 0;
	do {
		cin >> number;
		switch (number) {
		case 1:
			printPLN();
			 c = ' ';//fix print
			while (std::cin.get(c) && c != '\n');
			a = readP();
			printPLN();
			b = readP();
			printP(ADD_PP_P(a,b));
			break;
		case 2:
			printPLN();
			a = readP();
			c = ' ';//fix print
			while (std::cin.get(c) && c != '\n');
			printPLN();
			b = readP();
			printP(SUB_PP_P(a, b)); 
			break;
		case 3:
			printPLN();
			a = readP();
			c = ' ';//fix print
			while (std::cin.get(c) && c != '\n');
			printFR();
			q = readQ();
			printP(MUL_PQ_P(a, q));
			break;
		case 4:
			printPLN();
			a = readP();
			c = ' ';//fix print
			while (std::cin.get(c) && c != '\n');
			printIN();
			cin >> d;
			printP(MUL_Pxk_P(a,d));
			break;
		case 5:
			printPLN();
			a = readP();
			c = ' ';//fix print
			while (std::cin.get(c) && c != '\n');
			printQ(LED_P_Q(a));
			break;
		case 6:
			printPLN();
			a = readP();
			c = ' ';//fix print
			while (std::cin.get(c) && c != '\n');
			cout<<"\n"<<DEG_P_N(a)<<endl;
			break;
		case 7:
			printPLN();
			a = readP();
			c = ' ';//fix print
			while (std::cin.get(c) && c != '\n');
			printP(FAC_P_Q(a));
			break;
		case 8:
			printPLN();
			a = readP();
			c = ' ';//fix print
			while (std::cin.get(c) && c != '\n');
			printPLN();
			b = readP();
			printP(MUL_PP_P(a, b));
			break;
		/*case 9:
			printPLN();
			a = readP();
			c = ' ';//fix print
			while (std::cin.get(c) && c != '\n');
			printPLN();
			b = readP();
			printP(DIV_PP_P(a, b));
			break;
		case 10:
			printPLN();
			a = readP();
			c = ' ';//fix print
			while (std::cin.get(c) && c != '\n');
			printPLN();
			b = readP();
			printP(MOD_PP_P(a, b));
			break;
		case 11:
			printPLN();
			a = readP();
			c = ' ';//fix print
			while (std::cin.get(c) && c != '\n');
			printPLN();
			b = readP();
			printP(GCF_PP_P(a, b));
			break;*/
		case 12:
			printPLN();
			a = readP();
			c = ' ';//fix print
			while (std::cin.get(c) && c != '\n');
			printP(DER_P_P(a));
			break;
		/*case 13:
			printPLN();
			a = readP();
			c = ' ';//fix print
			while (std::cin.get(c) && c != '\n');
			printP(NMR_P_P(a));
			break;*/
		default: printError(); number = 0; break;
		}
	} while (number == 0);
	cin.get();
	cin.get();
	//freeP(&a);
	//freeP(&b);
	return number;
}