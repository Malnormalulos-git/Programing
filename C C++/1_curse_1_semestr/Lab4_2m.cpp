#include <iostream>
using namespace std;
#include<time.h> 
#include<stdlib.h> 
int main(){
 const int n=15;  
 int arr[n], i, n1=0;
 srand((unsigned)time(NULL));
 for(i=0; i<n; i++){
 	arr[i]=rand()%101; 
 	cout<<"Arr["<<i<<"]="<<arr[i]<<"\n";
 }
 cout<<endl;
 for(i=0; i<n; i++)
 	if(arr[i]%5==0){
 		cout<<"Arr["<<i<<"]="<<arr[i]<<" is divisible by 5"<<"\n";
 		n1++;
	}
 cout<<endl<<"Number of elements that divisible by 5: "<<n1<<endl<<endl;
 system("pause"); 
 return 0;
}

