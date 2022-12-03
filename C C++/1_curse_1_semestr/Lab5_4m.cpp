#include <time.h> 
#include <stdlib.h> 
#include <iostream>
#include <iomanip>
using namespace std;
int main(){	
	int n;
	srand((unsigned)time(NULL));
	cout<<"Input size array\n";
	cin>>n;
	char *ptr = (char*)malloc(n*sizeof(char)); 
	if(ptr==NULL){
		cout<<"Error\n"; return -1;
	}
	cout<<"Array:\n";
	for(int i=0; i<n; i++){
 		ptr[i]=rand()%66+60;
		printf("%4d ", ptr[i]);
	}
	cout<<endl;
	for(int i=0; i<n; i++){
		printf("%4c ", ptr[i]);
	}
	cout<<endl;
	delete [] ptr;
	system("pause"); 
	return 0;
}

