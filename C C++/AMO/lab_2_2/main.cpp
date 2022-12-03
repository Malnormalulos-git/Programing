#include "header.h"

int main(){
//	int n = 3;								// Kramer
//	double ** matrix = new double * [n];
//	matrix[0] = {new double[n]{18, 3, -10}};
//	matrix[1] = {new double[n]{-3, 10, -5}};
//	matrix[2] = {new double[n]{1,  -3,  8}};
//	double b[n] = {84, -32, 69};
//	double det = determ(matrix, n);
//	printf("\n\tDeterminant = %lf\n\n", det);
//	double D[n];
//	puts("\tn\tdet(n)\t\tX(n)");
//	for(int i = 0; i < n; i++){
//		D[i] = determ1(matrix, b, n, i);
//		printf("\t%d\t%5.1lf", i, D[i]);
//		D[i] /= det;
//		printf("\t\t%3.1lf\n", D[i]);
//	}
//	for(int i = 0; i < n; i++){
//		delete [] matrix[i];
//	}
//	delete [] matrix;
	
	
//	int n = 3;											//gauss
//	double ** matrix = new double * [n];
//	matrix[0] = {new double[n + 1]{18, 3, -10,  84}};
//	matrix[1] = {new double[n + 1]{-3, 10, -5, -32}};
//	matrix[2] = {new double[n + 1]{1,  -3,  8,  96}};
//	gauss(matrix, n);
//	puts(" ");
//	for (int i = 0; i < n; i++){
//		for (int j = 0; j < 4; j++)
//			printf("\t%10lf", matrix[i][j]);
//		printf("\n");
//	}
//	double x1, x2, x3 = matrix[2][3] * matrix[2][2];
//	x2 = matrix[1][3] - x3*matrix[1][2];
//	x1 = matrix[0][3] - x3*matrix[0][2] - x2*matrix[0][1];
//	puts("\n\n\tX1\t\tX2\t\tX3");
//	printf("\t%5lf\t%5lf\t%5lf\n", x1, x2, x3);
//	for(int i = 0; i < n; i++){
//		delete [] matrix[i];
//	}
//	delete [] matrix;
	
	
	
//	int n = 3;											// Matrix
//	double ** matrix = new double * [n];
//	matrix[0] = {new double[n]{18, 3, -10}};
//	matrix[1] = {new double[n]{-3, 10, -5}};
//	matrix[2] = {new double[n]{1,  -3,  8}};
//	double b[n] = {84, -32, 69};
//	double X[n];
//	inversion(matrix, n);
//	for(int j = 0; j < n; j++){ 
//		X[j] = 0;
//		for(int i = 0; i < n; i++)
//			X[j] += matrix[j][i]*b[i];
//	}
//	for (int i = 0; i < n; i++){
//		for (int j = 0; j < n; j++)
//			printf("\t%10.6lf", matrix[i][j]);
//		printf("\n");
//	}
//	puts("\n\n\t  X1\t\t  X2\t\t  X3");
//	for(int i = 0; i < n; i++){
//		printf("\t%5.1lf\t", X[i]);
//		delete [] matrix[i];
//	}
//	delete [] matrix;
	
	
	
	int n = 3;											// Iter
	double ** matrix = new double * [n];
	matrix[0] = {new double[n]{18, 3, -10}};
	matrix[1] = {new double[n]{-3, 10, -5}};
	matrix[2] = {new double[n]{1,  -3,  8}};
	double b[n] = {84, -32, 69};
	double X[n] = {0};
	puts("\n\tEps\t\tK\tX1\t\tX2\t\tX3");
	for(int i = 2; i < 7; i++){
		printf("\t%lf\t", pow(10, -i));
		iteration(matrix, b, X, pow(10, -i));
		for(int j = 0; j < n; j++)
			printf("%lf\t", X[j]);
		puts(" ");
	}
	for(int i = 0; i < n; i++){
		delete [] matrix[i];
	}
	delete [] matrix;
	
	return 0;
}
