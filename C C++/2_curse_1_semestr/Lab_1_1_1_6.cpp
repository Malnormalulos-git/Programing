#include <iostream>
using namespace std;

class Student{
private:
	unsigned short age;
	float aver_estimation;//average estimation for the last session
public:
	string name;
	unsigned short group_number;
	
	Student(string name, unsigned short group_number, unsigned short age){
		this->name 			= name;
		this->group_number 	= group_number;
		this->age 			= age;
	}
	
	void setAverageEstimation(float aver_estimation){
		this->aver_estimation = aver_estimation;
	}
	
	float getAverageEstimation(){
		return aver_estimation;
	}
};

int main(){
	Student stud("K.U. Filippenkov", 521, 19);
	stud.setAverageEstimation(90.5);
	cout << "Name: " << stud.name << "\nGroup number: " << stud.group_number << "\nAverage estimation for the last session: " << stud.getAverageEstimation() << endl;
	
	return 0;
}
