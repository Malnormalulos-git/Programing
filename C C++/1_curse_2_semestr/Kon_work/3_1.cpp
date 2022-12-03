#include <iostream>
int main(){
	const char* file_name = "F:\\FFF\\aaa.txt";
	char arr[3] = {'K', 'U', 'F'};
	FILE* f_in;
	f_in = fopen(file_name, "w");
	if(f_in == NULL){
		puts("Error!");
		return -1;
	}
	for(int i = 0 ; i < 3; i++)
		fprintf(f_in, "%c", arr[i]);
	fclose(f_in);
	return 0;
}
