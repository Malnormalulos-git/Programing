#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <time.h>
#include <iomanip>
using namespace std;
#pragma pack(push,1)
struct STR{ 
	float f;
	int arr[4];};
int main(){
	STR str1, str2[3]={1.234, 1, 2, 3, 4, 5.678, 5, 6, 7, 8};
	STR *pstr=new STR;
	if(pstr==NULL){
		cout<<"Error!"<<endl;
		return -1;
	}
	srand((unsigned)time(NULL));
	str1.f=rand()%10001*0.001+5.0;
	cout<<"\tSimple structure:\n"<<setw(8)<<str1.f;
	for(int i = 0; i < 4; i++){
		str1.arr[i]=rand()%11+5;
		str2[2].arr[i]=rand()%11+5;
		cout<<setw(8)<<str1.arr[i];
	}
	cout<<"\t\tSizeof(Simple structure): "<<sizeof(str1)<<endl;
	str2[2].f=rand()%10001*0.001+5.0;
	cout<<"\n\tArray of structures:\n";
	for(int i = 0; i < 3; i++){
		cout<<setw(8)<<str2[i].f;
		for(int j = 0; j < 4; j++){
			cout<<setw(8)<<str2[i].arr[j];
		}
		if(i==2){
			cout<<"\t\tSizeof(Array of structures): "<<sizeof(str2)<<endl;
			break;
		}
		cout<<endl;
	}
	(*pstr).f=rand()%10001*0.001+5.0;
	cout<<"\n\tPointer to structure:\n"<<setw(8)<<(*pstr).f;
	for(int i = 0; i < 4; i++){
		(*pstr).arr[i]=rand()%11+5;
		cout<<setw(8)<<(*pstr).arr[i];
	}
	cout<<"\t\tSizeof(Pointer to structure): "<<sizeof(pstr)<<endl<<endl;
	delete pstr;
	system("pause");
	return 0;
}
