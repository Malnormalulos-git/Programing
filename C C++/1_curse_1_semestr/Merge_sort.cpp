#include <stdio.h>
#include <iostream>
using namespace std;
void merge_sort(int size, int *arr){
	int temporary;
	for(int i = 1; i < size; i+=2){
		if(arr[i-1] > arr[i]){
			temporary = arr[i];
			arr[i] = arr[i-1];
			arr[i-1] = temporary;
		}
		cout << arr[i-1] << " " << arr[i] << "  ";
	}
	cout << endl;
	for()
}

int main(){
	int size = 8;
	int arr[size] = {6, 5, 3, 1, 8, 7, 2, 4};
	for(int i = 0; i < size; i++){
		cout << arr[i];
	}
	cout << endl;
	merge_sort(size, arr);
}
