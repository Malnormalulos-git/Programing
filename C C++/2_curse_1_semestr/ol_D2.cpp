#include <iostream>
#include <math.h>
using namespace std;
int main(){//D
	int n, m;
	cin >> n >> m;
	if(n%2 == 0 || m%2 == 0){
		cout << 0;
	}
	else{
		cout << 1;
	}
	return 0;
}
