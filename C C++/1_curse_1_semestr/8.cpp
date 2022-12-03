#include <stdlib.h>
#include <iostream>
#include<time.h>
using namespace std;
int main(){
	int i,j;
	const int n=4, k=5;
	float **matr; 
	matr=new float*[n]; 
	if(matr==NULL){ 
		cout<<"Error!\n"; 
		return -1;
	}
	for(i=0;i<n;i++){
		matr[i]=new float[k]; 
 		if(matr[i]==NULL){
			cout<<"Error!\n";
			return -2;
		}	
	}
	srand((unsigned)time(NULL));
	for(i=0;i<n;i++){
		for(j=0;j<k;j++){
			matr[i][j]=rand()%10001*0.01-50.00;
		}
	}
	for(i=0;i<n;i++){
		delete matr[i]; 
	}
	delete [] matr; 
	system("pause"); 
	return 0;
}
