#include "Group.h"
using namespace std;

Group::Group(){
//	cout << "Enter name of group: ";
//	cin >> number;
	first = NULL;
}

void Group::enterGroupName(){
	cout << "Enter name of group: ";
	cin >> number;
}

void Group::addStudent(){
	Student * newStudent = new Student;
	newStudent -> setName();
	newStudent -> setRating();
	newStudent -> next = first;
	first = newStudent;
}

void Group::display(){
	Student *current = first;
	cout << number << endl;
	int i = 0;
	while (current){
		i++;
		cout << i << ". ";
		current -> display();
		current = current -> next;
		
	}
}

Group::~Group(){
	Student *current = first;
	while(current != NULL){
		Student *temp = current;
		current = current -> next;
		delete temp;
	}
	cout << "All elements are deleted " << endl;
}
