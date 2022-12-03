#include <iostream>
using namespace std ;

class Student{
private:
	char name [40];
	float rating;
	static int numberStudents;
	static float group_rating;
public:
	void setData(){
		cout <<"Enter name : "; cin >> name;
		cout <<"Enter rating : "; cin >> rating;
		numberStudents++;
		group_rating += rating;
	}
	void getData (){
		cout << name << ": " << rating << endl;
	}
	int getNumberStudents (){
		return numberStudents;
	}
	float getAverageGroupRating(){
		return group_rating/numberStudents;
	}
};

int Student::numberStudents = 0;
float Student::group_rating = 0;

int main(){
	Student *studPtr[30];
	int n = 0;
	char ch;
	do{
		studPtr [n] = new Student;
		studPtr [n]->setData();
		n++;
		cout << "Enter next (y/n)?";
		cin >> ch ;
	}while( ch == 'y');
	
	for(int i = 0; i < n; i++){
		cout << i + 1 <<".";
		studPtr [i]->getData();
	}
	cout << "\nNumber Students: " << studPtr[0]->getNumberStudents() << endl;
	cout << "Average group rating: " << studPtr[0]->getAverageGroupRating() << endl << endl;
	
	cout << "sizeof(studPtr[0]) = " << sizeof(studPtr[0]) << endl; // �������� 8 ����
	cout << "sizeof(studPtr) = " << sizeof(studPtr) << endl; // 8*30 = 240 ����
	cout << "sizeof(Student) = " << sizeof(Student) << endl;  /*40 ���� �� ����� �������, 4 ����� �� ����� float, 
																�� ������� ����� ���'��� ���������� ���������� 
																��� ��� ���������� �����, ����� �� 4 �� int � �� float,
																�� ������ ���'��� �� ����������*/ 
	for ( int i = 0; i < n; ++i)
		delete studPtr [i];
	return 0;
}
