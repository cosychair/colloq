#include <stdio.h>
#include "longPoly.h"
#include "../Q/longFracFunctions.h"
#include "longPolyFunctions.h"

FRCT LED_P_Q(PLNM A)
{
    return A.C[0];
}