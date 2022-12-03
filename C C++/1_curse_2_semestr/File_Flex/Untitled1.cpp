#include <stdlib.h> 
#include <iostream> 
#include <time.h>  
#include <iomanip> 
#include <math.h>
#include <stdio.h>
#include <string.h>
using namespace std;
#define len 40

int main(){
	const char* file_name = "File_name.txt";
	FILE* file_in;
	FILE* file_out;
	
	char str_in[len];
	cout << "File_in: ";
//	cin >> str_in;
	file_in = fopen(file_name, "w"); 
	for(int i = 0; i < len; i++){
		fputc(i + 48, file_in);
	}
//	fputs(str_in, file_in);
	fclose(file_in);
	
	char str_out[len];
	file_out = fopen(file_name, "r");
	fgets(str_out, len + 1, file_out);
	cout << "File_out: " << str_out << endl;
	fclose(file_out);
	
	return 0;
}

