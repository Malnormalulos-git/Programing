#include <stdlib.h>
#include <iostream>
using namespace std;
int main(){
 int n = 0, n1;
 float x, sum = 0;
 cout<<"This program calculates the sum of real numbers in range [-99;-5).\nIf you want to end the program, enter a number less than -99.\n"<<endl;
 cout<<"Input number of cycles:";
 cin>>n1;
 for(int i = 0;i < n1; i++){
   cout<<"Input number:";
   cin>>x;
   if(x < -99){
    cout<<"The number "<<x<<" is less than -99. Exit from the cycle\n"; 
    break;
   }
   else if(x < -5){ 
   n++;
   sum+=x;
   } 
   cout<<"n="<<n<<",  sum="<<sum<<"\n\n";    
 }
 system("pause"); 
 return 0;
}
