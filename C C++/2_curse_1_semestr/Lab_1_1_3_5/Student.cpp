#include <iostream>
#include "student.h"

Student::Student(){
	snumber++;
}

void Student::setName(){
	cout << "Enter name: ";
	cin >> name;
}

void Student::setRating(){
	cout << "Enter rating: ";
	cin >> rating;
	srating += rating;
}

string Student::getName(){
	return name;
}

unsigned short Student::getRating(){
	return rating;
}

void Student::display(){
	cout << name << ": " << rating << endl;
}

int Student::snumber = 0;
float Student::srating = 0;
