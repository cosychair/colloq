#include <iostream>
#include <iomanip>
#include "../colloquium/N/longNat.h"
#include "../colloquium/N/longNatFunctions.h"
#include "../colloquium/Output/outputN.h"
#include "../colloquium/Output/outputCom.h"
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

			break;
		case 2: break;
		case 3: break;
		case 4: break;
		case 5: break;
		case 6: break;
		case 7: break;
		case 8: break;
		case 9: break;
		case 10: break;
		case 11: break;
		case 12: break;
		case 13: break;
		case 14: break;
		default: printError(); number = 0; break;
		}
	} while (number == 0);
	return number;
}
