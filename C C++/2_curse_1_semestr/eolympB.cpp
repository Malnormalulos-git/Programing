#include <iostream>
#include <ctime> 
#include <cstdlib>
#include <random> 
#include <stdlib.h>
#include <math.h>
#include <time.h> 
using namespace std;

void qSort(int arr[], int l, int r){ 
	int p = arr[(r + l)/2];
	int i = l, j = r;
	do{
		while(arr[i] < p)
			i++;
		while(arr[j] > p)
			j--;
		if(i <= j){
			swap(arr[i], arr[j]); 
			i++; 
			j--;
		}
	}while(i <= j);
	if(i < r)
		qSort(arr, i, r);
	if(j > l)
		qSort(arr, l, j);
}

int main(){//B
	short n, q, mode; 
	int k, x;
	int *arr; 
	cin >> n >> q;
	arr = new int[n];
	for(int j = 0; j < n; j++){
		cin >> arr[j];
	}
	qSort(arr, 0, n - 1);
	for(int i = 0; i < q; i++){
		cin >> mode;
		if(mode == 1){
			cin >> x;
			for(int j = 0; j < n; j++){
				arr[j] += x;
			}
		}
		else if(mode == 2){
			cin >> k;
			cout << arr[n - k] << endl;
		}
	}	
	delete[] arr;
	return 0;	
}
