#include <iostream>

using namespace std;

class Student;
class Dean;

class Professor{
public: 
	void setRating(Student *, float);
	float getRaiting(Dean *);
};

class Dean{
private:
	float stRaiting;
	friend float Professor::getRaiting(Dean *);
public:
	float getRating(Student *);
	void approveTheScholarship(Student *);
};

class Student {
private:
	string name;
	float rating;
	float marks[8];
	bool haveScholarship;
	
	friend void Professor::setRating(Student *, float);
	friend float Dean::getRating(Student *);
	friend void Dean::approveTheScholarship(Student *);
public:
	Student();
	Student(float, float, float, float, float, float, float, float);
		
	string getName();
};

Student::Student(){
	cout << "Enter name: "; 
	cin >> name;
	haveScholarship = 0;
}

Student::Student(float m1, float m2, float m3, float m4, float m5, float m6, float m7, float m8){
	cout << "Enter name: "; 
	cin >> name;
	haveScholarship = 0;
	
	marks[0] = m1;
	marks[1] = m2;
	marks[2] = m3;
	marks[3] = m4;
	marks[4] = m5;
	marks[5] = m6;
	marks[6] = m7;
	marks[7] = m8;
}

string Student::getName(){
	return name;
}

void Professor::setRating(Student *st, float rt){
	st -> rating = rt;
}

float Professor::getRaiting(Dean *d){
	cout << "Raiting: " << d -> stRaiting << endl;
	return d -> stRaiting;
}

float Dean::getRating(Student* st){
	cout << st -> getName();
	if(st -> rating >= 75) 
		cout << ": Good!\n";
	else 
		cout << ": Bad!\n";
	return st -> rating;
}

void Dean::approveTheScholarship(Student* st){
	stRaiting = 0;
	for(int i = 0; i < 8; i++){
		stRaiting += st -> marks[i];
	}
	stRaiting /= 8;
	cout << st -> getName();
	if(stRaiting >= 75){
		st -> haveScholarship = 1;
		puts(" has scholarship");
	}
	else{
		st -> haveScholarship = 0;
		puts(" has not scholarship");
	}
}

int main(){
	Student st1(74, 92, 68, 41, 64, 58, 77, 94), 
			st2(78, 61, 100, 47, 77, 42, 50, 69), 
			st3(99, 88, 93, 90, 90, 80, 89, 94);
			
	Professor prof;
	Dean dn;
	
//	prof.setRating(&st1, 65);
//	prof.setRating(&st2, 75);
//	prof.setRating(&st3, 76);
	
	dn.approveTheScholarship(&st1);
	prof.getRaiting(&dn);
	dn.approveTheScholarship(&st2);
	prof.getRaiting(&dn);
	dn.approveTheScholarship(&st3);
	prof.getRaiting(&dn);
	
	return 0;
}
