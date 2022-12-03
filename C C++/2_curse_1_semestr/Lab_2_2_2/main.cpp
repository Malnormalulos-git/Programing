#include "header.h"

int main(){
	srand(time(NULL));
	
	Matrix m1(3,3);
	m1.unitMatrix(); 		// ��������� �������� �������
	puts("\nm1:");
	m1.printMatrix();
	
	Matrix m2(3,3);
	m2.enterMatrix(); 		// �������� � ��������� 
	puts("\nm2:");
	m2.printMatrix();
	
	Matrix m3(3,3);
	puts("\nm3:");
	m3.fillMatrix(); 		// ���������� ������� ����������� ���������
	m3.printMatrix();
	
	m3 = ~m3; 				// ������� �������
	puts("\nm3 = ~m3:");
	m3.printMatrix();
	
	m3 = !m3; 				// �������������� �������
	puts("\nm3 = !m3:");
	m3.printMatrix();
	
	m3 = m1 + m2; 			// ��������� �������
	puts("\nm1 + m2:");
	m3.printMatrix();
	
	m3 = m1 * m2; 			// �������� �������
	puts("\nm1 * m2:");
	m3.printMatrix();
	
	m3.fillMatrix(0.f); 	// ���������� ������(0)
	puts("\nm3 = 0:");
	m3.printMatrix();
	
	return 0;
}
