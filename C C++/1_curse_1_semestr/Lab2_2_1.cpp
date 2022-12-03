#include <stdlib.h>
#include <iostream>
using namespace std;
int main()
{
 int x, y;
 cout<<"Input value x:"; 
 cin>>x;
 cout<<"Input value y:"; 
 cin>>y;
 if(x<y) {
   cout<<endl<<"The smallest value: "<<x<<endl;
   if(x%2==0) 
    cout<<"number "<<x<<" even\n\n";
   else 
    cout<<"number "<<x<<" odd\n\n";
  }
  else {
   cout<<endl<<"The smallest value: "<<y<<endl;
   if(y%2==0) 
    cout<<"number "<<y<<" even\n\n";
   else 
    cout<<"number "<<y<<" odd\n\n";
  }
 system("pause");
 return 0;
}
