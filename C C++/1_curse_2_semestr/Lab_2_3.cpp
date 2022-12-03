#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;
template <class T>
void swap(T **arg1,T **arg2) {
	T *tmp = *arg1;
	*arg1 = *arg2; 
	*arg2 = tmp; 
}

int main(){
	float a = 1.234, b = 5.678;
	float *ptr_a = &a, *ptr_b = &b;
	puts("before swap()");
	printf("&ptr_a = %p, ptr_a = %p, *ptr_a = %f\n", &ptr_a, ptr_a, *ptr_a);
	printf("&a = %p, a=%f\n\n", &a, a);
	printf("&ptr_b = %p, ptr_b = %p, *ptr_b = %f\n", &ptr_b, ptr_b, *ptr_b);
	printf("&b = %p, b=%f\n\n\n", &b, b);
	swap(&ptr_a, &ptr_b); 
	puts("after swap()");
	printf("&ptr_a = %p, ptr_a = %p, *ptr_a = %f\n", &ptr_a, ptr_a, *ptr_a);
	printf("&a = %p, a=%f\n\n", &a, a);
	printf("&ptr_b = %p, ptr_b = %p, *ptr_b = %f\n", &ptr_b, ptr_b, *ptr_b);
	printf("&b = %p, b=%f\n", &b, b);
	return 0;
}
