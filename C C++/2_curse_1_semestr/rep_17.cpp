#include <iostream>
using namespace std;

class Class{
public:
	int A;
	Class(int a):A(a){};
	friend Class operator*(const Class cl1, const Class cl2);
	void operator=(Class class1){
		cout << "operator=" << endl;
		A = class1.A;
	}
};

Class operator*(const Class cl1, const Class cl2){
	cout << "operator *" << endl;
	return Class(cl1.A*cl2.A);
}

int main(){
	Class cl1(2);
	Class cl2(3);
	cl1 = cl1*cl2;
	cout << cl1.A << endl; // 6
	return 0;
}
