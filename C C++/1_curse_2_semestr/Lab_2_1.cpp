#include <stdlib.h> 
#include <iostream> 
#include <time.h>  
#include <iomanip> 
#include <math.h>
using namespace std;

int func(int arr[], int size){
	int min = arr[0];
	for(int i = 1; i < size; i++)
		if(min > arr[i])
			min = arr[i];
	return min;
}
float func(float arr[], int size){
	float min = arr[0];
	for(int i = 1; i < size; i++)
		if(min > arr[i])
			min = arr[i];
	return min;
}
double func(double arr[], int size){
	double min = arr[0];
	for(int i = 1; i < size; i++)
		if(min > arr[i])
			min = arr[i];
	return min;
}

int main(){
	int int_arr[4] = {2655, 11, -54, 2};
	float float_arr[5] = {1.354, 46.3, 11.2263, 14.88, -22.8};
	double double_arr[6] = {-11.46, 31.030307, 62.74, -8.6, -77.145665, 0.004562};
	cout << "Minimul element of int_arr: " << func(int_arr, 4) << endl;
	cout << "Minimul element of float_arr: " << func(float_arr, 5) << endl;
	cout << "Minimul element of double_arr: " << func(double_arr, 6) << endl;
}
