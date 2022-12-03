#include "header.h"

int Matrix::count = 0;

void Matrix::errMem(void * p){
	if(!p){
		cout << "Memory usage error!" << endl;
		exit(1);
	}
}

Matrix::Matrix(int nn, int mm): n(nn), m(mm){
	cout << "Construstor, create an object " << ++count <<endl;
	a = new double *[n]; 
	errMem(a);
	for(int i = 0; i < n; i++){
		a[i] = new double [m]; 
		errMem(a [i]);
	}
}

Matrix::Matrix(const Matrix & matrix){
	cout << "Copy - construstor, create an object " << ++count << endl;
	n = matrix.n; m = matrix .m;
	a = new double *[n]; 
	errMem(a);
	for(int i = 0; i < n; i++){
		a[i] = new double [m]; 
		errMem(a[i]);
	}
	for(int i = 0; i < n; i ++)
		for(int j = 0; j < m; j ++)
			a[i][j] = matrix.a[i][j];
}

Matrix Matrix::operator =(const Matrix & matrix){
	cout <<" operator = \n";
	if(this == & matrix)
		return * this;
	else{
		for(int i = 0; i < n; i++)
			delete a[i];
		delete [] a;
	}
	
	n = matrix.n; 
	m = matrix.m;
	
	a = new double *[n]; 
	errMem(a);
	for(int i = 0; i < n; i++){
		a[i] = new double [m]; 
		errMem(a[i]);
	}
	for(int i = 0; i < n; i++)
		for(int j = 0; j < m; j++)
			a[i][j] = matrix.a[i][j];
	
	return * this;
}

Matrix Matrix::operator +(const Matrix & matrix){
	cout << " operator + \n";
	Matrix tmp(n, m);
	for(int i = 0; i < n; i++)
		for(int j = 0; j <m; j ++)
			tmp.a[i][j] = a[i][j] + matrix.a[i][j];
	return tmp;
}

Matrix Matrix::operator *(const Matrix & matrix){
	cout << " operator * \n";
	Matrix tmp(n, matrix.m);
	tmp.fillMatrix(0.f);
	if(m != matrix.n){
		cout << "Error! The number of columns of matrix A should be equal to the number of rows of matrix B" << endl;
		return tmp;
	}
	for(int i = 0; i < n; i++)
		for(int j = 0; j < m; j++)
			for(int k = 0; k < n; k++)
				tmp.a[i][j] += a[i][k]*matrix.a[k][j];
	return tmp;
}

Matrix Matrix::operator !(){
	cout << " operator ! \n";
	Matrix tmp(m, n);
	for(int i = 0; i < m; i++)
		for(int j = 0; j < n; j++)
			tmp.a[i][j] = a[j][i];
	return tmp;
}

Matrix Matrix::operator ~(){//
	cout << " operator ~ \n";
	Matrix tmp(n, m);
	for(int i = 0; i < n; i++)
		for(int j = 0; j < m; j++)
			tmp.a[i][j] = -a[i][j];
	return tmp;
}//

void Matrix::printMatrix(){
	cout << endl;
	cout.setf(ios::fixed);
	cout.precision(3);
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++)
			cout << a[i][j] << " ";
		cout << endl;
	}
	cout << endl;
}

void Matrix::fillMatrix(){
	for(int i = 0; i < n; i ++)
		for(int j = 0; j < m; j ++)
			a[i][j] = (double)rand()/RAND_MAX;
}

void Matrix::fillMatrix(double num){
	for(int i = 0; i < n; i ++)
		for(int j = 0; j < m; j ++)
			a[i][j] = num;
}

void Matrix::unitMatrix(){
	for(int i = 0; i < n; i ++)
		for(int j = 0; j < m; j ++){
			if(i == j)
				a[i][j] = 1;
			else
				a[i][j] = 0;
		}
}

void Matrix::enterMatrix(){
	for(int i = 0; i < n; i ++)
		for(int j = 0; j < m; j ++){
			cout << endl << "matrix[" << i + 1 << "][" << j + 1 << "] = ";
			cin >> a[i][j];
		}
}



Matrix::~Matrix(){
	cout << "Destructor, delete an object " << count-- << endl;
	for(int i = 0; i < n; i++)
		delete a[i];
	delete [] a;
}
