#include <iostream>
using namespace std;

class Document{
	int pages; 
public: 
	void setPages (int p){
		pages = p;
	}
	int getPages () {
		return pages;
	}
};
class Book:public virtual Document{
	string publisher; 
public: 
	void setPublisher(string pb){
		publisher = pb;
	}
};
class Newspaper: public virtual Document{
	string title;
public: 
	void setTitle (string t){
		title = t;
	}
};
class Journal: public Book, public Newspaper{
public:
	void setJournal (int p){ 
		Book::setPages (p);
	}
};
int main() {
	Journal jr; 
	jr.setJournal(10); 
	cout << jr.getPages();
	return 0;
}


