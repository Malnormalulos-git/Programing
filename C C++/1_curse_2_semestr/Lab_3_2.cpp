#include <stdlib.h> 
#include <iostream> 
#include <time.h>  
#include <iomanip> 
#include <math.h>
using namespace std;
class Matrix{
	int m, n;
	double *matr;
	public:
	Matrix(int, int = 1);
	void enter_an_elements();
	void display();
	int quantity_of_positive();
	double sum_of_positive();
	void random_in_range(int, int);
	~Matrix();
};
Matrix::Matrix(int M, int N){
	m = M; 
	n = N;
	if((matr = new double[n*m]) == NULL) 
		exit(1);
	for(int i = 0,j; i < m; i++)
 		for(j = 0; j < n; j++)
 			*(matr + i*n + j) = ((double)rand()/RAND_MAX)*100 - 50;
}
void Matrix::display(){
	for(int i = 0, j; i < m; i++){
		for(j = 0; j < n; j++){
			cout.width(10);
 			cout << *(matr + i*n + j); 
		}
 		cout << "\n";
	}
//	cout << "\n";
//	system("pause");
}
void Matrix::enter_an_elements(){
	cout << "Enter elements of matrix: " << endl;
	for(int i = 0,j; i < m; i++)
 		for(j = 0; j < n; j++)
 			cin >> *(matr + i*n + j);
}
int Matrix::quantity_of_positive(){
	int counter = 0;
	for(int i = 0,j; i < m; i++)
 		for(j = 0; j < n; j++)
 			if(*(matr + i*n + j) > 0)
 				counter++;
 	return counter;
}
double Matrix::sum_of_positive(){
	double sum = 0;
	for(int i = 0,j; i < m; i++)
 		for(j = 0; j < n; j++)
 			if(*(matr + i*n + j) > 0)
 				sum+=*(matr + i*n + j);
 	return sum;
}
void Matrix::random_in_range(int min, int max){
	for(int i = 0,j; i < m; i++)
 		for(j = 0; j < n; j++)
 			*(matr + i*n + j) = ((double)rand()/RAND_MAX)*(-min + max) + min;
}
Matrix::~Matrix(){
		delete [] matr; 
		cout << "matr delete\n";
}

int main(){
	srand(time(NULL));
	Matrix A(5), B(3,3), C(4,5);
	int min, max; 
	
	cout << "A:\n";
	A.enter_an_elements();
	cout << "Quantity of positive elements: " << A.quantity_of_positive() << endl;
	cout << "Sum of positive elements: " << A.sum_of_positive() << endl;
	
	cout << endl << "B:\n";
	B.display(); 
	cout << "Quantity of positive elements: " << B.quantity_of_positive() << endl;
	cout << "Sum of positive elements: " << B.sum_of_positive() << endl;
	
	cout << endl << "C:\n";
	cout << "Enter range" << endl << "minimum: ";
	cin >> min;
	cout << "maximum: ";
	cin >> max;
	C.random_in_range(min, max);
	C.display(); 
	cout << "Quantity of positive elements: " << C.quantity_of_positive() << endl;
	cout << "Sum of positive elements: " << C.sum_of_positive() << endl;
	cout << endl;
	
	return 0;
}

