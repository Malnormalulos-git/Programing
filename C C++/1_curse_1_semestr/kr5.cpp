//#include <stdlib.h> 
//#include <iostream>
//#include <iomanip>
//using namespace std;
int main(){
	int k = 1;
	float arr[7] = {1.34, 0.56, -2.78, 2.1, 4.11, -1.488, 0.21}, min = arr[k];
	for(int i = 0; i < 7; i++){
		if(arr[i] < min){
			min = arr[i];
			k = i;
		}
	}
	float *ptr = &arr[2];
	*(arr + 4) *= 5;
	return 0;
}
