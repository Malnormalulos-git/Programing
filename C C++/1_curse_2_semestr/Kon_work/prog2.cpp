#include <stdlib.h> 
#include <iostream> 
#include <time.h>
#include <iomanip> 
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <fstream>
using namespace std;
class SQUARE{
	float side;
public:
	SQUARE(float side){
		this->side = side;
	}
	float getDiagonal(){
		return sqrt(side*side + side*side);
	}
	float getVolume(){
		return side*side*side;
	}
};
int main(){
    SQUARE a(1), b(3);
    cout << "A: " << a.getDiagonal() << '\t' << a.getVolume() << endl;
    cout << "B: " << b.getDiagonal() << '\t' << b.getVolume() << endl;
	return 0;
}

