#include <stdio.h>
#include <iostream>
using namespace std;
int factorial(int val){
	if(val == 0 || val == 1){
		return 1;
	}
	return val * factorial(val-1);
}
int main(){
	int a;
	cout << "Enter value: ";
	cin >> a;
	cout << "Factorial: " << factorial(a);
}
