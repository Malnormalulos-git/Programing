#include <stdlib.h>
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
double x; int kol=0;
 do{
    cout<<"Enter value -1<=x<=1\n";
    cin>>x;
    kol++;// підрахунок  кількості введених значень
   } 
   while(x<-1.0||x>1.0);
 cout<<"asin("<<x<<") = "<<asin(x)<<endl;
 cout<<"acos("<<x<<") = "<<acos(x)<<endl;
 cout<<"Input "<<kol<<"  value\n";
 system("pause"); 
 return 0;
 }

