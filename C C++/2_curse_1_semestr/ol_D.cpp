#include <iostream>
#include <math.h>
using namespace std;
int main(){//D
	int x, a, b;
	cin >> x >> a >> b;
	if(a <= x && x <= b)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
	return 0;
}
