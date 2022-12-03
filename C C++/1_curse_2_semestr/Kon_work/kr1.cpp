#include <stdlib.h> 
#include <iostream> 
#include <time.h>  
#include <iomanip> 
#include <math.h>
using namespace std;
template <class A>
int func(A arr[], int size){
	int counter = 0;
	for(int i = 0; i < size; i++){
		cout << '\t' << arr[i];
		if(arr[i] > 10)
			counter++;
	}
	cout << "\nelements > 10: " << counter ;
	return counter;
}
int main(){
	int arr_i[5] = {1, 2, 13, 14, 10};
	float arr_f[7];
	srand((unsigned)time(NULL));
	for(int i = 0; i < 7; i++)
		arr_f[i] = (rand()%2101)*0.01;
	cout << "Arr_i: ";
	func(arr_i, 5);
	cout << "\n\nArr_f: ";
	func(arr_f, 7);
	return 0;
}
