#include <stdlib.h>
#include <iostream>
#include <math.h>
#define min M_PI/20
#define max M_PI/2
using namespace std;
int main(){
 double x; int kol, n=1;
 for(kol=1; kol<=12; kol++){
 if(n==7) return -1;
 cout<<"Input value from PI/20 to PI/2: ";
 cin>>x;
 do{
    if(x>min && x<max){
    	cout<<"1/sin(x) = "<<1/sin(x)<<endl;
    	cout<<"1/cos(x) = "<<1/cos(x)<<endl; 
    	cout<<"n = "<<n<<endl;
    	n++;
    	break;
		}
	}
 while (x>min && x<max);
 cout<<"kol = "<<kol<<endl;
 }
 system("pause"); 
 return 0;
}
