#include "header.h"
#define N 3
void iteration(double **a, double b[3], double x[3], double eps){
	int i, j, k = 0; // k � ������� ��������
	double norma; // ����� �������
	double xn[N];// ������ ��� ������� ��������
	do{
		k++;
		norma = 0.0;
		for(i = 0; i < N; i++){
			xn[i] = -b[i];
			for(j = 0; j < N; j++){
				if(i != j)
					xn[i] += a[i][j]*x[j];
			}
			xn[i] /= -a[i][i];
		}
		for(i = 0; i < N; i++){
			if(fabs(x[i] - xn[i]) > norma)
				norma = fabs(x[i] - xn[i]); //���������� ����� �������
			x[i] = xn[i];
		}
	}while(norma > eps);//�������� �� ������ ������� ���������
	printf("%d\t", k);
	return;
}
