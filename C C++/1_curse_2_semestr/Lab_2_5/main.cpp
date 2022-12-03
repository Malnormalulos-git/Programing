#include <stdlib.h>
#include<iostream>
using namespace std;
#include "complex.h"

int main(){
	CMP c1, c2, sum_res, sub_res, div_res;
	float real;
	
	cout << "c1:" << endl;
	enter_cmp(&c1);
	show_cmp(c1);
	
	cout << "\nc2:" << endl;
	enter_cmp(&c2);
	show_cmp(c2);
	
	sum_res = sum(c1, c2);
	cout << "\nc1 + c2 = ";
	show_cmp(sum_res);
	
	sub_res = sub(c1, c2);
	cout << "\nc1 - c2 = ";
	show_cmp(sub_res);
	
	cout << "\nEnter real number: ";
	cin >> real;
	
	div_res = div_real_by_cmp(real, c1);
	cout << showpos << '\n' << real << " / (" << c1.real << c1.imag << "i) = ";
	show_cmp(div_res); 
	
	return 0;
}

