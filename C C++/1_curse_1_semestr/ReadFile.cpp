#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {

	const char* filename = "Learning.txt";
	char* line = NULL;
	unsigned int len = 0;
	unsigned int read;
	FILE* file; 
	file = fopen(filename, "r");
	if (file) {
		printf("The file was opened");
		while ((read = getline(&line, &len, file)) != -1) 
		{
			printf("Retrieved line of length %zu:\n", read);
			printf("%s", line);
		}
		fclose(file);
	}
	else {
		printf("Unable to open file %s", filename);
	}
	return 0;
}
