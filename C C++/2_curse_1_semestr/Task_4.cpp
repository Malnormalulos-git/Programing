#include <iostream>
using namespace std;

class A;

class B{
public:
	void setAinClass(A &obj, int value);
};

class C;

class A{
	int a;
	friend void setA(A &a, int value);
	friend void B::setAinClass(A &obj, int value);
	friend C;
public:
	A(int value){
		a = value;
	}
	int getA(){
		return a;
	}
};

void setA(A &a, int value){
	a.a = value;
}

void B::setAinClass(A &obj, int value){
	obj.a = value;
}

class C{
public:
	setAinFriendClass(A &obj, int value){
		obj.a = value;
	}
};

int main(){
	A a(1);
	cout << "a.a = " << a.getA() << endl;
	setA(a, 2);
	cout << "friend setA(2)" << endl << "a.a = " << a.getA() << endl << endl;
	
	B b;
	b.setAinClass(a, 3);
	cout << "friend setAinClass(3)" << endl << "a.a = " << a.getA() << endl << endl;
	
	C c;
	c.setAinFriendClass(a, 4);
	cout << "friend setAinFriendClass(4)" << endl << "a.a = " << a.getA() << endl;
	
	return 0;
}
