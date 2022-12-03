#include "Student.h"

class Group{
private:
	Student *first;
	string number;
public :
	Group();
	
	void addStudent();
	void display();
	
	~Group();
	
};

