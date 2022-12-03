#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

typedef float (*PF)(float, float, float);

float sum(float a, float b, float c){
	return a+b+c;
}
float mul(float a, float b, float c){
	return a*b*c;
}
float func(float a, float b, float c, PF f){
	if(a >= b && a >= c){
		return a*f(a, b, c);
	}
	else if(b >= a && b >= c){
		return b*f(a, b, c);
	}
	else if(c >= a && c >= b){
		return c*f(a, b, c);
	}
}

int main(){
	cout << "func(3, 1.5, 7, sum) = " << func(3, 1.5, 7, sum) << endl;
	cout << "func(3, 1.5, 7, mul) = " << func(3, 1.5, 7, mul) << endl;
	cout << "func(5, 2, 3, sum) = " << func(5, 2, 3, sum) << endl;
	cout << "func(5, 2, 3, mul) = " << func(5, 2, 3, mul) << endl;
	return 0;
}
