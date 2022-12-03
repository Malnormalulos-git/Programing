#include "header.h"

Manual::Manual(int i, int p, string t, int tr, int ch, int ws, string lg):instructions(i), Book(p, t), TechnicalText(tr, ch, ws, lg){
	cout << "\nConstructor of Manual \n";
}

Manual::~Manual(){
	cout << "Destructor of Manual \n";
}

void Manual::showInfo(){
	cout << "Manual:\n";
	Book::showInfo();
	cout << "instructions: " << instructions << endl;
	TechnicalText::showInfo();
}
