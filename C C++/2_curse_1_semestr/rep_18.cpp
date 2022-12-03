#include <iostream>
using namespace std;

class Class2;

class Class{
public:
	int A;
	Class(int a):A(a){};
	Class operator*(Class2 class2);
	void operator=(Class class1){
		cout << "operator=" << endl;
		A = class1.A;
	}
};

class Class2{
	friend Class Class::operator*(Class2 class2);
public:
	int B;
	Class2(int b):B(b){};
};

Class Class::operator*(Class2 class2){
	cout << "operator *" << endl;
	return Class(A*class2.B);
}

int main(){
	Class cl(2);
	Class2 cl2(3);
	cl = cl*cl2;
	cout << cl.A << endl; // 6
	return 0;
}
