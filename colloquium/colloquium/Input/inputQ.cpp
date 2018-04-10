#include "inputQ.h"
#include "inputZ.h"
#include "inputN.h"

FRCT readQ() {
	FRCT drob;
	drob.num = readZ();
	drob.den = readN();
	return drob;
}