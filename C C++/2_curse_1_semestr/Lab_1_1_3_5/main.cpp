#include "Group.h"

int main (){
	Group *groups;
	unsigned int numOfGr;
	cout << "Enter number of groups: ";
	cin >> numOfGr;
	
	groups = new Group[numOfGr];
	
	for(int i = 0; i < numOfGr; i++){
		groups[i].enterGroupName();
		char ch;
		do{
			groups[i].addStudent () ;
			cout << "Enter next (y/n)?\n";
			cin >> ch ;
		}while(ch == 'y');
		cout << endl;
	}
	
	for(int i = 0; i < numOfGr; i++){
		groups[i].display();
		cout << endl;
	}
	
	delete[] groups;
	return 0;
}
