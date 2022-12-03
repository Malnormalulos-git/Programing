#include <iostream>
using namespace std;

int & getArrEl(int arr[], int index){
    return arr[index];
}

int & getLink(int a){
	int tmp = 5;
	tmp *= a;
	return tmp;
}

int main(){
	int arr[] = {1, 2, 3};
	int & link1 = getArrEl(arr, 1);
	
	int a = 5;
	int & link2 = getLink(a);
	
	cout << link1 << " " << link2 << endl;
	
    return 0;
}
