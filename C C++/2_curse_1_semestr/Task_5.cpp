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
	
	ComplexNumber operator-(ComplexNumber operand2){
		return ComplexNumber(x - operand2.x, y - operand2.y);
	}
	ComplexNumber operator-(int value){
		return ComplexNumber(x - value, y);
	}
	
	ComplexNumber operator+(ComplexNumber operand2){
		ComplexNumber tmp(x + operand2.x, y + operand2.y);
		return tmp;
	}
	ComplexNumber operator+(int value){
		ComplexNumber tmp(x + value, y);
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
	ComplexNumber a(5, 4), b(4, 5);
	
	cout << "a - b = ";
	(a - b).display();
	
	cout << "a + b = ";
	(a + b).display();
	
	ComplexNumber c = a + b;
	cout << "c = a + b = ";
	c.display();
	
	a = b = c;
	cout << "a = b = c = ";
	a.display();
	
	cout << "a - 9 = ";
	(a - 9).display();
	
	ComplexNumber d(a - b);
	cout << "d(a - b) = ";
	d.display();
	
	return 0;
}
