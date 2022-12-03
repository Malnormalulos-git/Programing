#include "header.h"

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
