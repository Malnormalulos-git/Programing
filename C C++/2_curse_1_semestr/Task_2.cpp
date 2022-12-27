#include <iostream>
using namespace std;

class A{
	int size;
	int *arrD;
	short b;
public:
	A(int size, short number):size(size), b(number){
		this->size = size;
		arrD = new int[size];
		for(int i = 0; i < size; i++){
			arrD[i] = i;
		}
	}
	~A(){
		delete[] arrD;
	}
};

class B{
public:
	int a;
};

class C{
	int a;
	int b;
public:
	C(){
		a = 0;
		b = 0;
	}
	C(int a){
		this->a = a;
		b = 0;
	}
	C(int a, int b){
		this->a = a;
		this->b = b;
	}
	void print(){
		cout << "a = " << a << ",\tb = " << b << endl;
	}
};

int main(){
	A a(10, 21);

	B b;
	b.a = 123;
	B b2(b);
	cout << b2.a << endl; 
	
	C c1, c2(1), c3(2, 3);
	c1.print();
	c2.print();
	c3.print();
	return 0;
}
