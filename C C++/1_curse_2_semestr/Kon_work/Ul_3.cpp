#include <stdlib.h> 
#include <iostream> 
#include <time.h>  
#include <iomanip> 
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <fstream>
using namespace std;
int main(){
	ifstream file; 
	file.open("C:\\IOT\\zn11.txt");
	if(!file){
		cerr << "Error:\n"; 
		exit(1);
	}
	char str[3][20];
	int arr[2];
	file >> str[0] >> str[1] >> str[2];
	cout << str[0] << endl << str[1] << endl << str[2] << endl;
	file >> arr[0] >> arr[1];
	cout << arr[0] << endl << arr[1] << endl;
	file.close();
	return 0;
}
