#include <stdlib.h>
#include <iostream>
#include <time.h>
using namespace std;
int main(){
	double *arr;
	const int n = 10;
	arr=new double[n];
	if(arr==0){
		cout<<"Error!"<<endl;
		return -1;
	}
	srand((unsigned)time(0));
	for(int i=0;i<n; i++){
		arr[i]=rand()%2001*0.1-100;
	}
	delete [] arr;
	system("pause");
	return 0;
}

