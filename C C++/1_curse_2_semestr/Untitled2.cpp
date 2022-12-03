#include <fstream>
#include <stdlib.h> 
#include <iostream> 
using namespace std;

int main(){
	char arr[5][20];
	ifstream file;
	file.open("E:\\SAS\\abc.txt");
	cout << "Strings: " << endl;
	for(int i = 0; i < 5; i++){
		file.getline(arr[i], 20);
		cout << arr[i] << endl;
	}
	file.close();
	return 0;
}

