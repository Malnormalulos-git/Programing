#include <iostream>
#include <math.h>
using namespace std;
int main(){//I
	int n;
	cin >> n;
	int tmp = pow(2, 1);
	for(int i = 1; tmp < n; ){
		cout << tmp << " ";
		i++;
		tmp = pow(2, i);
	}
	return 0;
}
