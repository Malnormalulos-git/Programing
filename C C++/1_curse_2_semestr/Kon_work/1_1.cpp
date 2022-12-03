#include <iostream> 
double func(double var1, double var2){
	if(var1 >= 0){
		return var1*var2*var2;
	}
	return var1*var1*var2;
}
int main(){
	double a, b;
	printf("func(3, -5) = %lf\n", func(3, -5));
	puts("Enter 2 values: ");
	scanf("%lf%lf", &a, &b);
	printf("func(%lf, %lf) = %lf\n", a, b, func(a, b));
	return 0;
}
