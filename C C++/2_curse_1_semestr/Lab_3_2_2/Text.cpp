#include "header.h"

void Text::showInfo(){
	cout <<"words: " << words <<", language: " << language << endl;
}

Text::Text(int ws, string lg): words(ws), language(lg){
	cout << "\nConstructor of Text \n";
}

Text::~Text(){
	cout << "Destructor of Text \n";
}
