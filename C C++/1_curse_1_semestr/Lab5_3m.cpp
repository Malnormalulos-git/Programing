#include <stdlib.h>
#include <iostream>
#include <iomanip>
#include <string.h>
using namespace std;
int main(){
	char *parr[3]={"North America", "Canada", "Ottawa"};
	int n=0;
	cout<<"Sizeof(Array_Pointer): "<<sizeof(parr)<<endl;
	for(int i=0; i<3; i++){
		cout<<"\nString_"<<i+1<<": \""<<parr[i]<<"\"\nLengh: "<<strlen(parr[i])<<"\nPointer size: "<<sizeof(*parr)<<endl;
	}
	for(int i=0; i<strlen(parr[1]);i++){
		if(parr[1][i]=='a')
			n++;
	}
	cout<<"\nString_2 includes "<<n<<" symbols 'a'\n\n";
	system("pause"); 
	return 0;
}
