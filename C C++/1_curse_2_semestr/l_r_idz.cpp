#include <stdlib.h> 
#include <iostream> 
#include<time.h>  
#include <iomanip> 
using namespace std;

int main(){
	int n, counter = 0;
	int **ptr;
	cout << "Enter size of square matrix: ";
	cin >> n;
	ptr = new int*[n];
	if(ptr == NULL){
		cout << "Error!";
		return -1;
	}
	for(int i = 0; i < n; i++){
		ptr[i] = new int[n];
		if(ptr[i] == NULL){
		cout << "Error!";
		return -2;
		}
	}
	cout << endl <<"Old matrix: " << endl;
	srand((unsigned)time(NULL));
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			ptr[i][j] = rand()%1001 - 500;  
    		cout << setw(8) << ptr[i][j];
		}
		cout << endl;
	}
	cout << endl << "New matrix: " << endl;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			if(ptr[i][j] < 0){
				ptr[i][j] = 0;
				counter++; 
			}
    		cout << setw(8) << ptr[i][j];
		}
		cout << endl;
	}
	cout << "Quantity of negative elements: " << counter << endl;
	for(int i = 0; i < n; i++){
		delete ptr[i];
	}
	delete [] ptr;
	return 0;
}
