#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;
int main(){
 int x, b;
 cout<<"Enter 2 numbers "<<endl;
 cin>>x;
 cin>>b;
 if (x>b){
 	if (5<x && x<30)
		cout<<"First number is bigger than second and falls in the range from 5 to 30"<<endl; 
 	else 
 		cout<<"First number is bigger than second but does not fall in the range from 5 to 30"<< endl;
 }
 else if (x<b){
 	if (5<b && b<30)
    	cout<<"Second number is bigger than first and falls in the range from 5 to 30"<<endl; 
    else 
		cout<<"Second number is bigger than first but does not fall in the range from 5 to 30"<<endl;
}
 system("pause");
 return 0;
}
