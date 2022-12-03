#include <stdlib.h>
#include<iostream>
using namespace std;
int main(){
 int arr[8]={-100}, *pa=arr, max=*pa, i;
 cout<<"arr[0]= -100\n";
 for(i=1; i<8; i++){
 	cout<<"arr["<<i<<"]= "; 
 	cin>>*(pa+i);
 }
 for(i=0;i<8;i++)
 	if(*(pa+i)%2==0 && *(pa+i)>max)
 		 max=*(pa+i);
 cout<<"\nMaximum even element of the array: "<<max<<endl<<endl;
 system("pause"); 
 return 0;
}

