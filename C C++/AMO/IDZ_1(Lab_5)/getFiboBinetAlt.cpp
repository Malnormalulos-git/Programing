#include "header.h"
long getFiboBinetAlt(int n){
	double squ = sqrt(5);
	double phi = (1 + squ)/2;
	return (long)(pow(phi, n)/squ + 0.5);
}
