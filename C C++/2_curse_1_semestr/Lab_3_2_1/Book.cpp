#include "header.h"

void Book::showInfo(){
	cout << "title: " << title << ", pages: " << pages << endl;
}

Book::Book(int pg, string tl): pages(pg), title(tl){
	cout << "\nConstructor of Book \n";
}

Book::~Book(){
	cout << "Destructor of Book \n";
}
