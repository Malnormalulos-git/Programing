#include <iostream>
#include <math.h>
using namespace std;
int main(){//D
	int n;
	int m;
	int *nums;
	cin >> m;
	for(int i = 0; i < m; i++){
		cin >> n;
		nums = new int[n];
		for(int j = 0; j < n; j++){
			cin >> nums[j];
		}
		if(n == 1){
			cout << "NO" << endl << nums[0] << endl;
		}
		else{
			bool flag = false;
			for(int j = 1; j < n; j++){
				if(nums[j-1] != nums[j]){
					flag = true;
					break;
				}
			}
			if(flag){
				cout << "YES" << endl;
				for(int j = 1; j <= n; j++)
					cout << j << " ";
				cout << endl;
			}
			else{
				cout << "NO" << endl;
			}
		}
		delete[] nums;
	}
	return 0;
}
