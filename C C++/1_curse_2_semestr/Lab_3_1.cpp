#include <stdlib.h> 
#include <iostream> 
#include <time.h>  
#include <iomanip> 
#include <math.h>
using namespace std;

class RHOMB{
	float diagonal_1, diagonal_2, area;
	public: 
		float side, perimeter;
		RHOMB(float a, float b){
		diagonal_1 = a;
		diagonal_2 = b;
		}
		float get_side();
		float get_area();
		float get_perimeter();
};
float RHOMB::get_side(){
	side = sqrt(diagonal_1*diagonal_1 + diagonal_2*diagonal_2)/2;
	return side;
}
float RHOMB::get_area(){
	area = (diagonal_1*diagonal_2)/2;
	return area;
}
float RHOMB::get_perimeter(){
	perimeter = sqrt(diagonal_1*diagonal_1 + diagonal_2*diagonal_2)*2;
	return perimeter;
}
int main(){
	RHOMB a(2, 4), b(3, 5);
	cout << "a:" << endl;
	cout << "Diagonal_1 = 2" << endl << "Diagonal_2 = 4" << endl;
	cout << "Side = " << a.get_side() << endl;
	cout << "Area = " << a.get_area() << endl;
	cout << "Perimeter = " << a.get_perimeter() << endl << endl;
	
	cout << "b:" << endl;
	cout << "Diagonal_1 = 3" << endl << "Diagonal_2 = 5" << endl;
	cout << "Side = " << b.get_side() << endl;
	cout << "Area = " << b.get_area() << endl;
	cout << "Perimeter = " << b.get_perimeter() << endl << endl;
	
	cout << "sizeof(RHOMB) = " << sizeof(RHOMB) << endl;//методи класу нe займають пам'ять, змінні займають(5 змінних типу float = 20 байт)
}
