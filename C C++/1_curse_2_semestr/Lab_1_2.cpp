#include <stdlib.h> 
#include <iostream> 
#include<time.h>  
#include <iomanip> 
using namespace std;
#pragma pack(push,1) 

long func(long [], int);
int main(){
	long a[5] = {-17432, 1277, 769493, -45367, -126};
	long b[4];
	long c[3];
	cout << "Sum of negative odd elements of the array a = " << func(a, 5) << endl;
	cout << "\nArr_b: ";
	srand((unsigned)time(NULL));
	for(int i = 0; i < 4; i++){
		b[i] = rand()%401 - 200;
		cout << b[i] << "\t";
	}
	cout << "\nSum of negative odd elements of the array b = " << func(b, 4) << endl;
	
	cout << "\nEnter 3 elements of array:\n";
	cin >> c[0] >> c[1] >> c[2];
	
	cout << "Sum of negative odd elements of the array c = " << func(c, 3);
	return 0;
}
long func(long arr[], int size){
	int sum = 0;
	for(int i = 0; i < size; i++){
		if(arr[i] < 0 && arr[i]%2 != 0)
			sum+=arr[i];
	}
	return sum;
}

