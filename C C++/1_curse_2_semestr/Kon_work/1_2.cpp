#include <iostream> 
#include <time.h>
#include <stdlib.h>  
float func(float arr[], int size){
	float sum = 0;
	for(int i = 0; i < size; i++)
		sum += arr[i];
	return sum/size;
	
}
double func(double arr[], int size){
	double sum = 0;
	for(int i = 0; i < size; i++)
		sum += arr[i];
	return sum/size;
}
int main(){
	int size_f = 5, size_d = 7;
	float farr[size_f] = {1.564, 4.67, -0.38, 2.28, -1.85};
	double darr[size_d];
	srand(time(NULL));
	puts("darr[]: ");
	for(int i = 0; i < size_d; i++){
		darr[i] = (rand()%20101)*0.01 - 50.5;
		printf("%lf\n", darr[i]);
	}
	printf("\nfunc(farr, size_f) = %lf\n", func(farr, size_f));
	printf("func(darr, size_d) = %lf\n", func(darr, size_d));
	return 0;
}
