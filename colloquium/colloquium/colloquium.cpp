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

int main()
{
	char type;
	do{
	greeting();
	 type = 'd';//d from the dull user
	do {
		cin >> type;
		switch (type) {
		case 'n':case 'N':
			system("cls");
			printMenuN();
			infoN();
			break;
		case 'z':case 'Z':
			system("cls");
			printMenuZ();
			infoZ();
			break;
		case 'q':case 'Q':
			system("cls");
			printMenuQ();
			infoQ();
			break;
		case 'p': case 'P':
			system("cls");
			printMenuP();
			infoP();
			break;
		case 'E' :case 'e':cout << "GG WP" << endl; sleep(100); exit(0); break; break;
		case 'A':printAuthors(); break;
		default: printError(); type = 'd'; break;
		}
	} while (type == 'd');
	cout << endl<<"Do you want to continue using this program? If yes print \'Y\', if no print E or switch your PC off." << endl;
	cin >> type;
}while (type == 'Y'|| type == 'y');
	return 0;
}
