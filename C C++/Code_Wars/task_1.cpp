#include <iostream>
#include <math.h>
using namespace std;

static std::string accum(const std::string &s){
	string str;
	for(int i = 0; i < s.length(); i++){
		str += (char)toupper(s[i]);
		for(int j = 0; j < i; j++){
			str += (char)tolower(s[i]);
		}
		if(i + 1 != s.length())
			str += '-';
	}
	return str;
}

int main(){
	string str;
	cin >> str;
	cout << accum(str);
	return 0;
}
