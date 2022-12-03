#include <iostream>
using namespace std ;

class Student{
protected:
	char name [40];
	float rating;
	static int numberStudents;
	static float group_rating;
public:
	void setData(){
		cout <<"Enter name: "; cin >> name;
		cout <<"Enter rating: "; cin >> rating;
		numberStudents++;
		group_rating += rating;
	}
	void getData (){
		cout << name << ": " << rating << endl;
	}
	int getNumberStudents (){
		return numberStudents;
	}
	float getAverageGroupRating(){
		return group_rating/numberStudents;
	}
};

int Student::numberStudents = 0;
float Student::group_rating = 0;

class MonitorStudent:public Student{
private:
	unsigned short group_number;
public:
	void setData(){
		cout <<"Enter monitor student name: "; cin >> name;
		cout <<"Enter monitor student rating: "; cin >> rating;
		cout <<"Enter monitor student group: "; cin >> group_number;
		numberStudents++;
		group_rating += rating;
	}
	void getData (){
		cout << name << ": " << rating << "\tMonitor student, responsible for the group " << group_number << endl;
	}
	void callToDeanery(){
		cout << name << " is calling to Deanery\t-Ding-dong\t-Ding-dong" << endl;
	}
};

int main(){
	MonitorStudent monstud;
	monstud.setData();
	monstud.callToDeanery();
	
	Student *studPtr[30];
	int n = 0;
	char ch;
	cout << "\nEnter students data" << endl;
	do{
		studPtr [n] = new Student;
		studPtr [n]->setData();
		n++;
		cout << "Enter next (y/n)?";
		cin >> ch ;
	}while( ch == 'y');
	
	cout << "1.";
	monstud.getData();
	for(int i = 0; i < n; i++){
		cout << i + 2 <<".";
		studPtr [i]->getData();
	}
	cout << "\nNumber Students: " << studPtr[0]->getNumberStudents() << endl;
	cout << "Average group rating: " << studPtr[0]->getAverageGroupRating() << endl << endl;
	
	for ( int i = 0; i < n; ++i)
		delete studPtr [i];
	return 0;
}
