#include <stdlib.h>
#include <iostream>
using namespace std;
int main(){
 int n=0, x, sum=0;
 for(int i=0; i<10; i++){
 	cout<<"Input number:";
	cin>>x;
	if(x%2==0){
		n++;
		sum+=x;
		cout<<"Number "<<x<<" even, sum="<<sum<<", number of even values = "<<n<<endl;
	}
 }
 system("pause"); 
 return 0;
}
