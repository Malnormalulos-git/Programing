#include "header.h"

int lSearch(int arr[], int key, int n){ 
	for (int i = 0; i < n; i++)
	if (arr[i] == key) {
//		cout << "L found: arr[" << i << "]=" << arr[i] << endl;
		return i;
	}
	return -1;
}
