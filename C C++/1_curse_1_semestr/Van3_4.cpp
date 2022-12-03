#include <stdlib.h>
#include <iostream>
using namespace std;
int main(){
long a, sum, max;
int scht;
 cout << "Enter 6 numbers: ";
 for(int i = 0; i<6; i++){
    	cin>>a;
    	if(a<0){
    	a*= -1;
    }
    if(a<3000){
        scht+=1;
        sum+=a;
    }
    if(a>max){
        max = a;
    }
 }
 cout << "\nSum = " << sum << "\nMax = " << max << "\nNumber >0 and <3000 in modeyl: " << scht;
 return 0;
 }
