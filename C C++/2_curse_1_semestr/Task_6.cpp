#include <iostream>
using namespace std;

class ComplexNumber{
private:
	int x;
	int y;
public:
	ComplexNumber(int x, int y):x(x), y(y){};
	void display(){
		if(y >= 0)
			cout << x << " + " <<  y << "i" << endl;
		else
			cout << x << " - " << -y << "i" << endl;
	}
	
	ComplexNumber operator--(){
		x--;
		y--;
		return *this;
	}
	ComplexNumber operator--(int value){
		--x;
		--y;
		return *this;
	}
	
	ComplexNumber operator++(){
		x++;
		y++;
		return *this;
	}
	ComplexNumber operator++(int value){
		++x;
		++y;
		return *this;
	}
	
	ComplexNumber operator!(){
		return ComplexNumber(-x, -y);
	}
	
	ComplexNumber operator~(){
		ComplexNumber tmp(y, x);
		return tmp;
	}
	
	ComplexNumber & operator=(ComplexNumber & operand2){
		x = operand2.x;
		y = operand2.y;
		return *this;
	}
	
	ComplexNumber(const ComplexNumber & other){
		x = other.x;
		y = other.y;
	}
};

int main(){
	ComplexNumber a(5, 4);
	cout << "a++ = ";
	(a++).display();
	cout << "++a = ";
	(++a).display();
	
	cout << "a-- = ";
	(a--).display();
	cout << "--a = ";
	(--a).display();
	
	ComplexNumber b(!a);
	cout << "b(!a) = ";
	b.display(); 
	
	ComplexNumber c(~a);
	cout << "c(~a) = ";
	c.display(); 
	
	return 0;
}
