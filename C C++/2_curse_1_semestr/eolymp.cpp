#include <iostream>
#include <math.h>
#include <bits/stdc++.h>
using namespace std;

int main(){//A
	int n;
	int m;
	bool flag = 0;
	char arr[101];
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> arr;
		m = 0;
		flag = false;
		while(arr[m] != '\0'){
			if(arr[m] == 'Z' || arr[m] == 'V'){
				flag = true;
				break;
			}
			m++;
		}
		if(flag)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
	return 0;
}


//int main(){
//	int n;
//	cin >> n;
//	int arr[n];
//	cout << endl;
//	for(int i = 0; i < n; i++){
//		arr[i] = rand()%100;
//		cout << arr[i] << "\t";
//	}
//	sort(arr, arr + n);
//	cout << endl;
//	for(int i = 0; i < n; i++){
//		cout << arr[i] << "\t";
//	}
//	return 0;
//}











unsigned int factorial(unsigned int a){
	if(a == 0){
		return 1;
	}
	else{
		return a*factorial(a - 1);
	}
}
//int main(){
//	int n, p;
//	cin >> n >> p;
//	int *arr = new int[n];
//	for(int i = 0; i < n; i++){
//		cin >> arr[i];
//	}
//	
//	float res = (arr[0] + arr[1])*0.95;
////	cout << res << endl;
//	
//	for(int i = 2; i < n; i += 2){
//		float tmp = (arr[i] + arr[i + 1])*0.95;
//		res = (res + tmp)*0.95;
//	}
//	if(n%2 != 0){
//		res = (res + arr[n - 1])*0.95;
//	}
//	cout << res << endl;
//	return 0;
//}
