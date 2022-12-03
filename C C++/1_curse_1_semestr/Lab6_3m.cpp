#include <stdio.h>
#include <stdlib.h>
#pragma pack(push,1)
union UN{
	char ch[8];
	long lo[2];
};
int main(){
	UN un1={'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h'};
	puts("Union in symbols:");
	for(int i=0; i<8; i++)
		printf("%c  ", un1.ch[i]);
	puts("\n\nUnion in long:");
	for(int i=0; i<2; i++)
		printf("%#lx   %ld\n", un1.lo[i], un1.lo[i]);
	printf("\nSizeof(union): %d\n\n", sizeof(un1));
	system("pause");
	return 0;
}

