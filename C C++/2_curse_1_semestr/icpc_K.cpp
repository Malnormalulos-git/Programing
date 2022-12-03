#include <iostream>
using namespace std;
struct Number{
	short a;
	short b;
	int first;
};
int main(){//K
	int n;
	cin >> n;
	short arr[n];
	for(int i = 0; i < n; i++){
		cin >> arr[i];
	}
	int biggets_str = 1;
	int start_of_the_biggest = 1;
	int length = 0;
	Number num = {0, 0, 0};
	for(int i = 0; i < n; i++){
		if(num.a == 0){
			num.a = arr[i];
			num.first = i + 1;
			length++;
		}
		else if(num.b == 0 || num.b == num.a){
			num.b = arr[i];
			length++;
		}
		else if(num.a == arr[i] || num.b == arr[i]){
			length++;
		}
		else if(num.a != arr[i] && num.b != arr[i]){
			i = num.first - 1;
			num.first = 0;
			num.a = 0;
			num.b = 0;
			length = 0;
		}
		if(length > biggets_str){
			biggets_str = length;
			start_of_the_biggest = num.first;
		}
	}
	cout << start_of_the_biggest << " " << biggets_str << endl;
	return 0;
}
