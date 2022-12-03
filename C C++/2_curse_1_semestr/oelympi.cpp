#include <iostream>
#include <ctime> 
#include <cstdlib>
#include <random> 
#include <stdlib.h>
#include <math.h>
#include <time.h> 
#include <sstream>
using namespace std;

int main(){
	string str;
	cin >> str;
	stringstream Str;
	Str << str;
	string temp;
	bool value;
    int found = 0;
    while(!Str.eof()){
        Str >> temp;
		stringstream(temp) >> value;
		cout << value;
//        temp = "";
    }
//    	return found;
	return 0;
}
