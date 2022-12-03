#include <stdlib.h>
#include <iostream>
#include <iomanip>
using namespace std;
int main(){
 int arr[6], i, sum=0, n=0;
 float arf;
 for(i=0; i<6; i++){
 	cout<<"arr["<<i<<"]= "; 
 	cin>>arr[i];
 }
 for(i=0; i<6; i++)
	if(arr[i]%2==0){
		n++;
		sum+=arr[i];}
 arf=(float)sum/n;
 cout<<"Arithmetic mean of even numbers: "<<arf<<endl;   
 system("pause"); 
 return 0;
 }

