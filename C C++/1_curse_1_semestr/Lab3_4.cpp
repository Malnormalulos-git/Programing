#include <stdlib.h>
#include <iostream>
using namespace std;
int main()
{int n=0, n1=0, n2=0, a, sum=0, pr=1;
 cout<<"Input value:\n"; 
 while(n1<10)
   {cin>>a;   // введення значень змінної а
    if(a==0) break;  // закінчення циклу при а=0
    n++;             // підрахунок кількості введених значень а
    if(!(a%2)){n2++; // підрахунок кількості парних значень а
  continue;} //закінчення ітерації
    n1++;    // підрахунок кількості непарних значень а
    sum+=a; pr*=a;// підрахунок суми та добутку непарних значень а
    cout<<"Number of odd values = "<<n1<<endl; 
    cout<<"sum of odd values ="<<sum<<endl;
    cout<<"Work odd values ="<<pr<<endl;  }
 cout<<"Number of input values = "<<n<<endl;
 cout<<"Number of even values = "<<n2<<endl;
 system("pause"); 
 return 0;}

