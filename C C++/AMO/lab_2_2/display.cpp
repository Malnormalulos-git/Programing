#include "header.h"

void display(double **matrix, int n){
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++)
			printf("\t%10.1lf", matrix[i][j]);
		printf("\n");
	}
}
