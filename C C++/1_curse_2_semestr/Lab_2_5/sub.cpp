#include "complex.h"
CMP sub(CMP com1, CMP com2){
	CMP tmpc;
	tmpc.real = com1.real - com2.real;
	tmpc.imag = com1.imag - com2.imag;
	return tmpc;
}

