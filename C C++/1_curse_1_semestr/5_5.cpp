#include <iostream>
using namespace std;
int main()
{short a[5]={50,30,20,60,80};   
 short *p=a;
 cout<<"*p="<<*p<<endl;
 cout<<"*(p+2)="<<*(p+2)<<endl;
 cout<<"*p+2="<<*p+2<<endl;
 cout<<"(*++p-1)="<<*++p-1<<endl;
 cout<<"sizeof(a)="<<sizeof(a)<<endl;
 cout<<"sizeof(a[3])="<<sizeof(a[3])<<endl;
 cout<<"sizeof(p)="<<sizeof(p)<<endl;
 cout<<"sizeof(*p)="<<sizeof(*p)<<endl;
return 0;
}
 


