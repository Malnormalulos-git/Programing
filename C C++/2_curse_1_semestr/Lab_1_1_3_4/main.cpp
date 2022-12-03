#include "Group.h"

int main (){
	Group group;
	char ch;
	do{
		group.addStudent () ;
		cout << "Enter next (y/n)?\n";
		cin >> ch ;
	}while(ch == 'y');
	group.display();
	cout << "\nNumber of students: " << Student::snumber << endl;
	cout << "Students average raiting: " << Student::srating/Student::snumber << endl << endl;
	return 0;
}
