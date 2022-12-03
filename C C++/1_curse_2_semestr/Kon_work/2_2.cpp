#include <iostream> 
#include <math.h>
class CON{
	float radius, height, l;
public:
	CON(float rad, float hei){
		radius = rad;
		height = hei;
	}
	float get_l(){
		l = sqrt(radius*radius + height*height);
		return l;
	}
};
int main(){
	CON cone(2.1, 3.5);
	printf("L of cone: %f\n", cone.get_l());
	return 0;
}
