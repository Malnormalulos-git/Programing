#include "header.h"

void gauss(double **matrix, int n){
	double tmp, xx[n]; 
	int k;
	for (int i = 0; i < n; i++){
		tmp = matrix[i][i];
		for(int j = n; j >= i; j--)
			matrix[i][j] /= tmp;
		for(int j = i + 1; j < n; j++){
			tmp = matrix[j][i];
			for(k = n; k >= i; k--)
				matrix[j][k] -= tmp*matrix[i][k];
		}
	}
}
