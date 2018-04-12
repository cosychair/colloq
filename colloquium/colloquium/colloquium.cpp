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
	char type;
	do{
		system("cls");
	greeting();
	 type = 'd';//d from the dull user
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
			system("cls");
			printMenuQ();
			infoQ();
			break;
		case 'P':
			system("cls");
			printMenuP();
			infoP();
			break;
		case 'E':break;
		default: printError(); type = 'd'; break;
		}
	} while (type == 'd');
	cout << endl<<"Do you want to continue using this program? If yes print \'Y\', if no print any other button(please, switch off your pc by this action)" << endl;
	cin >> type;
}while (type == 'Y');
	return 0;
}
