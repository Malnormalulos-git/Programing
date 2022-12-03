#include <stdlib.h> 
#include <iostream> 
#include<time.h>  
#include <iomanip> 
using namespace std;
#pragma pack(push,1) 

int func(long [], int);
int main(){
	long a[5] = {-17432, 1277, 769493, -45367, -1255};
	long b[4];
	cout << "Func(a, 5) = " << func(a, 5) << endl;
	
	cout << "Enter 4 elements of array: ";
	cin >> b[0] >> b[1] >> b[2] >> b[3];
	cout << "Func(b, 4) = " << func(b, 4) << endl;
	
	return 0;
}
int func(long arr[], int size){
	int counter = 0;
	for(int i = 0; i < size; i++){
		if(arr[i] < 0 && arr[i]%2 != 0){
			counter++;
		}
	}
	return counter;
}
