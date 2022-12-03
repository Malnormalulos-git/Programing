#include <iostream>
using namespace std;

class Student{
private:
	string name;
public:
	Student *next;
	
	Student();
	
	void setName();
	
	string getName();
	
	static int snumber;
};
