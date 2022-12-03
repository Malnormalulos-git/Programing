#include <stdlib.h>
#include <iostream>
using namespace std;
int main()
{start:
 int x,y;
    cin>>x>>y;
if(x)
M1: {if(y) cout<<"MO";}
    else  cout<<"GO";
  cout<<"PE"<<endl;
  goto start;
  system("pause");
return 0;
}
