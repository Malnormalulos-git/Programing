using namespace std;
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <iostream>
int main(){
 string str1,str2="The letter arrive to the address: ", str3; 
 puts("Input string_1 with the name of the city, street and house number: ");
 getline(cin, str1); 
 fflush(stdin); 
 cout<<"\nString_1: \""<<str1<<"\"\nNumber of symbols of string_1: "<<str1.length()<<endl;
 cout<<"\nString_2: \""<<str2<<"\"\nNumber of symbols of string_2: "<<str2.length()<<endl;
 str3=str2+str1;
 cout<<"\nString_3: \""<<str3<<"\"\nNumber of symbols of string_3: "<<str3.length()<<endl;
 system("pause"); 
 return 0;
}

