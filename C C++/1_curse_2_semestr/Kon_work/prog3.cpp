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
	srand((unsigned)time(NULL));
	double arr[5];
	for(int i = 0; i < 5; i++){
		arr[i] = (rand()%10101)*0.01;
	}
	ofstream file;
	file.open("D:\\OTT\\f_new.txt"); 
	if(!file){
		cerr << "Error:\n"; 
		exit(1);
	}
	for(int i = 0; i < 5; i++)
		file << arr[i] << endl;
	file.close();
	return 0;
}

