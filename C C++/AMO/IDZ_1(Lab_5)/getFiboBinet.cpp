#include "header.h"
long getFiboBinet(int n){
	double squ = sqrt(5);
	double phi = (1 + squ)/2;
	double no_phi = (1 - squ)/2;
	return (long)((pow(phi, n) - pow(no_phi, n))/squ);
}

