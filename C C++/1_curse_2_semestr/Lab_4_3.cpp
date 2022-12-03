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
	float in_arr[4] = {1.2365, 2.5754, 3.4456, 4.7784};
	char in_char;
	int in_int;
	puts("Enter symbol: ");
	cin >> in_char;
	fflush(stdin);
	puts("Enter int var: ");
	cin >> in_int;
	fflush(stdin);
	ofstream in_file;
	in_file.open("FKU.txt"); 
	if(!in_file){
		cerr << "Error:\n"; 
		exit(1);
	}
	for(int i = 0; i < 4; i++)
		in_file << in_arr[i] << endl;
	in_file << in_char << endl;
	in_file << in_int << endl;
	in_file.close();
	
	float out_arr[4];
	char out_char;
	int out_int;
	ifstream out_file;
	out_file.open("FKU.txt"); 
	if(!out_file){
		cerr << "Error:\n"; 
		exit(1);
	}
	for(int i = 0; i < 4; i++)
		out_file >> out_arr[i];
	out_file >> out_char >> out_int;
	out_file.close();
	cout << "Array: ";
	for(int i = 0; i < 4; i++)
		cout << out_arr[i] << '\t';
	cout << "\nSymbol: " << out_char << endl;
	cout << "Int var: " << out_int << endl;
	
	return 0;
}


