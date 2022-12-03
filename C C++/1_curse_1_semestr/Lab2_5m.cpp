#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;
void check_range(int i){
	if(i<=-100){
		cout<<endl<<i<<"<=-100"<<endl;
	}
	else if(-99<=i && i<=0){
		cout<<endl<<"<=-99"<<i<<"<=0"<<endl;
	}
	else if(1<=i && i<=100){
		cout<<endl<<"1<="<<i<<"<=100"<<endl;
	}
	else if(i>100){
		cout<<endl<<i<<">100"<<endl;
	}
	else{
		cout<<endl<<i<<" does not fall into any range"<<endl;
	}
}
int main(){
 int x, y;
 cout<<endl<<"Input value x:\n"; 
 cin>>x;
 cout<<"Input value y:\n"; 
 cin>>y; 

 if(x==y){
 	cout<<endl<<x<<"="<<y<<endl;
 	check_range(x);
	 }
 else if(x>y){
 	cout<<endl<<x<<">"<<y<<endl;
 	check_range(y);
 }
 else{
 	cout<<endl<<x<<"<"<<y<<endl;
 	check_range(x);
 }
 system("pause");
 return 0;
}

