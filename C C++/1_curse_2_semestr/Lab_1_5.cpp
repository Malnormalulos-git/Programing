#include <stdlib.h> 
#include <iostream> 
#include <time.h>  
#include <iomanip> 
using namespace std;
#pragma pack(push,1) 

int func(int param, ...){
	int mul = 1;
	int *ptr = &param;
	if(*ptr==0.0){
		return 0;
	}
	for(; *ptr != 1234; ptr++){
		if(*ptr > 0 && *ptr%2 != 0){
			mul*=*ptr;
		}
	}
	return mul;
}
int main(){
	int end = 1234;
	cout << "Func(5, 1, 2, 3, -4, 5, end) = " << func(5, 1, 2, 3, -4, 5, end) << endl;
	cout << "Func(9, 4, 3, 10, 7, 5, -33, 80, 27, 11, end) = " << func(9, 4, 3, 10, 7, 5, -33, 80, 27, 11, end) << endl;
	cout << "Func(7, 3, -7, 45, 19, 5, -9, 4, end) = " << func(7, 3, -7, 45, 19, 5, -9, 4, end) << endl;
	return 0;
}

