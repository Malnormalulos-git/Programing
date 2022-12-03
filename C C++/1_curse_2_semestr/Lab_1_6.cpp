#include <stdlib.h> 
#include <iostream> 
#include<time.h>  
#include <iomanip> 
#include <string.h>
using namespace std;
#pragma pack(push,1) 

int main(int argc, char **argv){
	char fav_game[] = "Tenis";
	int number;
	if(strcmp(argv[1], fav_game) != 0){
		cout << "Error! Wrong password" << endl;
		system("pause");
		return -1;
	}
	cout << argv[0] << endl << argv[1] << endl << argv[2] << endl << "Filippenkov Kyryll" << endl;
	sscanf(argv[2],"%d",&number); 
	for(int i = 1; i < 11; i++){
		cout << number << "*" << i << " = " << number*i << endl;
	}
	system("pause");
	return 0;
}
