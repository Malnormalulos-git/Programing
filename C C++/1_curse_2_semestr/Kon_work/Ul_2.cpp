#include <stdlib.h> 
#include <iostream> 
#include <time.h>
#include <iomanip> 
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <fstream>
using namespace std;

class VECTOR{
    int size;
    int *arr;
public:
	VECTOR(int size){
		this->size = size;
		arr = new int[size];
	}
	void enter_elements();
	int sum();
	~VECTOR(){
		delete[] arr;
	}
};
void VECTOR::enter_elements(){
	puts("Enter elements: ");
	for(int i = 0; i < size; i++){
		cin >> arr[i];
	}
}
int VECTOR::sum(){
	int sum = 0;
	for(int i = 0; i < size; i++){
		sum+=arr[i];
	}
	return sum;
}
int main(){
    VECTOR a(4), b(7);
	a.enter_elements();
	cout << "Sum(a) = " << a.sum() << endl;
	b.enter_elements();
	cout << "Sum(b) = " << b.sum() << endl;
	return 0;
}
