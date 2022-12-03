#include <stdlib.h>
#include <iostream>
#include <math.h>
using namespace std;
int main(){
 int n, n1=0;
 long a, sum=0, max;
 for(n=0; n<6; n++){
    cout<<"Input value:";
	cin>>a;   
	if(n==0)max=a;
    if(a==999) break;
    if(abs(a)>max) max=abs(a);
    if(abs(a)<3000){
		sum+=abs(a); 
    	n1++;
    } 
    printf("\n");
	}
 cout<<"Number of inputed values = "<<n<<endl;
 cout<<"Number of values that in absolute terms less than 3000 = "<<n1<<endl;
 cout<<"Sum of values that in absolute terms less than 3000 = "<<sum<<endl;
 cout<<"Maximum value in absolute terms = "<<max<<"\n\n";
 system("pause"); 
 return 0;
}
