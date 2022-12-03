#include <iostream>
#include "student.h"

Student::Student(){
	snumber++;
}

void Student::setName(){
	cout << "Enter name: ";
	cin >> name;
}

string Student::getName(){
	return name;
}

int Student::snumber = 0;
