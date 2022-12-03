#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <clocale>
using namespace std;
int main(){
	setlocale(LC_CTYPE, "ukr");
	int x,y;
    start: cin>>x>>y;
    if(x)
M1: if(y) cout<<"MO";
    else  cout<<"ÃÎ";
    cout<<"PE"<<endl;
    goto start;
    system("pause");
    return 0;
}
