#include <stdlib.h> 
#include <iostream> 
#include <time.h>  
#include <iomanip> 
#include <math.h>
using namespace std;

class BOX{
private:
	float Lc, Wc, Hc, Lb, Wb, Hb, dL, dW, dH;
	void sort_arr(float [], int);
public:
	BOX(float = 1, float = 1, float = 1);
	void show();
	void set_box_sizes(float = 1, float = 1, float = 1);
	void size_difference();
	float get_Lb(){
		return Lb;
	}
	float get_Wb(){
		return Wb;
	}
	float get_Hb(){
		return Hb;
	}
	void is_box_fit_to_container(){
		if(Lc > Lb && Wc > Wb && Hc > Hb)
			puts("Container fit for box");
		else 
			puts("Container small for box");
	}
};
void BOX::sort_arr(float arr[], int size){
	float tmp;
    for(int i = 0; i < size - 1; i++){
		for(int j = 0; j < size - 1 - i; j++){
			if(arr[j] < arr[j + 1]){
 				tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
 	}
} 
BOX::BOX(float a, float b, float c){
	if(a <= 0 || b <= 0 || c <= 0){
		puts("Error");
		exit(EXIT_FAILURE);
	}
	float arr[] = {a, b, c};
	sort_arr(arr, 3);
	Lc = arr[0];
	Wc = arr[1];
	Hc = arr[2];
}
void BOX::show(){
	puts("\tContainer: ");
	printf("Lc = %.2fm, Wc = %.2fm, Hc = %.2fm\n", Lc, Wc, Hc);
	puts("\tBox: ");
	printf("Lb = %.2fm, Wb = %.2fm, Hb = %.2fm\n", Lb, Wb, Hb);
}
void BOX::set_box_sizes(float a, float b, float c){
	if(a <= 0 || b <= 0 || c <= 0){
		puts("Error");
		exit(EXIT_FAILURE);
	}
	float arr[] = {a, b, c};
	sort_arr(arr, 3);
	Lb = arr[0];
	Wb = arr[1];
	Hb = arr[2];
}
void BOX::size_difference(){
	dL = Lc - Lb;
	dW = Wc - Wb;
	dH = Hc - Hb;
	puts("\tSize difference: ");
	printf("dL = %.2fm, dW = %.2fm, dH = %.2fm\n", dL, dW, dH);
}
int main(){
	BOX a(0.3, 0.8, 0.4), b(0.3, 0.8, 0.4), c(5, 11);
	puts("a:");
	a.set_box_sizes(0.2, 0.15, 0.4);
	a.show();
	a.size_difference();
	a.is_box_fit_to_container();
	puts("\nb:");
	b.set_box_sizes(0.4, 0.5, 0.6);
	b.show();
	b.size_difference();
	b.is_box_fit_to_container();
	puts("\nc:");
	c.set_box_sizes(7, 3, 0.5);
	c.show();
	c.size_difference();
	c.is_box_fit_to_container();
	return 0;
}
