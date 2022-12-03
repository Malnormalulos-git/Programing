#include "header.h"

int main(){
	srand(time(NULL));
	
	Matrix m1(3,3);
	m1.unitMatrix(); 		// створення одиничної матриці
	puts("\nm1:");
	m1.printMatrix();
	
	Matrix m2(3,3);
	m2.enterMatrix(); 		// введення з клавіатури 
	puts("\nm2:");
	m2.printMatrix();
	
	Matrix m3(3,3);
	puts("\nm3:");
	m3.fillMatrix(); 		// заповнення матриці випадковими значенями
	m3.printMatrix();
	
	m3 = ~m3; 				// інверсія матриці
	puts("\nm3 = ~m3:");
	m3.printMatrix();
	
	m3 = !m3; 				// транспонування матриці
	puts("\nm3 = !m3:");
	m3.printMatrix();
	
	m3 = m1 + m2; 			// додавання матриць
	puts("\nm1 + m2:");
	m3.printMatrix();
	
	m3 = m1 * m2; 			// множення матриць
	puts("\nm1 * m2:");
	m3.printMatrix();
	
	m3.fillMatrix(0.f); 	// заповнення числом(0)
	puts("\nm3 = 0:");
	m3.printMatrix();
	
	return 0;
}
