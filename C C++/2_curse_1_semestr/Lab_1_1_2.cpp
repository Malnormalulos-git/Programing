#include <iostream>
using namespace std ;

class Student{
private:
	char name [40];
	float rating ;
	static int numberStudents ;
public:
	void setData(){
		cout <<"Enter name : "; cin >> name;
		cout <<"Enter rating : "; cin >> rating;
		numberStudents ++;
	}
	void getData (){
		cout << name << ": " << rating << endl;
	}
	int getNumberStudents (){
		return numberStudents;
	}
};

int Student::numberStudents = 0;

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
	cout << "Number Students: " << studPtr[0]->getNumberStudents();
	for ( int i = 0; i < n; ++i)
		delete studPtr [i];
	return 0;
}
