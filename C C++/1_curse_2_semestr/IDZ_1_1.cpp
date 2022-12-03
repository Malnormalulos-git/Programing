#include <stdlib.h> 
#include <iostream> 
#include<time.h>  
#include <iomanip> 
using namespace std;

int main(){
	int n;
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
			ptr[i][j] = rand()%301;  
    		cout << setw(8) << ptr[i][j];
		}
		cout << endl;
	}
	cout << endl << "New matrix: " << endl;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			if(i == j)
				ptr[i][j] = 100; 
			ptr[i][n - i - 1] = 100; 
    		cout << setw(8) << ptr[i][j];
		}
		cout << endl;
	}
	for(int i = 0; i < n; i++){
		delete ptr[i];
	}
	delete [] ptr;
	return 0;
}
