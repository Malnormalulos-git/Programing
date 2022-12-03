#include <iostream>
int main(){
	const char* file_name = "F:\\BBB\\file6.doc";
	float farr[5];
	int iarr[5];
	FILE* f_out;
	f_out = fopen(file_name, "r");
	if(f_out == NULL){
		puts("Error!");
		return -1;
	}
	puts("farr[]");
	for(int i = 0 ; i < 5; i++){
		fscanf(f_out, "%f", &farr[i]);
		printf("%f\n", farr[i]);
	}
	puts("iarr[]");
	for(int i = 0 ; i < 5; i++){
		fscanf(f_out, "%d", &iarr[i]);
		printf("%d\n", iarr[i]);
	}
	fclose(f_out);
	return 0;
}
