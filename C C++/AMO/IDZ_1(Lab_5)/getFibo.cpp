#include "header.h"
int getFibo(int n){
	if(n < 2) 
		return n;
	else 
		return getFibo(n - 1) + getFibo(n - 2);
}

