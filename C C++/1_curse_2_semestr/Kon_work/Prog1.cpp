#include <stdlib.h> 
#include <iostream> 
#include <time.h>  
#include <iomanip> 
#include <math.h>
using namespace std;
int func(float arr[], int size){
	int count = 0;
	for(int i = 0; i < size; i++){
		if(arr[i] > -10 && arr[i] < 10){
			count++;
		}
	}
	return count;
}
int main(){
	float arr1[5] = {20, -10, 5, 0, 1};
	float arr2[4];
	puts("Enter elements: ");
	for(int i = 0; i < 4; i++){
		cin >> arr2[i];
	}
	cout  << "Arr1: ";
	for(int i = 0; i < 5; i++){
		cout << arr1[i] << '\t';
	}
	cout << "\nArr2: ";
	for(int i = 0; i < 4; i++){
		cout << arr2[i] << '\t';
	}
	cout << "\nFunc(arr1) = " << func(arr1, 5) << endl;
	cout << "Func(arr2) = " << func(arr2, 4) << endl;
	return 0;
}

