#include <stdlib.h> 
#include <iostream> 
#include <time.h>  
#include <iomanip> 
#include <math.h>
#include <conio.h>
#include <windows.h>
#include <fstream>
#include <sstream>
using namespace std;
int main(){
	char symbol;
	ifstream file;
//	file.open("D:\\Users\\User\Desktop\\photo.png");
	file.open("photo.png");
//	cout << "D:\\Users\\User\Desktop\\photo.png" << endl;
	if(!file){
		cerr << "Error:\n"; 
		exit(1);
	}
	while(file.peek()!=EOF){
		file >> symbol;
		cout << symbol;
	}
	file.close();
	return 0;
}
