#include <iostream> 
class CC{
	float radius, height, volume, PI;
public:
	CC(float rad, float hei){
		radius = rad;
		height = hei;
		PI = 3.14;
	}
	float get_volume(){
		volume = PI*radius*radius*height;
		return volume;
	}
};
int main(){
	CC cylinder(2.1, 3.5);
	printf("Volume of cylinder: %f\n", cylinder.get_volume());
	return 0;
}
