#include <iostream>
using namespace std;

string duplicate_encoder(const std::string& word){
	string str;
	char symbol;
	bool flag;
	for(int i = 0; i < word.length(); i++){
		symbol = (char)tolower(word[i]);
		for(int j = 0; j < word.length(); j++){
			if(symbol == (char)tolower(word[j]) && j != i){
				flag = 1;
				break;
			}
				
		}
		if(flag){
			str += ')';
			flag = 0;
		}
		else
			str += '(';
	}
	return str;
}

int main(){
	string str;
	cin >> str;
	cout << duplicate_encoder(str);
	return 0;
}
