#include <stdlib.h> 
#include <iostream> 
#include <time.h>  
#include <iomanip> 
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <fstream>
using namespace std;
struct BOOK{
	int number;
	char title[40];
	char autor[20];
	int year;
	int quantity;
};
int main(){
	BOOK in_library[5] = {  {38, "Mother", "Mykola Khvylovy", 1928, 34},
							{74, "Sapiens: A Brief History of Humankind", "Yuval Noah Harary", 2011, 76},
							{19, "Nineteen Eighty-Four", "George Orwell", 1949, 11},
							{58, "Lord of the Flies", "William Golding", 1954, 14},
							{31, "En man som heter Ove", "Fredrik Backman", 2012, 22}};
	char file_name[20];
	cout << "Enter file name(don`t forget .txt): ";
	cin >> file_name;
	
	ofstream in_file;
	in_file.open(file_name); 
	if(!in_file){
		cerr << "Error:\n"; 
		exit(1);
	}
	for(int i = 0; i < 5; i++){
		in_file.write((char*)(&in_library[i].number), sizeof(int));
		in_file.write(in_library[i].title, strlen(in_library[i].title));
		in_file.write(in_library[i].autor, strlen(in_library[i].autor));
		in_file.write((char*)(&in_library[i].year), sizeof(int));
		in_file.write((char*)(&in_library[i].quantity), sizeof(int));
	}
	in_file.close();
	
	BOOK out_library[5];
	int s_c;
	ifstream out_file;
	out_file.open(file_name); 
	if(!out_file){
		cerr << "Error:\n"; 
		exit(1);
	}
	cout << "Num\tTitle\t\t\t\t\tAutor\t\t    Year\tQuantity\n";
	for(int i = 0; i < 5; i++){
		out_file.read((char*)(&out_library[i].number), sizeof(int));
		out_file.read(out_library[i].title, strlen(in_library[i].title));
		s_c = out_file.gcount();
		out_library[i].title[s_c] = '\0';
		out_file.read(out_library[i].autor, strlen(in_library[i].autor));
		s_c = out_file.gcount();
		out_library[i].autor[s_c] = '\0';
		out_file.read((char*)(&out_library[i].year), sizeof(int));
		out_file.read((char*)(&out_library[i].quantity), sizeof(int));
		printf("%d\t%-40s%-20s%d\t%d\n", out_library[i].number, out_library[i].title, out_library[i].autor, out_library[i].year, out_library[i].quantity);
	}
	out_file.close();
	return 0;
}

