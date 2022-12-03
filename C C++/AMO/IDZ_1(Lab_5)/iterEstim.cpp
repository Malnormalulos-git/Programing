#include "header.h"
double iterEstim(int n){
	double a = -19.610185;
	double b = 0.47588384;
	return exp(a + b*(double)n);
}

