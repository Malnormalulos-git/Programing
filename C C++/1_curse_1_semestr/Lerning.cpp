#include <stdio.h>
#include <string>
#include <stdlib.h>

using namespace std;

int main(){
	//string str_1;
	char str_1[1024];
	FILE *file; //= fopen("Learning.txt", "a");
//	fprintf(file, "Hello\n");
//	fclose(file);
	file = fopen("Learning.bin", "r");
	while(!feof(file)){
		//getline(file, str_1);
		fgets(str_1, 1024, file);
		printf("%s", str_1);
	}
	fclose(file);
	return 0;
}
