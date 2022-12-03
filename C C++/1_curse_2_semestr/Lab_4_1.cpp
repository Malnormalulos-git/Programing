#include <stdlib.h> 
#include <iostream> 
#include <time.h>  
#include <iomanip> 
#include <math.h>
#include <stdio.h>
#include <string.h>
using namespace std;
int main(){
	const char* file_name = "Fili.txt";
	char symbol;
	FILE* f_in;
	FILE* f_out;
	char subjects_in[3][15] = {"Mathematics", "Programing", "Computer Logic"};
	char subjects_out[3][15];
	f_in = fopen(file_name, "w");
	if(f_in == NULL){
		puts("Error!");
		return -1;
	}
	cout << "Enter symbols: ";
	while(1){
		cin >> symbol;
		if(symbol == 'q'){
			fputc('\n', f_in);
			break;
		}
		fputc(symbol, f_in);
	}
	fflush(stdin);
	for(int i = 0; i < 3; i++){
		fputs(subjects_in[i], f_in);
		fputc('\n', f_in);
	}
	fclose(f_in);
	
	f_out = fopen(file_name, "r");
	if(f_out == NULL){
		puts("Error!");
		return -2;
	}
	cout << endl << "Symbols: ";
	while(1){
		symbol = fgetc(f_out);
		cout << symbol;
		if(symbol == '\n'){
			break;
		}
	}
	puts("Subjects: ");
	for(int i = 0; i < 3; i++){
		fgets(subjects_out[i], 15, f_out);
		cout << subjects_out[i];
	}
	fclose(f_out);
	return 0;
}
