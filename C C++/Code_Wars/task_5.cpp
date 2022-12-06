#include <iostream>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
using namespace std;
int stringlen(const char *str){
	int i = 0;
	while(str[i++]);
  	return i;
}
char * maskify(char *masked, const char *string){
	int len = stringlen(string);
//	masked = (char*)malloc(len);
	for(int i = 0; i < len; i++){
		if(i >= len - 5){
			masked[i] = string[i];
		}
		else{
			masked[i] = '#';
		}
	}
	return masked;
}

int main(){
	const char string[9] = "00001234";
	char * masked;
	maskify(masked, string);
	cout << maskify(masked, string) << endl;
	return 0;
}

