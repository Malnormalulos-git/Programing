#include <stdlib.h> 
#include <iostream> 
#include<time.h>  
#include <iomanip> 
using namespace std;
#pragma pack(push,1) 
struct STR{
	char symbol;
	float f_arr[3];
	long lon;
};
void print_str(STR *ptr){
	cout << (*ptr).symbol << '\t';
	for(int i = 0; i < 3; i++){
		cout << (*ptr).f_arr[i] << '\t';
	} 
	cout << (*ptr).lon << endl;
}
int main(){
	int counter = 0;
	srand((unsigned)time(NULL));

	STR simple;
	simple.symbol = 'a';
	simple.lon = 123123638;
	for(int i = 0; i < 3; i++){
		simple.f_arr[i] = 0.01*(rand()%501 - 250);
		if(simple.f_arr[i] > 0)
			counter++;
	}

	STR str_arr[3] = {'b', 1.1, -1.84, 2.28, 102415211, 'c', -1.337, 1.4, 8.6, 14562354};
	str_arr[2].symbol = 'd';
	str_arr[2].lon = 147477738;
	for(int i = 0; i < 3; i++)
		str_arr[2].f_arr[i] = 0.01*(rand()%501 - 250);
	for(int i = 0; i < 3; i++)
		for(int j = 0; j < 3; j++)
			if(str_arr[i].f_arr[j] > 0)
				counter++;

	STR *str_ptr;
	str_ptr = new STR;
	if(str_ptr == NULL){
		cout << "Error!";
		return -1;
	}
	(*str_ptr).symbol = 'e';
	(*str_ptr).lon = 1674738568;
	for(int i = 0; i < 3; i++){
		(*str_ptr).f_arr[i] = 0.01*(rand()%501 - 250);
		if((*str_ptr).f_arr[i] > 0)
			counter++;
	}

	cout << "Simple structure: " << endl;
	print_str(&simple);
	cout << "Sizeof() = " << sizeof(simple) << " bytes" << endl << endl;

	cout << "Array of structures: " << endl;
	for(int i = 0; i < 3; i++)
		print_str(&str_arr[i]);
	cout << "Sizeof() = " << sizeof(str_arr) << " bytes" << endl << endl;

	cout << "Dinamic structure: " << endl;
	print_str(str_ptr);
	cout << "Sizeof() = " << sizeof(*str_ptr) << " bytes" << endl << endl;

	delete str_ptr;
	cout << "Amount of possitive float numbers = " << counter << endl;
	return 0;
}
