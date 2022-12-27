#include <iostream>
using namespace std;

class A{
private:
	int arrS[10];
	int size;
	int *arrD;
	string func(){
		return "string";
	}
protected:
	short b;
	void func2(){
		cout << "func 2" << endl;
	}
public:
	char symbol;
	A(int size){
		for(int i = 0; i < 10; i++){
			arrS[i] = i;
		}
		this->size = size;
		arrD = new int[size];
		for(int i = 0; i < size; i++){
			arrD[i] = i;
		}
	}
	int getArrD(int index){
		return arrD[index];
	}
	void setArrD(int index, int value){
		arrD[index] = value;
	}
	int getArrS(int index){
		return arrS[index];
	}
	void setArrS(int index, int value){
		arrS[index] = value;
	}
	A(const A &other){
		for(int i = 0; i < 10; i++){
			this->arrS[i] = other.arrS[i];
		}
		this->size = other.size;
		this->arrD = new int[size];
		for(int i = 0; i < size; i++){
			this->arrD[i] = other.arrD[i];
		}
		this->symbol = other.symbol;
	}
	~A(){
		delete[] arrD;
	}
};

A func(A a){
	a.symbol = 'G';
	return a;
}

int main(){
	A a(10);
	a.symbol = 'S';
	cout << a.symbol << endl;
	A *b = new A(20);
	b->setArrD(0, 8);
	cout << b->getArrD(0) << endl;
	cout << func(a).symbol << endl;
	return 0;
}
