#include <stdlib.h>
#include <iostream>
#include <iomanip>
#include<time.h> 
using namespace std;
int main(){
	int i, j, max, N;
	cout << "Enter number of elements of the array: ";
	cin >> N;
	int dig[N];
	srand((unsigned)time(NULL));
	cout<<"Old array\n";
	for(i = 0; i < N; i++){
 		dig[i] = rand()%201 - 100; 
 		cout << dig[i] << "  ";
	}
	cout << endl;
	for(i = 0; i < N - 1; i++){
		for(j = 0; j < N - 1 - i; j++){
			if(dig[j] > dig[j + 1]){
 				max = dig[j];
				dig[j] = dig[j + 1];
				dig[j + 1] = max;
			}
		}
 	}
 	cout << "\nNew array\n";
 	for(i = 0; i < N; i++) 
		cout << dig[i] << "  ";
 	cout << endl << endl; 
 	return 0;
}

