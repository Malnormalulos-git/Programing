#include "header.h"

double determ1(double** Arr, double* Brr, int size, int n){
	double**Arr1;
	Arr1 = new double*[size];
	for(int i = 0; i < size; ++i)
		Arr1[i] = new double[size];	
	for(int i = 0; i < size; ++i)
		for(int j = 0; j < size; ++j)
			Arr1[i][j] = Arr[i][j];		
	for(int i = 0; i < size; ++i)
		for(int j = n; j < n + 1; ++j)
			Arr1[i][j] = Brr[i];	
	double D = determ(Arr1, size); 
	for(int i = 0; i < size; ++i)
		delete[] Arr1[i];
	delete[] Arr1;
	return D;
}
