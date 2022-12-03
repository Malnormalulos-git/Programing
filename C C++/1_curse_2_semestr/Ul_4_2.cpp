#include <stdlib.h> 
#include <iostream> 
#include <time.h>  
#include <iomanip> 
#include <math.h>
#include <stdio.h>
#include <string.h>
using namespace std;
int main(){
	srand((unsigned)time(NULL));
	const char* file_name = "Yulia.txt";
	FILE *f_in;
	FILE *f_out;
	float arr_in[4][5], arr_out[4][5];
	float tmp;
	f_in = fopen(file_name, "w");
	if(f_in == NULL){
		puts("Error!");
		return -1;
	}
	for(int i = 0; i < 4; i++){
		for(int j = 0; j < 5; j++){
			arr_in[i][j] = rand()%2001*0.01;
			fprintf(f_in, "%.3f\t", arr_in[i][j]);
		}
		fprintf(f_in, "\n");
	}
	fclose(f_in);
	
	f_out = fopen(file_name, "r");
	if(f_out == NULL){
		puts("Error!");
		return -2;
	}
	for(int i = 0; i < 4; i++){
		for(int j = 0; j < 5; j++){
			fscanf(f_out, "%.3f\t", &arr_out[i][j]);
			cout << arr_out[i][j] << '\t';
//			fscanf(f_out, "%.3f\t", &tmp);
//			cout << tmp << '\t';
		}
		cout << endl;
	}
	fclose(f_out);
	
	return 0;
}
