#include <stdlib.h>
#include <iostream>
#include <iomanip>
using namespace std;
int main(){
 int arr[6], i, j;
 float sum=0, avg;
 for(i=0, j=0; i<6; i++){
 	cout<<"arr["<<i<<"]= ";
 	cin>>arr[i];
 	if(arr[i]!=0) {
 		sum+=arr[i];
 		j++;
 	}
 }
 if(j==0){
 	cout<<"error"<<endl;
 }
 else {
 	avg=sum/j;
    cout<<"arithmetic mean (!=0) = "<<avg<<endl;
 }
 system("pause"); 
 return 0;
}
