#include <stdlib.h>
#include <iostream>
using namespace std;
int main(){
 int a=0, sum=0, n=0;
 while(sum<50){
   n+=1;    
   cout<<"Input value: ";
   cin>>a;
   sum+=a; 
   cout<<"\nn="<<n<<"  sum="<<sum<<endl; 
   }
 cout<<"\nLoops n="<<n<<"\n"<<endl; 
 system("pause"); 
 return 0;
}

