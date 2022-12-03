#include <stdlib.h>
#include <iostream>
#include <math.h>
#define low M_PI/20
#define high M_PI/2
using namespace std;
int main(){
 double x; int n, n1 = 0;
 for(n=1; n<=12; n++){
 if(n1==6)return -1;
 cout<<"Input "<<n<<" value in range "<<low<<"<=x<="<<high<<": ";
 cin>>x;
 do{
	if(low>x || x>high){ 
		cout<<"\n";
		break;
	}
	n1++;
    cout<<"\ntan("<<x<<") = "<<tan(x)<<endl;
    cout<<"ctan("<<x<<") = "<<1/tan(x)<<endl;
    cout<<"\n";
    break;
   } 
   while(low<=x && x<=high);
 }
}
