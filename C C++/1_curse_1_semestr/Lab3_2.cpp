#include <stdlib.h>
#include <iostream>
using namespace std;
int main(){
int i, b, a=0,kol;
cout<<"Input number of cycles\n";
 cin>>kol; // Введення кількості циклів
 for(i=0; i<kol; i++){
   if(a>500){
   cout<<"a>500\n"; // Завершення циклу при a>500 
    break;
	}
    a+=1; b=a*a; 
    cout<<"a="<<a<<"  b= "<<b<<endl;    
	}
 system("pause"); 
 return 0;
 }

