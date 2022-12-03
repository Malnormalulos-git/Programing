#include "header.h"

void bubbleSort(int arr[], int n){
	for(int j = n - 1, i; j >= 1; j--)
		for(i = 0; i < j; ++i)
		if(arr[i] > arr[i + 1])
			iswap(arr[i], arr[i + 1]);
}
