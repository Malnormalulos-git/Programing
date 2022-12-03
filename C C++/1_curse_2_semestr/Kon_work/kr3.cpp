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
	char arr_c[3] = {'c', 'j', 'r'};
	int arr_i[3] = {1, 2, 5};
	float arr_f[3] = {1.2, 5.3, 0.7};
	ofstream in_file;
	in_file.open("Kr.txt"); 
	if(!in_file){
		cerr << "Error:\n"; 
		exit(1);
	}
	for(int i = 0; i < 3; i++)
		in_file << arr_c[i] << arr_i[i] << arr_f[i] << endl;
	in_file.close();
	return 0;
}
