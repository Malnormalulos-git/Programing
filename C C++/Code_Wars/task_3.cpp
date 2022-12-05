#include <iostream>
#include <vector>
#include <map>
using namespace std;
std::vector<int> deleteNth(std::vector<int> arr, int n){
	vector<int> result;
	map<int, int> dictionary;
	for(auto i : arr){
		if(dictionary.count(i) == 0){
			dictionary.insert({i, 1});
			result.push_back(i);
		}
		else{
			dictionary[i]++;
			if(dictionary[i] <= n){
				result.push_back(i);
			}
		}
	}
	return result;
}

int main(){
	vector<int> result = deleteNth({1,1,3,3,7,2,2,2,2}, 3);;
	for(auto i : result)
		cout << i << ", ";
	return 0;
}
