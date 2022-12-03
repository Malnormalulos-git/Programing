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
	const char* file_name = "Kyryl.txt";
	FILE *f_in;
	FILE *f_out;
	int counter_in, counter_out;
	int tmp_int;
	float tmp_float;
	
	cout << "Enter number of cycles: ";
	cin >> counter_in;
	
	f_in = fopen(file_name, "w");
	if(f_in == NULL){
		puts("Error!");
		return -1;
	}
	fprintf(f_in, "%d\n", counter_in);
	for(int i = 1; i <= counter_in; i++){
		fprintf(f_in, "%d\n", i);
		fprintf(f_in, "%.2f\n", rand()%(i*100 + 1)*0.01);
	}
	fclose(f_in);
	
	f_out = fopen(file_name, "r");
	if(f_out == NULL){
		puts("Error!");
		return -2;
	}
	fscanf(f_out, "%d", &counter_out);
	cout << "Counter: " << counter_out << endl;
	for(int i = 0; i < counter_out; i++){
		fscanf(f_out, "%d", &tmp_int);
		fscanf(f_out, "%f", &tmp_float);
		cout << tmp_int << ": \t" << tmp_float << endl;
	}
	fclose(f_out);
	
	return 0;
}
