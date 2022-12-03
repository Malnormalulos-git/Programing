#include <stdlib.h>
#include <iostream>
using namespace std;
int main(){
	long *arr;
	const int n = 20;
	arr=(long*)malloc(n*sizeof(long));
	if(arr==0){
		cout<<"Error!"<<endl;
		return -1;
	}
	cout<<"Enter array:"<<endl;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	free(arr);
	system("pause");
	return 0;
}
