#include <iostream>
#include <stdio.h>
using namespace std;

#define LEN 1024
int main(){
	char *file_name = "Test_file.txt";
	char str[LEN];
	char symbol;
	FILE *file_ptr = fopen(file_name, "r+w");
	if(file_ptr == NULL){
		cout << "Cannot open file " << file_name;
		return -1;
	}
	cout << "---The original contents of the file: \n\n";
	while(fgets(str, LEN, file_ptr))
		cout << str;

	fseek( file_ptr , 0 , SEEK_SET ); 
	while(/*!feof(file_ptr)*/symbol = fgetc(file_ptr), symbol != EOF){
//		cout << symbol;
		if(symbol == 'a'){
			fseek(file_ptr, -1 , SEEK_CUR);
			fprintf(file_ptr, "1");
			fseek(file_ptr, 0 , SEEK_CUR);
		}
	}
	
	cout << "\n\n---The final contents of the file: \n\n";
	fseek( file_ptr , 0 , SEEK_SET ); 
	while(fgets(str, LEN, file_ptr))
		cout << str;
	fclose(file_ptr);
	return 0;
}
