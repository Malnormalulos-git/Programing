#include <stdlib.h> 
#include <iostream> 
#include <time.h>  
#include <iomanip> 
#include <math.h>
using namespace std;
	class VECTOR{
		int *arr;
		int size;
	public:
		VECTOR(int s){
			size = s;
			arr = new int[size];
		}
		void random_elements(){
			for(int i = 0; i < size; i++)
				arr[i] = rand()%101;
		}
		int count_even(){
			int counter = 0;
			for(int i = 0; i < size; i++)
				if(arr[i]%2 == 0)
					counter++;
			return counter;
		}
		void display(){
			for(int i = 0; i < size; i++)
				cout << '\t' << arr[i];
			cout << '\n';
		}
	};
int main(){
	srand((unsigned)time(NULL));
	VECTOR a(5), b(7);
	a.random_elements();
	b.random_elements();
	cout << "a: ";
	a.display();
	cout << "Even elements: " << a.count_even() << endl;
	cout << "b: ";
	b.display();
	cout << "Even elements: " << b.count_even() << endl;
	return 0;
}
