#include <iostream>
using namespace std;
#include<time.h> 
#include<stdlib.h> 
using namespace std;
int main(){
 int r, c; 
 cout<<"Enter number of rows: ";
 cin>>r;
 cout<<"Enter number of columns: ";
 cin>>c;
 for(int i = 0; i<r; i++){
 	cout<<"* ";
 	if(i==0 || i==(r-1)){
		for(int j = 0; j<c-2; j++){
 			cout<<"* ";
		}
		cout<<"*"<<endl;
		continue;
	}
	for(int j = 0; j<c-2; j++){
 			cout<<"  ";
		}
	cout<<"*"<<endl;
 }
 system("pause"); 
 return 0;
}

