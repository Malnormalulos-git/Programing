#include <iostream>
#include <math.h>
using namespace std;
#define PI 3.14159265359
int main(){//A
	short r, w, l;
	cin >> r >> w >> l;
	double diag = sqrt(w*w + l*l);
	short diam = 2*r; 
	if(diag <= diam)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
	return 0;
}
