#include "complex.h"
#include <iostream>
using namespace std;
void enter_cmp(CMP *com){
	cout << "Enter real: ";
	cin >> (*com).real;
	cout << "Enter imag: ";
	cin >> (*com).imag;
}

