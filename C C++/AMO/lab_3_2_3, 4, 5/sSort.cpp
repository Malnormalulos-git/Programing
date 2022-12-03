#include "header.h"

void sSort(int arr[], int n){
	int min;
	for(int i = 0, j; i < n - 1; i++){
		min = i;
		for(j = i + 1; j < n; j++)
			if(arr[j] < arr[min])
				min = j;
			iswap(arr[i], arr[min]);
	}
}

