#include <stdlib.h> 
#include <iostream> 
#include <time.h>  
#include <iomanip> 
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <fstream>
using namespace std;
int main(){
	float farr[2];
	int iarr[2];
	ifstream file("C:\\MOM\\rtu9.doc");
	if(!file){
		puts("Error");
 		return 1;
	}
	file.read((char*)(farr),sizeof(float));
	file.read((char*)(farr + 1),sizeof(float));
	file.read((char*)(iarr),sizeof(int));
	file.read((char*)(iarr + 1),sizeof(int));
	file.close();
	printf("farr: %f, %f\n", farr[0], farr[1]);
	printf("iarr: %d, %d\n", iarr[0], iarr[1]);
	return 0;
}

//float farr[2]/* = {1.2, 2.2}*/;
//int iarr[2]/* = {3, 4}*/;
//	ofstream out("test22.txt");
//	if(!out){
//	cout<<"Cannot open file for writing"<<endl;
//	return 1;
//	}
//	out.write((char*)(farr),sizeof(float));
//	out.write((char*)(farr + 1),sizeof(float));
//	out.write((char*)(iarr),sizeof(int));
//	out.write((char*)(iarr + 1),sizeof(int));
//	out.close();
