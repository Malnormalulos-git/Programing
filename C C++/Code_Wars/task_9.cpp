#include <iostream>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
using namespace std;
#include<bits/stdc++.h>

bool is_isogram(std::string str){
	transform(str.begin(), str.end(), str.begin(), ::tolower);
	for(int i = 0; i < str.length(); i++){
		if(str.find_first_of(str[i]) != str.find_last_of(str[i])){
			return false;
		}
	}
	return true;
}

int main(){
	
	return 0;
}
