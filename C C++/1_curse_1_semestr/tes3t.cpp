#include <iostream>
using namespace std;
int main (){
//	union UN1{short i; char ch;}un1={259}; // 0x103;
//	union UN2{char ch; short i;}un2={258}; // 0x102;
//	printf("un1.i=%d un1.ch=%d\n",un1.i,un1.ch);
//	printf("un2.i=%d un2.ch=%d\n",un2.i,un2.ch);
	for(int i=0; i<32; i++){
		for(int j=0; j<8; j++){
			if((i==9 || i==10 || i==13) && j==0){
				printf("%d  \t", (i+j*32));
				continue;
			}
			printf("%d  %c\t", (i+j*32), (i+j*32));
		}
		printf("\n");
	}
	system("pause");
	return 0;
}
