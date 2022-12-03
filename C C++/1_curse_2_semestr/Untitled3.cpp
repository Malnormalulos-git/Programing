#include <stdlib.h> 
#include <iostream> 
#include <time.h>  
#include <iomanip> 
#include <math.h>
#include <conio.h>
#include <windows.h>
#include <fstream>
#include <sstream>
using namespace std;

float func(float a, float b, float c, float d){
	return a*a + b*b + c*c + d*d;
}
float func(float a, float b, float c){
	return a*a + b*b + c*c;
}
float func(float a, float b){
	return a*a + b*b;
}
int main(){
	float arr[4] = {1.3, 1.5, 4, 7.1};
	cout << "Func = " << func(arr[0], arr[1], arr[2], arr[3]) << endl;
	puts("Enter 3 float numbers: ");
	for(int i = 0; i < 3; i++)
		cin >> arr[i];
	cout << "Func = " << func(arr[0], arr[1], arr[2]) << endl;
	for(int i = 0; i < 2; i++){
		arr[i] = rand()%(1101)*0.01;
		cout << arr[i] << endl;
	}
	cout << "Func = " << func(arr[0], arr[1]) << endl;
	return 0;
}
