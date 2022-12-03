#include <stdlib.h> 
#include <iostream> 
#include<time.h>  
#include <iomanip> 
using namespace std;
#pragma pack(push,1) 

float func(float x, float a = 0.2, float b = 0.5){
	if(x > a){
		return x+a*b;
	}
	return x-a*b;
}
int main(){
	float a = 1, b = 0.7, c = 1.5;
	cout << "Func(1) = " << func(a) << endl; // x>a(1>0.2)? - yes: x+a*b(1+0.2*0.5)=1.1 
	a = 0.4;
	cout << "Func(0.4, 0.7) = " << func(a, b) << endl; // x>a(0.4>0.7)? - no: x-a*b(0.4-0.7*0.5)=0.05 
	a = 0.5;
	b = 1;
	cout << "Func(0.5, 1, 1.5) = " << func(a, b, c) << endl; // x>a(0.5>1)? - no: x-a*b(0.5-1*1.5)=-1 
	return 0;
}
