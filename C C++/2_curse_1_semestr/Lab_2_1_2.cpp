#include <iostream>
#include <ctime>
#include <cstdlib>
#include <iomanip>

using namespace std;

class Array{
private:
	int n;
	int* p;
	friend class Sort;
public:
	Array (int);
	void display();
	~Array();
};

Array::Array(int m):n(m){
	p = NULL;
	p = new int [n];
	if(p == NULL){
		cout << "Error! Dynamic memory allocation failed" << endl;
	}
	srand (time(NULL));
	for(int i = 0; i < n; i++){
		p[i] = rand()%100;
		cout << setw(2) << p [i] << " ";
	}
	cout << endl;
}

void Array::display(){
	for(int i = 0; i < n; i++){
		cout << setw(2) << p[i] << " ";
	}
	cout << endl;
}

Array::~Array(){
	delete[] p;
}

class Sort{
public:
	int min(Array*);
	void sortByGrowth(Array*);
	void sortByDecrease(Array*);
};

int Sort::min(Array* x){
	int tmp = x -> p[0];
	for(int i = 1; i < x -> n; i++)
		if(x -> p[i] < tmp)
			tmp = x -> p [i];
	return tmp;
}

void Sort::sortByGrowth(Array* a){
	for(int j = a -> n - 1, i; j >= 1; j--)
		for(i = 0; i < j; ++i)
		if(a -> p[i] > a -> p[i + 1])
			swap(a -> p[i], a -> p[i + 1]);
}

void Sort::sortByDecrease(Array* a){
	for(int j = a -> n - 1, i; j >= 1; j--)
		for(i = 0; i < j; ++i)
		if(a -> p[i] < a -> p[i + 1])
			swap(a -> p[i], a -> p[i + 1]);
}

int main(){
	puts("Original array: ");
	Array arr(10);
	Sort srt;
	
	puts("\nSort by growth: ");
	srt.sortByGrowth(&arr);
	arr.display();
	
	puts("\nSort by decrease: ");
	srt.sortByDecrease(&arr);
	arr.display();
	
	cout << "\nmin = " << srt.min(&arr);
	return 0;
}
