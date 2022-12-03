#include "header.h"

int bSearch(int arr[], int key, int l, int r){
	int m = 0; 
	while(true){
		m = (l + r)/2;
		if(key == arr[m]) {
//			cout<<"B found: arr[" << m << "] = " << arr[m] << endl;
			return m;
		}
		else if(key < arr[m]) 
			r = m - 1;
		else if(key > arr[m]) 
			l = m + 1;
		if(l > r) 
			return -1;
	}
}

