#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;
int main(){
int a ;
cout<<"Input number from 1 to 7 and you will know what day is it:\n";
cin>>a;
switch(a){
  case 1:  
  case 2: 
  case 3:  
  case 4:  
  case 5: cout<<"Work day\n"; break;
  case 6: cout<<"Saturday\n"; break;
  case 7: cout<<"Sunday\n"; break;
  
  default: cout<<"Error! Value from 1 to 7\n"; 
}
 system("pause");
 return 0;
 }

