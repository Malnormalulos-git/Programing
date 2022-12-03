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
	int intv;
	float flov;
	puts("Enter int and float values: ");
	cin >> intv >> flov;
	ofstream file;
	file.open("C:\\USERS\\fet.doc"); 
	if(!file){
		cerr << "Error:\n"; 
		exit(1);
	}
	file.write((char*)(&intv), sizeof(int));
	file.write((char*)(&flov), sizeof(float));
	file.close();
	return 0;
}

