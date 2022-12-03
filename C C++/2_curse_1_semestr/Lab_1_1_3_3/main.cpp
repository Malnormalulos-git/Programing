#include "Group.h"

int main (){
	Group group;
	char ch;
	do{
		group.addStudent () ;
		cout << "Enter next (y/n)?\n";
		cin >> ch ;
	}while(ch == 'y');
	group.display ();
	cout << "Number students: " << Student::snumber << endl;
// (a) чи однаковий об'єм пам'яті займають об'єкти типу Student?
// - так
// (b) елементи списку знаходяться в пам'яті один за одним?
// - ні
	return 0;
}
