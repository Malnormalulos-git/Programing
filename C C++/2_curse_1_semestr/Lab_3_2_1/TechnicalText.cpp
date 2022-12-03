#include "header.h"

void TechnicalText::showInfo(){
	cout << "terms:" << terms << ", charts: " << charts << endl;
	Text::showInfo();
}

TechnicalText::TechnicalText(int tr, int ch, int ws, string lg): terms(tr), charts(ch), Text(ws, lg){
	cout << "\nConstructor of TechnicalText \n";
}

TechnicalText::~TechnicalText(){
	cout << "Destructor of TechnicalText \n";
}
