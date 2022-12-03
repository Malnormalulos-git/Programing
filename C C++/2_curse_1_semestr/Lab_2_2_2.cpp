#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>

using namespace std;

class Matrix{
private:
	int n;
	int m;
	double ** a;
	void errMem(void *);
	static int count;
public:
	Matrix(int, int);
	Matrix(const Matrix & matrix);
	~ Matrix();
	
	Matrix operator =(const Matrix & matrix);
	Matrix operator +(const Matrix & matrix);
	Matrix operator !();
	
	void printMatrix();
	void fillMatrix();
};

int Matrix::count = 0;

Matrix::Matrix(int nn, int mm): n(nn), m(mm){
	cout <<"Construstor, create object " <<++ count <<endl;
	a = new double *[ n ]; errMem(a);
	for(int i = 0; i <n; i ++){
		a[ i] = new double [m ]; errMem(a [i ]);
	}
}

Matrix::Matrix(const Matrix & matrix){
	cout <<"Copy - construstor, create object " <<++ count <<endl;
	n = matrix.n; m = matrix .m;
	a = new double *[ n ]; errMem(a);
	for(int i =0; i <n; i ++){
		a[i] = new double [m]; 
		errMem(a[i]);
	}
	for(int i = 0; i <n; i ++)
		for(int j = 0; j <m; j ++)
			a[i][j] = matrix.a[i][j];
}

Matrix::~ Matrix(){
	cout << "Destructor, delete object " <<count -- <<endl;
	for(int i = 0; i <n; i ++)
		delete a[i];
	delete [] a;
}

void Matrix::fillMatrix(){
	for(int i = 0; i <n; i ++)
	for(int j = 0; j <m; j ++)
	a[ i ][ j] = (double)rand()/ RAND_MAX;
}

void Matrix::printMatrix(){
	cout << endl;
	cout.setf(ios::fixed);
	cout.precision(3);
	for(int i =0; i <n; i ++){
		for(int j = 0; j <n; j ++)
			cout << a[i][j] << " ";
		cout << endl;
	}
	cout <<endl;
}

void Matrix::errMem(void * p){
	if(! p){
		cout << "Memory usage error !" << endl;
		exit(1);
	}
}

Matrix Matrix::operator =(const Matrix & matrix){
	cout <<" operator = \n";
	if(this == & matrix)return * this;
	
	n = matrix.n; m = matrix.m;
	
	a = new double *[n]; errMem(a);
	for(int i = 0; i < n; i ++)
	{
	a[ i] = new double [m]; errMem(a[i]);
	}
	for(int i = 0; i < n; i ++)
	for(int j = 0; j < m; j ++)
	a[i][j] = matrix.a[i][j];
	
	return * this;
}

Matrix Matrix::operator +(const Matrix & matrix){
	cout <<" operator + \n";
	Matrix tmp(n, m);
	for(int i = 0; i <n; i ++)
		for(int j = 0; j <m; j ++)
			tmp.a[i][j] = a[i][j] + matrix.a[i][j];
	return tmp;
}

Matrix Matrix::operator !(){
	cout << " operator ! \n";
	Matrix tmp(n,m);
	for(int i = 0; i < n; i ++)
		for(int j = 0; j < m; j ++)
			tmp.a[i][j] = a[j][i];
	return tmp;
}

int main(){
	srand(time(NULL));
	
	Matrix m1(3,3);
	m1.fillMatrix();
	cout <<"\nm1:\n";
	m1.printMatrix();
	
	Matrix m2(3,3);
	m2.fillMatrix();
	cout <<"\nm2:\n";
	m2.printMatrix();
	
	Matrix m3(3,3);
	cout <<"\nm3:\n";
	m3.fillMatrix();
	m3.printMatrix();
	
	m3 = m1 + m2;
	cout <<"\nm1 + m2: \n";
	m3.printMatrix();
	
	m2 = ! m1;
	cout <<"\nm2 = !m1: \n";
	m2.printMatrix();
	
	return 0;
}
