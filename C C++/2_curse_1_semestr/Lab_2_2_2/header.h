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
	
	static int count;
	
	void errMem(void *);
public:
	Matrix(int, int);
	Matrix(const Matrix & matrix);
	
	Matrix operator =(const Matrix & matrix);
	Matrix operator +(const Matrix & matrix);
	Matrix operator *(const Matrix & matrix);
	Matrix operator ~();
	Matrix operator !();
	
	void printMatrix();
	
	void fillMatrix();
	void fillMatrix(double);
	void unitMatrix();
	void enterMatrix();
	
	~ Matrix();
};


