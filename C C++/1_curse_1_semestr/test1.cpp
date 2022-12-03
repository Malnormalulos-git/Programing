#include <iostream>
using namespace std;
int main()
{short m[2][3]={1,5,7,2,6,8};
short *pm=m[0];

cout<<"**(m+1)="<<**(m+1)<<" *(*(m+1)+1)="<<*(*(m+1)+1);
cout<<"\n *pm+2="<<*pm+2<<" *(pm+2)="<<*(pm+2);
cout<<"\n sizeof(m)="<<sizeof(m);
cout<<"\n sizeof(m[0])="<<sizeof(m[0]);;
cout<<"\n sizeof(m[0][0])="<<sizeof(m[0][0]);
cout<<"\n sizeof(pm)="<<sizeof(pm) <<endl;
return 0;}

