#include "inputQ.h"
#include "inputZ.h"
#include "inputN.h"
#include "inputP.h"
#include "../Output/outputQ.h"
#include <iostream>
#include <string>
#include <math.h>

//удаляет пробелы
std::string delGaps(std::string src) {
	std::string dst;
	for (int i = 0; i < src.length(); ++i)
		if (src[i] != ' ')
			dst += src[i];
	return dst;
}

//собирает lngint из строки
LNGINT build_LNGINT(std::string num) {
	int len = num.length() - (num[0] == '+' || num[0] == '-');

	LNGINT longint = {
		num[0] == '-' ? 1 : 0,
		len,
		new int[len]
	};

	for (int i = 0, k = (len != num.length()); i < len; ++i)
		longint.A[i] = num[i + k] - '0';

	return longint;
}

//собирает lngnt из строки
LNGNT build_LNGNT(std::string num) {
	int len = num.length();
	LNGNT longnt = {
		len,
		new int[len]
	};

	for (int i = 0; i < len; ++i)
		longnt.A[i] = num[i] - '0';

	return longnt;
}

int str_to_int(std::string num) {
	int a = 0;
	for (int i = 0, j = 1; i < num.length(); ++i, j *= 10) {
		a += j * (num[num.length() - i - 1] - '0');
	}
	return a;
}

int max(int a, int b) 
{
	if (a > b)return a;
	else return b;
}

PLNM readP() {
	char c;
	while (std::cin.get(c) && c != '\n');
	//считываем, удаляем пробелы
	std::string str; std::getline(std::cin, str); str += '+';
	str = delGaps(str);

	//считаем степень многочлена
	int deg = str.find_first_of("x", 0) != std::string::npos;
	for (int i = 0; i < str.length(); ++i) {
		if (str[i] == '^') {
			int end = str.find_first_of("+-", i);
			std::string raw_deg = str.substr(i + 1, end - i - 1);
			deg = max(str_to_int(raw_deg), deg);
		}
	}

	//создаем полиномчег
	PLNM pol = {
		deg,
		new FRCT[deg + 1]
	};

	for (int i = 0; i < pol.deg + 1; ++i) {
		pol.C[i].num = build_LNGINT("+0");
		pol.C[i].den = build_LNGNT("1");
	}


	//расставляем коэффициенты
	int last = 0, cur = 0;
	while ((cur = str.find_first_of("+-", last + 1)) != std::string::npos) {
		std::string sub = str.substr(last, cur - last);

		//детекчу степень
		int xpos = sub.find_first_of("x", 0);
		int deg = xpos == std::string::npos ? 0 :
			sub[xpos + 1] != '^' ? 1 :
			str_to_int(sub.substr(xpos + 2, sub.length() - xpos - 2));
		deg = pol.deg - deg;

		//парсим коэффициент
		int sz = xpos == std::string::npos ? sub.length() : xpos;
		int slash = sub.find_first_of("/", 0);

		std::string num = (sz == 1 || sz == 0) ? std::string(sub[0] == '-' ? "-" : "+") + std::string("1") :
			slash == std::string::npos ? sub.substr(0, sz) :
			sub.substr(0, slash);
		std::string den = slash == std::string::npos ? "1" :
			sub.substr(slash + 1, sz - slash - 1);

		pol.C[deg].num = build_LNGINT(num);
		pol.C[deg].den = build_LNGNT(den);

		last = cur;
	}

	return pol;
}//3/2x^6+1/2x^3+2/1x^1-6/3
 //1/2x^4-3/4x^1+6/7