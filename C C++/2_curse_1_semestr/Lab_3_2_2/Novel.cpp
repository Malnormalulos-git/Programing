#include "header.h"

Novel::Novel(string a, int p, string t, int w, string l): author(a), Book (p, t), Text (w, l){
	cout << "\nConstructor of Novel \n";
}

Novel::~Novel (){
	cout << "Destructor of Novel \n";
}

void Novel::showInfo (){
	cout << "author: " << author << endl;
	Book::showInfo ();
	Text::showInfo ();
}
