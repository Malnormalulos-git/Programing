#include <iostream>

using namespace std;

class Class{
public:
	int A;
	Class(int a):A(a){};
	Class operator*(int a){
		cout << "operator*" << endl;
		return Class(A*a);
	}
	void operator=(Class cl){
		cout << "operator=" << endl;
		A = cl.A;
	}
};
int main(){
	Class cl(2);
	int a = 3;
	cl = cl*a;
	cout << cl.A << endl; // 6
	return 0;
}

