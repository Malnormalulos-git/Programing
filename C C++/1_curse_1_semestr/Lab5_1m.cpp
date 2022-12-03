#include <stdlib.h>
#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	int arr[3][5], counter[3]={0, 0, 0};
	cout<<"Enter array[3][5]:"<<endl;
	for(int i=0; i<3; i++){ 
		cout<<i<<" row:\n\n";
		for(int j=0; j<5; j++){
			cin>>arr[i][j];
			if(arr[i][j]<0)
				counter[i]+=arr[i][j];
		}
		cout<<endl;
	}
	cout<<"Array:"<<endl;
	for(int i=0; i<3; i++){ 
		for(int j=0; j<5; j++){
			cout<<setw(5)<<arr[i][j]<<" ";
		}
 		cout<<"     Sum of negative numbers = "<<counter[i]<<endl;
	}
	system("pause"); 
	return 0;
}
