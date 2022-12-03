#include "header.h"

void iSort(int arr[], int n){ 
	int tmp;
	for(int i = 1, j; i < n; i++){ 
		tmp = arr[i];
		j = i;
		while(j > 0 && arr[j - 1] >= tmp){ 
			arr[j] = arr[j - 1];
			j--;
		}
		arr[j] = tmp;
	}
}
