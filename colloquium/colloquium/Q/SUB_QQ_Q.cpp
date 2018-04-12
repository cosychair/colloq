#include "longFraction.h"
#include "../N/longNatFunctions.h"
#include "longFracFunctions.h"
#include <iostream>
using namespace std;

FRCT SUB_QQ_Q(FRCT divident, FRCT divider)
{
	FRCT ans;
	LNGNT znam;
	LNGINT chs;
	if (divident.num.A && divident.den.A && divider.num.A && divider.den.A)
	{
		//НОК знаменателя:
		znam = LCM_NN_N(divident.den, divider.den);
		//Числитель = ( (НОК знаменателя/знаменатель 1й) * числитель 1й) - ( (НОК знаменателя/знаменатель 2й) * числитель 2й) 
		chs = SUB_ZZ_Z(MUL_ZZ_Z(TRANS_N_Z(DIV_NN_N(znam, divident.den)), divident.num), MUL_ZZ_Z(TRANS_N_Z(DIV_NN_N(znam, divider.den)), divider.num));
		ans.num = chs; 
		ans.den = znam;
	}
	else
		cout<<"\nError, numer doesn`t exist!\n";
	ans = RED_Q_Q(ans);
	return ans;
}