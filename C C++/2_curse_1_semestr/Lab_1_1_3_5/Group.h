#include "Student.h"

class Group{
private:
	Student *first;
	string number;
public :
	Group();
	
	void enterGroupName();
	void addStudent();
	void display();
	
	~Group();
	
};

