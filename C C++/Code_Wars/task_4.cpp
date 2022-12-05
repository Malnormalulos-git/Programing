#include <iostream>
#include <stdio.h>
char findMissingLetter(char array[], int arrayLength){
	for(int i = 1; i < arrayLength; i++){
		if(array[i] != array[i - 1] + 1){
			return (char)(array[i - 1] + 1);
		}
	}
}
int main(){
	char arr1[] = { 'a','b','c','d','f' };
    char arr2[] = { 'O','Q','R','S' };
    printf("arr1 - %c\n", findMissingLetter(arr1, 5));
    printf("arr2 - %c\n", findMissingLetter(arr2, 4));
	return 0;
}
