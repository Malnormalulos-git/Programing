#include <iostream>
using namespace std;
struct ST{
	int iarr[2];
	float farr[2];
};
int main(){	
	ST st[3] = {1, 2, 1.2, 2.1, 3, 4, 3.4, 4.3, 5, 6, 5.6, 6.5};
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 2; j++)
			cout << st[i].iarr[j] << " " << st[i].farr[j] << "   ";
		cout << endl;
	}
	return 0;
}
