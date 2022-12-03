#include <iostream>
#include <math.h>
using namespace std;
class TRIAN2{
	float a,b; 
public: 
	float c, S;
	TRIAN2(float x,float y){a = x;b = y;}	
	float get_C(){
		c = sqrt(a*a + b*b);
		return c;
	} 
	float get_S(){
		S = (a*b)/2;
		return S;
	} 
};
int main(){
	TRIAN2 r1(3, 4), r2(5, 12);			
	cout << r1.get_C() << endl << r1.get_S() << endl;
	cout << r2.get_C() << endl << r2.get_S() << endl;
	return 0;
}
