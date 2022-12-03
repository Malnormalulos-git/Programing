#include <stdlib.h>
#include <math.h>
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{double R, V;
 cout<<"Input radius\n";//введіть радіус
 cin>>R; 
 V=3.0/4.0*M_PI*R*R*R; 
 cout<<fixed<<setprecision(4);
 cout<<"R = "<<R<<" cm"<<endl;
 cout<<"V = "<<setw(10)<<V<<" cm^3\n";  
 system("pause"); 
 return 0;
}

