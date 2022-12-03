#include <stdlib.h>
#include <iostream>
#include <iomanip>
#include <string.h>
using namespace std;
int main(){
	char arr[40];
	cout << "Input string: ";
	gets(arr);
	for(int i = 0; i < 40; i++){
		if(arr[i] == ' '){
			arr[i] = '_';
		}
	}
	char *ptra = arr;
	*(ptra + 1) = 'a';
//	for(int i = 0; i < 40; i++){
//		cout << arr[i];
//	}
//	cout<<endl;
	return 0;
}
