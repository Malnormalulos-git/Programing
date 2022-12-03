#include <stdlib.h>
#include <iostream>
#include<time.h>
#include <iomanip>
using namespace std;
int main(){
	int i,j,k,N;
	cout<<"Input the size of the square matrix: \n";
	cin>>N;
	int **matr1; 
	matr1=new int*[N]; 
	if(matr1==NULL){ 
		cout<<"Error!\n"; 
		return -1;
	}
	for(i=0;i<N;i++){
		matr1[i]=new int[N]; 
 		if(matr1[i]==NULL){
			cout<<"Error!\n";
			return -2;
		}
	}
	cout<<"\n Input the elements of the matrix_1:\n";
	for(i=0;i<N;i++)
		for(j=0;j<N;j++)
			cin>>matr1[i][j];
	cout<<"\n\tMatrix matrix_1:\n";
	for(i=0;i<N;i++){
		for(j=0;j<N;j++) 
			cout<<setw(8)<<matr1[i][j];
		cout<<endl; 
	}//заповнили і вивели 1 матрицю
	int **matr2;
	matr2=new int*[N];
	if(matr2==NULL){
		cout<<"Error!\n"; 
		return -1;
	}
	for(i=0;i<N;i++){
		matr2[i]=new int[N]; 
		if(matr2[i]==NULL) {
			cout<<"Error!\n"; 
			return -2;
		}
	}
	srand((unsigned)time(NULL));
	cout<<"\n\tMatrix matrix_2: \n";
	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
			matr2[i][j]=rand()%101-50;
 			cout<<setw(8)<<matr2[i][j]; 
		}
 		cout<<endl; 
	}//заповнили і вивели 2 матрицю
	cout<<"\nThe multiplication of the matrix_1 and matrix_2:\n";
	int **matr3; 
	matr3=new int*[N]; 
	if(matr3==NULL){ 
		cout<<"Error!\n"; 
		return -1;
	}
	for(i=0;i<N;i++){
		matr3[i]=new int[N]; 
 		if(matr3[i]==NULL){
			cout<<"Error!\n";
			return -2;
		}
	}
	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
			matr3[i][j]=0;
			for(k=0;k<N;k++)
				matr3[i][j]+=(matr1[i][k]*matr2[k][j]);
 			cout<<setw(8)<<matr3[i][j]; 
		}
 		cout<<endl; 
	}
	for(i=0;i<N;i++){
		delete matr1[i]; 
 		delete matr2[i]; 
 		delete matr3[i];
	}
	delete [] matr1; 
	delete [] matr2; 
	delete [] matr3; 
	system("pause"); 
	return 0;
}

