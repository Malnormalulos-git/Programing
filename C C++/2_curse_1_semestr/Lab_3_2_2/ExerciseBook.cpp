#include "header.h"

ExerciseBook::ExerciseBook(string o, int p, string t): owner(o), Book(p, t){
	cout << "\nConstructor of ExerciseBook ";
}

ExerciseBook::~ExerciseBook(){
	cout << "Destructor of ExerciseBook \n";
}

void ExerciseBook::showInfo(){
	cout << "\nExercise Book:\n";
	cout << "owner: " << owner << endl;
	Book::showInfo();
}
