#include <iostream>
using namespace std;

class Student{
private:
	string name;
	float rating;
public:
	Student *next;
	
	Student();
	
	void setName();
	void setRating();
	
	string getName();
	unsigned short getRating();
	
	void display();
	
	static int snumber;
	static float srating;
};
