#include "header.h"

double determ(double** Arr, int size){
	int i, j;
	double det = 0;
	double** matr;
	if(size == 1)
		det = Arr[0][0];
	else if(size == 2)
		det = Arr[0][0]*Arr[1][1] - Arr[0][1]*Arr[1][0];
	else{
		matr = new double*[size - 1];
		for(i = 0; i < size; ++i){
			for(j = 0; j < size - 1; ++j){
				if(j < i)
					matr[j] = Arr[j];
				else
					matr[j] = Arr[j + 1];
		}
		det += pow((double) - 1, (i + j))*determ(matr, size - 1)*Arr[i][size - 1];
		}
		delete[] matr;
	}
	return det;
}

