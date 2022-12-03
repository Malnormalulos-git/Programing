#include <stdlib.h> 
#include <iostream> 
#include<time.h>  
#include <iomanip> 
using namespace std;
#pragma pack(push,1) 

long func1(long a, long b){
	if(b < 100){
		return a*b;
	}
	return 100;
}
float func2(float a, float b, float c){
	return (a+b+c)/3;
}
int main(){
	float a, b, c;
	long d, e;
	cout << "Func1(20, 123324654) = " << func1(20, 123324654);
	cout << "\nEnter 2 long numbers: ";
	cin >> d >> e;
	cout << "Func1(" << d << ", " << e << ") = " << func1(d, e) << endl << endl;
	
	cout << "Func2(1.1, -2.3, 5.7) = " << func2(1.1, -2.3, 5.7);
	cout << "\nEnter 3 float numbers: ";
	cin >> a >> b >> c;
	cout << "Func2(" << a << ", " << b << ", " << c << ") = " << func2(a, b, c);
	return 0;
}


