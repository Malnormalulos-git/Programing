#include <iostream>
using namespace std;

class Based{
private:
	int privVal;
	void privFunc(){
		cout << "privFunc" << endl;
	}
protected:
	int protVal;
	void protFunc(){
		cout << "protFunc" << endl;
	}
public:
	int publVal;
	void publFunc(){
		cout << "publFunc" << endl;
	}
};

class publInheritance : public Based{
	
};

class protInheritance : protected Based{
	
};

class privInheritance : private Based{
	
};

int main(){
	publInheritance obj1;
	obj1.publVal = 1;
//	obj1.protVal = 2;
//	obj1.privVal = 3;
	obj1.publFunc();
//	obj1.protFunc();
//	obj1.privFunc();
	
	protInheritance obj2;
//	obj2.publVal = 4;
//	obj2.protVal = 5;
//	obj2.privVal = 6;
//	obj2.publFunc();
//	obj2.protFunc();
//	obj2.privFunc();
	
	privInheritance obj3;
//	obj3.publVal = 7;
//	obj3.protVal = 8;
//	obj3.privVal = 9;
//	obj3.publFunc();
//	obj3.protFunc();
//	obj3.privFunc();
	
	return 0;
}
