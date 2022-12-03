#include <stdlib.h>
#include <iostream>
using namespace std;
void check_odd_even(int i){
	if(i%2==0) {
  cout<<"number "<<i<<" even \n\n";
  }
  else {
  cout<<"number "<<i<<" odd\n\n";
  }
}
int main(){
 int x, y;
 cout<<"Input value x:\n"; 
 cin>>x;
 cout<<"Input value y:\n"; 
 cin>>y;
 if(x==y){ 
  cout<<endl<<x<<"="<<y<<endl;
  check_odd_even(x);
 }
 else if(x<y) {
  cout<<endl<<x<<"<"<<y<<endl;
  check_odd_even(x);
 }
 else { 
  cout<<endl<<x<<">"<<y<<endl;
  check_odd_even(y);
 }
system("pause");
return 0;
}
